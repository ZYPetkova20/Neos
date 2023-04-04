import express from "express"
import type { Request, Response } from "express"
import {body, validationResult} from "express-validator"
import bcrypt from "bcrypt"
import * as reactionService from "./reaction.service"
import { request } from "http"

export const reactionRouter = express.Router()

//GET: list of all reactions
reactionRouter.get("/", async(request: Request, response: Response) => {
    try{
        const reactions = await reactionService.listReactions()
        return response.status(200).json(reactions)
    }
    catch(error: any){
        return response.status(500).json(error.message)
    }
})

//GET: a single reaction by id 
reactionRouter.get("/:userId", async(request: Request, response: Response) => {
    const userId: number = parseInt(request.params.userId, 10)

    try{
        const reaction = await reactionService.getReaction(userId)

        if(reaction){
            return response.status(200).json(reaction)
        }
        return response.status(404).json("Author could not ne found")
    }
    catch(error: any){
        return response.status(500).json(error.message)
    }
}) 

//POST: create an reaction
reactionRouter.post("/", body("userId").isInt(), body("ReactionType").isInt(), 
async(request: Request, response: Response) => {
    const errors = validationResult(request)

    if(!errors.isEmpty()){
        return response.status(400).json({errors: errors.array()})
    }

    try{
        const reaction = request.body

        const newReaction = await reactionService.createReaction(reaction)
        return response.status(201).json(newReaction)
    }
    catch(error: any){
        return response.status(500).json(error.message)
    }
})

//POST: updating an reaction
reactionRouter.put("/:id", body("userId").isInt(), body("ReactionType").isInt(), 
async(request: Request, response: Response) => {
    const errors = validationResult(request)

    if(!errors.isEmpty()){
        return response.status(400).json({errors: errors.array()})
    }

    const id: number = parseInt(request.params.id, 10) 

    try{
        const reaction = request.body
        const updatedReaction = await reactionService.updateReaction(reaction, id)

        return response.status(200).json(updatedReaction)
    }
    catch(error: any){
        return response.status(500).json(error.message)
    }
})


//DELETE: Delete an reaction based on the id
reactionRouter.delete("/:id", async(request: Request, response: Response) => {
    const id: number = parseInt(request.params.id, 10)

    try{
        await reactionService.deleteReaction(id)
        return response.status(204).json("Author has been successfully deleted")
    }
    catch(error: any){
        return response.status(500).json(error.message)
    }
})