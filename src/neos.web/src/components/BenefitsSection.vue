<template>
    <div class="benefits">
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

</style>
