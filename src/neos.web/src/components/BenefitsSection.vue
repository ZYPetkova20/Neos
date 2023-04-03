<template>
    <div class="benefits" id="benefits">
        <div class="benefits__card">
            <img src="../assets/images/book-icon.png" alt="Icon">
            <p class="benefits__heading">Interactive learning</p>
            <p class="benefits__text">We offer interactive and immersive learning experiance.</p>
        </div>
        <div class="benefits__card">
            <img src="../assets/images/accessibility-icon.png" alt="Icon">
            <p class="benefits__heading">Accessibility</p>
            <p class="benefits__text">Designed to be accessible to all learners.</p>
        </div>
        <div class="benefits__card">
            <img src="../assets/images/flexibility-icon.png" alt="Icon">
            <p class="benefits__heading">Flexibility</p>
            <p class="benefits__text">Learn on your own pace, from anywhere and any time.</p>
        </div>
        <div class="benefits__card">
            <img src="../assets/images/exclusive-icon.png" alt="Icon">
            <p class="benefits__heading">Exclusive content</p>
            <p class="benefits__text">Comprehensive range of content, covering a wide variety of topics.</p>
        </div>
    </div>
</template>

<style lang="scss" scoped>
    //Import Fonts
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
    
    .benefits{
        display: flex;
        flex-direction: row;
        justify-content: center;
        align-items: center;
        width:100%;
        height:400px;
        column-gap:100px;
        background-color: #282D2F;  
    }
    .benefits__card{
        display: flex;
        flex-direction: column;
        justify-content: center; 
        width: 300px;
        height:100%;
            img{
                width:50px;
                height:52px;
                padding-bottom: 13px;
            }
    }
    .benefits__heading{
        font-size:26px;
        font-family: Tex;
        color:white;
        line-height: 0px;
    }
    .benefits__text{
        font-size:19px;
        font-family: Inter;
        color:white;
    }

    //To 1440px
    @media  only screen and (max-width:1600px){
        .benefits{
            display: flex;
            flex-direction: row;
            justify-content: center;
            align-items: center;
            width:100%;
            height:400px;
            column-gap:50px;
            background-color: #282D2F;  
        }
    }

    @media  screen and (max-width: 1440px) {
        .benefits{
            display: flex;
            flex-direction: row;
            justify-content: center;
            align-items: center;
            width:100%;
            height:340px;
            column-gap:50px;
            background-color: #282D2F;  
        }
        .benefits__card{
            display: flex;
            flex-direction: column;
            justify-content: center; 
            width: 250px;
            height:100%;
                img{
                    width:45px;
                    height:47px;
                    padding-bottom: 13px;
                }
        }
        .benefits__heading{
            font-size:23px;
            font-family: Tex;
            color:white;
            line-height: 0px;
        }
        .benefits__text{
            font-size:17px;
            font-family: Inter;
            color:white;
        }
    }
    @media  screen and (max-width: 1200px) {
        .benefits{
            display: flex;
            flex-direction: row;
            justify-content: center;
            align-items: center;
            width:100%;
            height:340px;
            column-gap:50px;
            background-color: #282D2F;  
        }
        .benefits__card{
            display: flex;
            flex-direction: column;
            justify-content: center; 
            width: 200px;
            height:100%;    
                img{
                    width:40px;
                    height:42px;
                    padding-bottom: 13px;
                }
        }
        .benefits__heading{
            font-size:20px;
            font-family: Tex;
            color:white;
            line-height: 0px;
        }
        .benefits__text{
            font-size:15px;
            font-family: Inter;
            color:white;
        }
    }
    @media  screen and (max-width: 1024px) {
        .benefits{
            display: flex;
            flex-direction: row;
            justify-content: center;
            align-items: center;
            width:100%;
            height:540px;
            column-gap:30px;
            background-color: #282D2F;  
            flex-wrap: wrap;
            
                div:nth-child(1){
                    margin-top: 40px;
                }
                div:nth-child(2){
                    margin-top: 40px;
                }
                div:nth-child(3){
                    margin-bottom: 40px;
                }
                div:nth-child(4){
                    margin-bottom: 40px;
                }
        }
        .benefits__card{
            display: flex;
            flex-direction: column;
            justify-content: flex-start; 
            align-items: flex-start;
            width: 300px;
            height:200px;    
            padding-left: 50px;
                img{
                    width:45px;
                    height:47px;
                    padding-bottom: 13px;
                }
        }
        .benefits__heading{
            font-size:22px;
            font-family: Tex;
            color:white;
            line-height: 0px;
        }
        .benefits__text{
            font-size:17px;
            font-family: Inter;
            color:white;
            width:85%;
        }
    }
    @media  screen and (max-width: 768px) {
        .benefits{
            display: flex;
            flex-direction: row;
            justify-content: center;
            align-items: center;
            width:100%;
            height:520px;
            column-gap:20px;
            background-color: #282D2F;  
            flex-wrap: wrap;
            
                div:nth-child(1){
                    margin-top: 40px;
                }
                div:nth-child(2){
                    margin-top: 40px;
                }
                div:nth-child(3){
                    margin-bottom: 40px;
                }
                div:nth-child(4){
                    margin-bottom: 40px;
                }
        }
        .benefits__card{
            display: flex;
            flex-direction: column;
            justify-content: flex-start; 
            align-items: flex-start;
            width: 220px;
            height:170px;    
            padding-left: 50px;
                img{
                    width:40px;
                    height:42px;
                    padding-bottom: 13px;
                }
        }
        .benefits__heading{
            font-size:20px;
            font-family: Tex;
            color:white;
            line-height: 0px;
        }
        .benefits__text{
            font-size:16px;
            font-family: Inter;
            color:white;
            width:90%;
        }
    }
    @media  screen and (max-width: 576px) {
        .benefits{
            display: flex;
            flex-direction: column;
            justify-content: space-evenly;
            align-items: flex-end;
            width:100%;
            height:900px;
            column-gap:unset;
            background-color: #282D2F;  
            flex-wrap: unset;
            
                div:nth-child(1){
                    margin-top: 0px;
                }
                div:nth-child(2){
                    margin-top: 0px;
                }
                div:nth-child(3){
                    margin-bottom: 0px;
                }
                div:nth-child(4){
                    margin-bottom: 0px;
                }
        }
        .benefits__card{
            display: flex;
            flex-direction: column;
            justify-content: flex-start; 
            align-items: flex-start;
            width: 90%;
            height:170px;   
            padding-left: 0px;
                img{
                    width:45px;
                    height:47px;
                    padding-bottom: 13px;
                }
        }
        .benefits__heading{
            font-size:24px;
            font-family: Tex;
            color:white;
            line-height: 0px;
        }
        .benefits__text{
            font-size:18px;
            font-family: Inter;
            color:white;
            width:90%;
        }
    }
    @media  screen and (max-width: 480px) {
        .benefits{
            display: flex;
            flex-direction: column;
            justify-content: space-evenly;
            align-items: flex-end;
            width:100%;
            height:810px;
            column-gap:unset;
            background-color: #282D2F;  
            flex-wrap: unset;
            
                div:nth-child(1){
                    margin-top: 0px;
                }
                div:nth-child(2){
                    margin-top: 0px;
                }
                div:nth-child(3){
                    margin-bottom: 0px;
                }
                div:nth-child(4){
                    margin-bottom: 0px;
                }
        }
        .benefits__card{
            display: flex;
            flex-direction: column;
            justify-content: flex-start; 
            align-items: flex-start;
            width: 90%;
            height:140px;   
            padding-left: 0px;
                img{
                    width:36px;
                    height:38px;
                    padding-bottom: 13px;
                }
        }
        .benefits__heading{
            font-size:21px;
            font-family: Tex;
            color:white;
            line-height: 0px;
        }
        .benefits__text{
            font-size:16px;
            font-family: Inter;
            color:white;
            width:90%;
        }
    }

</style>
