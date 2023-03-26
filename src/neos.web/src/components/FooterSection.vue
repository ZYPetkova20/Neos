<template>
    <footer>
        <div class="footer__left-section">
            <img src="../assets/images/logo-footer.png" alt="Logo">
            <p class="footer__left-section__phone-text">+359 879 909 034</p>
            <p class="footer__left-section__email-text">sysolakov20@codingburgas.bg</p>
        </div>
        <div class="footer__right-section">
            <div class="footer__right-section__nav">
                <p class="footer__right-section__nav__links">Contact Us</p>
                <p class="footer__right-section__nav__links">Download</p>
                <p class="footer__right-section__nav__links">Support</p>
            </div>
            <div class="footer__right-section__text__wrapper">
                <p class="footer__right-section__text">2022 © NEOS | All rights reserved</p>
            </div>
            
        </div>
    </footer>
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

    footer {
        display: flex;
        justify-content: space-between;
        background-color: #EAEAEA;
        width: 100%;
        height: 300px;
    }
    .footer__left-section {
        display: flex;
        flex-direction: column;
        align-items: flex-start;
        justify-content: flex-end;
        width: 300px;
        padding-left: 70px;
        height: 90%;

        img {
            padding-bottom: 20px;
        }
    }
    .footer__left-section__phone-text {
        font-family: 'Lato-bold';
        font-size: 25px;
    }
    .footer__left-section__email-text {
        font-family: 'Lato-bold';
        font-size: 18px;
    }
    .footer__right-section {
        display: flex;
        flex-direction: column;
        justify-content: space-between;
        width:600px;
        height:100%;
    }
    .footer__right-section__nav{
        display: flex;
        flex-direction: row;
        justify-content: space-evenly;
        width:90%;
        height:120px;
        align-items: flex-end;
    }
    .footer__right-section__nav__links{
        font-size:22px;
        font-family: 'Lato-bold';
    }
    .footer__right-section__text__wrapper{
        display: flex;
        flex-direction: row;
        justify-content: flex-end;
        width:90%;
        height:80px;
    }
    .footer__right-section__text{
        font-size:18px;
        padding-right:60px;
        color:#767676;
        font-family: 'Lato-light';
        
    }

    @media  screen and (max-width: 1440px) {
        footer {
            display: flex;
            justify-content: space-between;
            background-color: #EAEAEA;
            width: 100%;
            height: 260px;
        }
        .footer__left-section {
            display: flex;
            flex-direction: column;
            align-items: flex-start;
            justify-content: flex-end;
            width: 300px;
            padding-left: 50px;
            height: 90%;

            img {
                padding-bottom: 15px;
                width:48px;
                height: 56px;
            }
        }
        .footer__left-section__phone-text {
            font-family: 'Lato-bold';
            font-size: 23px;
        }
        .footer__left-section__email-text {
            font-family: 'Lato-bold';
            font-size: 16px;
        }
        .footer__right-section {
            display: flex;
            flex-direction: column;
            justify-content: space-between;
            width:400px;
            height:100%;
        }
        .footer__right-section__nav{
            display: flex;
            flex-direction: row;
            justify-content: space-evenly;
            width:90%;
            height:120px;
            align-items: flex-end;
        }
        .footer__right-section__nav__links{
            font-size:20px;
            font-family: 'Lato-bold';
        }
        .footer__right-section__text__wrapper{
            display: flex;
            flex-direction: row;
            justify-content: flex-end;
            width:90%;
            height:80px;
        }
        .footer__right-section__text{
            font-size:16px;
            padding-right:35px;
            color:#767676;
            font-family: 'Lato-light';
            
        }
    }
    @media  screen and (max-width: 1200px) {
        footer {
            display: flex;
            justify-content: space-between;
            background-color: #EAEAEA;
            width: 100%;
            height: 230px;
        }
        .footer__left-section {
            display: flex;
            flex-direction: column;
            align-items: flex-start;
            justify-content: flex-end;
            width: 300px;
            padding-left: 40px;
            height: 90%;

            img {
                padding-bottom: 10px;
                width:42px;
                height: 48px;
            }
        }
        .footer__left-section__phone-text {
            font-family: 'Lato-bold';
            font-size: 20px;
        }
        .footer__left-section__email-text {
            font-family: 'Lato-bold';
            font-size: 16px;
        }
        .footer__right-section {
            display: flex;
            flex-direction: column;
            justify-content: space-between;
            align-items: flex-end;
            width:400px;
            height:100%;
        }
        .footer__right-section__nav{
            display: flex;
            flex-direction: row;
            justify-content: space-evenly;
            width:90%;
            height:120px;
            align-items: flex-end;
            padding-right: 10px;
        }
        .footer__right-section__nav__links{
            font-size:20px;
            font-family: 'Lato-bold';
        }
        .footer__right-section__text__wrapper{
            display: flex;
            flex-direction: row;
            justify-content: flex-end;
            width:90%;
            height:80px;
            padding-right: 40px;
        }
        .footer__right-section__text{
            font-size:16px;
            padding-right:0px;
            color:#767676;
            font-family: 'Lato-light';
            
        }
    }

</style>
