//functionality
import {db} from "../utils/db.server"

type User = {
    firstName: string,
    lastName: string,
    email: string,
    password: string,
}

async function seed()
{
    await Promise.all(
        getUsers().map((user) => {
            return db.user.create({
                data: {
                    firstName: user.firstName,
                    lastName: user.lastName,
                    email: user.email,
                    password: user.password,
                }
            })
        })
    )
}

seed()

function getUsers(): Array<User>{
    return [
        {
            firstName: "Penchso",
            lastName: "Penchsov",
            email: "ppenchos54v@gmail.com",
            password: "malinki12",
        },

        {
            firstName: "Msincho",
            lastName: "Minschov",
            email: "mminchso5v2@gmail.com",
            password: "malinki13",
        }
    ]
}