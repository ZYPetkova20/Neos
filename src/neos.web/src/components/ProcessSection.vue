<template>
    <div class="process-wrapper">
        <div class="heading-wrapper">
            <p class="section-heading"><b>Get to know </b>about process as well as trail and errors</p>
        </div>
        <div class="process">
            <div class="process__card">
                <div class="process__circle"></div>
                <p class="process__heading">Building Blocks</p>
                <p class="process__text">Creating a chemistry simulator requires a solid foundation.There was a lot of selection and processing.</p>
            </div>
            <div class="process__card">
                <div class="process__circle process__circle--purple"></div>
                <p class="process__heading">Trial and Error</p>
                <p class="process__text">Developing a chemistry simulator involves a lot of trial and error. Making such a big project can be challenging.</p>
            </div>
            <div class="process__card">
                <div class="process__circle process__circle--brown"></div>
                <p class="process__heading">Putting It All Together</p>
                <p class="process__text">Creating a chemistry simulator is a complex process that involves putting together many different pieces.</p>
            </div>
        </div>
    </div>
</template>

<style lang="scss" scoped>
    
    @font-face {
        font-family: 'Tex';
        src: url(../assets/fonts/tex-gyre-adventor.bold.ttf);
    }

    @font-face {
        font-family: 'Inter';
        src: url(../assets/fonts/Inter-Light.ttf);
    }

    @font-face {
        font-family: 'Lato-light';
        src: url(../assets/fonts/Lato-Light.ttf);
    }

    @font-face {
        font-family: 'Lato-bold';
        src: url(../assets/fonts/Lato-Bold.ttf);
    }

    .process-wrapper{
        display: flex;
        flex-direction: column;
        width:100%;
        height: 650px;
    }
    .heading-wrapper{
        display: flex;
        flex-direction: row;
        justify-content: center;
        align-items: center;
        text-align: center;
        width:100%;
        height:250px;
    }
    .section-heading{
        width: 1000px;
        font-size: 64px;
        font-family: Lato-light;
    }
    .process{
        display: flex;
        flex-direction: row;
        justify-content: space-evenly;
        align-items: center;
        width:100%;
        height:400px;
        column-gap:unset; 
    }
    .process__card{
        display: flex;
        flex-direction: column;
        justify-content: center; 
        width: 300px;
        height:100%;
        margin: unset; 
    }
    .process__circle{
        width:30px;
        height:30px;
        background-color: #89BEA8;
        border-radius: 50%;
    }.process__circle--purple{
        background-color: #C1BFF3;
    }
    .process__circle--brown{
        background-color: #FBEEE6;
    }
    .process__heading{
        font-size:26px;
        font-family: Tex;
        line-height: 0px;
    }
    .process__text{
        font-size:19px;
        font-family: Inter;
    }

    @media  screen and (max-width: 1440px) {
        .process-wrapper{
            display: flex;
            flex-direction: column;
            width:100%;
            height: 610px;
        }
        .heading-wrapper{
            display: flex;
            flex-direction: row;
            justify-content: center;
            align-items: center;
            text-align: center;
            width:100%;
            height:250px;
        }
        .section-heading{
            width: 800px;
            font-size: 56px;
            font-family: Lato-light;
        }
        .process{
            display: flex;
            flex-direction: row;
            justify-content: center;
            align-items: center;
            width:100%;
            height:400px;
            column-gap:0px; 
        }
        .process__card{
            display: flex;
            flex-direction: column;
            justify-content: center; 
            width: 300px;
            height:100%;
            margin: 0 auto;
        }
        .process__circle{
            width:30px;
            height:30px;
            background-color: #89BEA8;
            border-radius: 50%;
        }
        .process__circle--purple{
            background-color: #C1BFF3;
        }
        .process__circle--brown{
            background-color: #FBEEE6;
        }
        .process__heading{
            font-size:26px;
            font-family: Tex;
            line-height: 0px;
        }
        .process__text{
            font-size:19px;
            font-family: Inter;
        }
    }
    @media  screen and (max-width: 1200px) {

        .process-wrapper{
            display: flex;
            flex-direction: column;
            width:100%;
            height: 550px;
        }
        .heading-wrapper{
            display: flex;
            flex-direction: row;
            justify-content: center;
            align-items: center;
            text-align: center;
            width:100%;
            height:220px;
        }
        .section-heading{
            width: 800px;
            font-size: 54px;
            font-family: Lato-light;
        }
        .process{
            display: flex;
            flex-direction: row;
            justify-content: center;
            align-items: center;
            width:100%;
            height:400px;
            column-gap:0px; 
        }
        .process__card{
            display: flex;
            flex-direction: column;
            justify-content: center; 
            width: 250px;
            height:100%;
            margin: 0 auto;
        }
        .process__circle{
            width:30px;
            height:30px;
            background-color: #89BEA8;
            border-radius: 50%;
        }
        .process__circle--purple{
            background-color: #C1BFF3;
        }
        .process__circle--brown{
            background-color: #FBEEE6;
        }
        .process__heading{
            font-size:26px;
            font-family: Tex;
            line-height: 0px;
        }
        .process__text{
            font-size:19px;
            font-family: Inter;
        }
    }
    @media  screen and (max-width: 1024px) {

        .process-wrapper{
            display: flex;
            flex-direction: column;
            width:100%;
            height: 500px;
        }
        .heading-wrapper{
            display: flex;
            flex-direction: row;
            justify-content: center;
            align-items: flex-start;
            text-align: center;
            width:100%;
            height:180px;
        }
        .section-heading{
            width: 800px;
            font-size: 50px;
            font-family: Lato-light;
        }
        .process{
            display: flex;
            flex-direction: row;
            justify-content: center;
            align-items: center;
            width:100%;
            height:400px;
            column-gap:0px; 
        }
        .process__card{
            display: flex;
            flex-direction: column;
            justify-content: center; 
            width: 220px;
            height:100%;
            margin: 0 auto;
        }
        .process__circle{
            width:30px;
            height:30px;
            background-color: #89BEA8;
            border-radius: 50%;
        }
        .process__circle--purple{
            background-color: #C1BFF3;
        }
        .process__circle--brown{
            background-color: #FBEEE6;
        }
        .process__heading{
            font-size:21px;
            font-family: Tex;
            line-height: 0px;
        }
        .process__text{
            font-size:16px;
            font-family: Inter;
        }
    }
    @media  screen and (max-width: 768px) {
        .process-wrapper{
            display: flex;
            flex-direction: column;
            width:100%;
            height: 460px;
        }
        .heading-wrapper{
            display: flex;
            flex-direction: row;
            justify-content: center;
            align-items: center;
            text-align: center;
            width:100%;
            height:140px;
        }
        .section-heading{
            width: 93%;
            font-size: 43px;
            font-family: Lato-light;
        }
        .process{
            display: flex;
            flex-direction: row;
            justify-content: space-evenly;
            align-items: center;
            width:100%;
            height:320px;
            column-gap:0px; 
        }
        .process__card{
            display: flex;
            flex-direction: column;
            justify-content: center; 
            width: 150px;
            height:unset;
            margin: 0 auto;
        }
        .process__circle{
            width:27px;
            height:27px;
            background-color: #89BEA8;
            border-radius: 50%;
        }
        .process__circle--purple{
            background-color: #C1BFF3;
        }
        .process__circle--brown{
            background-color: #FBEEE6;
        }
        .process__heading{
            font-size:20px;
            font-family: Tex;
            line-height: 20px;
        }
        .process__text{
            font-size:15px;
            font-family: Inter;
        }
    }
    @media  screen and (max-width: 576px) {

        .process-wrapper{
            display: flex;
            flex-direction: column;
            align-items: center;
            justify-content: center;
            width:100%;
            height: 870px;
            row-gap: 40px;
        }
        .heading-wrapper{
            display: flex;
            flex-direction: row;
            justify-content: center;
            align-items: center;
            text-align: center;
            width:100%;
            height:140px;
        }
        .section-heading{
            width: 93%;
            font-size: 40px;
            font-family: Lato-light;
        }
        .process{
            display: flex;
            flex-direction: column;
            justify-content: space-evenly;
            align-items: center;
            width:100%;
            height:unset;
            column-gap:0px; 
        }
        .process__card{
            display: flex;
            flex-direction: column;
            justify-content: center; 
            width: 70%;
            height:unset;
            margin: 0 auto;
        }
        .process__circle{
            width:32px;
            height:32px;
            background-color: #89BEA8;
            border-radius: 50%;
        }
        .process__circle--purple{
            background-color: #C1BFF3;
        }
        .process__circle--brown{
            background-color: #FBEEE6;
        }
        .process__heading{
            font-size:24px;
            font-family: Tex;
            line-height: 20px;
        }
        .process__text{
            font-size:18px;
            font-family: Inter;
        }
    }
    @media  screen and (max-width: 480px) {

        .process-wrapper{
            display: flex;
            flex-direction: column;
            align-items: center;
            justify-content: center;
            width:100%;
            height: unset;
            row-gap: 0px;
        }
        .heading-wrapper{
            display: flex;
            flex-direction: row;
            justify-content: center;
            align-items: center;
            text-align: center;
            width:100%;
            height:200px;
            padding-top: 0px;
        }
        .section-heading{
            width: 93%;
            font-size: 32px;
            font-family: Lato-light;
        }
        .process{
            display: flex;
            flex-direction: column;
            justify-content: space-evenly;
            align-items: center;
            width:100%;
            row-gap: 20px;
            height:unset;
            column-gap:0px; 
            padding-bottom: 40px;
        }
        .process__card{
            display: flex;
            flex-direction: column;
            justify-content: center; 
            width: 70%;
            height:unset;
            margin: 0 auto;
        }
        .process__circle{
            width:30px;
            height:30px;
            background-color: #89BEA8;
            border-radius: 50%;
        }
        .process__circle--purple{
            background-color: #C1BFF3;
        }
        .process__circle--brown{
            background-color: #FBEEE6;
        }
        .process__heading{
            font-size:22px;
            font-family: Tex;
            line-height: 20px;
        }
        .process__text{
            font-size:16px;
            font-family: Inter;
        }
    }

</style>

