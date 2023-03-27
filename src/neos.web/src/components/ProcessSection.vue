<template>
    <div class="process-wrapper">
        <div class="heading-wrapper">
            <p class="section-heading"><b>Save time & money</b> with our chemistry simulator</p>
        </div>
        <div class="process">
            <div class="process__card">
                <div class="process__circle"></div>
                <p class="process__heading">Your Digital World</p>
                <p class="process__text">Lorem ipsum dolor sit amet consectetur. Lorem ipsum dolor sit amet consectetur. Lorem ipsum dolor sit amet consectetur.</p>
            </div>
            <div class="process__card">
                <div class="process__circle"></div>
                <p class="process__heading">Your Digital World</p>
                <p class="process__text">Lorem ipsum dolor sit amet consectetur. Lorem ipsum dolor sit amet consectetur. Lorem ipsum dolor sit amet consectetur.</p>
            </div>
            <div class="process__card">
                <div class="process__circle"></div>
                <p class="process__heading">Your Digital World</p>
                <p class="process__text">Lorem ipsum dolor sit amet consectetur. Lorem ipsum dolor sit amet consectetur. Lorem ipsum dolor sit amet consectetur.</p>
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
        justify-content: center;
        align-items: center;
        width:100%;
        height:400px;
        column-gap:100px; 
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

</style>

