//functionality
import {db} from "../src/utils/db.server"

type User = {
    firstName: string,
    lastName: string,
    email: string,
    password: string,
    salt: string
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
                    salt: user.salt
                }
            })
        })
    )

    const user = await db.user.findFirst({
        where:{
            firstName: "Pencho"
        }
    })
}

seed()

function getUsers(): Array<User>{
    return [
        {
            firstName: "Pencho",
            lastName: "Penchov",
            email: "ppenchov@gmail.com",
            password: "malinki12",
            salt: ""
        },

        {
            firstName: "Mincho",
            lastName: "Minchov",
            email: "mminchov@gmail.com",
            password: "malinki13",
            salt: ""
        }
    ]
}