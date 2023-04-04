import { db } from "../utils/db.server";
import { reactionRouter } from "./reaction.router";
import type { Request, Response } from "express"
import { request } from "http";

import * as reactionService from "./reaction.service"
import { Reaction } from "@prisma/client";

type Rection = {
    id: number,
    water: boolean,
    fName: string
}

export const  listReactions = async ():  Promise<Reaction[]> => {
    return db.reaction.findMany({
        select:{
            id: true,
            water: true,
            fName: true
        }
    })
}

export const getReaction = async(id: number): Promise<Reaction | null> => {
    return db.reaction.findUnique({
        where: {
            id,
        },

        select: {
          id: true,
          water: true,
          fName: true
        },
    })
}

export const createReaction = async(Reaction: Omit<Rection, "id">): Promise<Reaction> => {
    const {water, fName} = Reaction
    return  db.reaction.create({
        data: 
        {
           water,
           fName
        },

        select: {
            id: true,
            water: true,
            fName: true
        }
    })
}

export const updateReaction = async(Reaction: Omit<Reaction, "id">, id: number): Promise<Reaction> => {
    const {water, fName} = Reaction
    return db.reaction.update({
        where: {
            id,
        },

        data: {
            water,
            fName,
        },

        select: {
           id: true,
           water: true,
           fName: true
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