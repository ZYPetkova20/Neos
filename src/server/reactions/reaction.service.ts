import { db } from "../utils/db.server";
import { reactionRouter } from "./reaction.router";
import type { Request, Response } from "express"
import { request } from "http";

import * as reactionService from "./reaction.service"

type Reaction = {
    id: number,
    userId: number
    ReactionType: number
}

export const  listReactions = async ():  Promise<Reaction[]> => {
    return db.reaction.findMany({
        
        select:{
            id: true,
            userId: true,
            ReactionType: true
        }
    })
}

export const getReaction = async(userId: number): Promise<Reaction[] | null> => {
    return db.reaction.findMany({
        where: {
            userId
        },

        select: {
          id: true,
          userId: true,
          ReactionType: true
        },
    })
}

export const createReaction = async(Reaction: Omit<Reaction, "id">): Promise<Reaction> => {
    const {userId, ReactionType} = Reaction
    return  db.reaction.create({
        data: 
        {
           userId,
           ReactionType
        },

        select: {
            id: true,
            userId: true,
            ReactionType: true
        }
    })
}

export const updateReaction = async(Reaction: Omit<Reaction, "id">, id: number): Promise<Reaction> => {
    const {userId, ReactionType} = Reaction
    return db.reaction.update({
        where: {
            id,
        },

        data: {
            userId,
            ReactionType
        },

        select: {
           id: true,
           userId: true,
           ReactionType: true
        }
    })
}

export const deleteReaction = async (id: number): Promise<void> => {
    await db.reaction.delete({
        where: {
            id,
        },
    })
}