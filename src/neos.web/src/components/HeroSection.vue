<template>
  <div class="hero">
    <div class="hero-section">
      <nav>
        <img src="../assets/images/logo.png" alt="logo" />
        <p class="hero-section__link">Reactivity</p>
        <p class="hero-section__link">Mockup</p>
        <p class="hero-section__link">Last Section</p>
      </nav>
      <div class="hero-section__title-wrapper">
        <p class="hero-section__title">Neos</p>
        <p class="hero-section__title">Chemistry</p>
        <p class="hero-section__title">Simulator</p>
      </div>
      <button class="hero-section__button">Download</button>
    </div>
    <div class="hero-image"></div>
  </div>
</template>

<style lang="scss">
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

    body,
    html {
      margin: 0 !important;
      padding: 0 !important;
      overflow-x: hidden;
    }
    .hero{
      display: flex;
      justify-content: flex-end;
      width: 100%;
      height: 100vh;
      background-color: #1F1F1F;
      min-height: 850px;
    }
    .hero-section{
      display: flex;
      flex-direction: column;
      width: 48%;
      height: 100%; 
    }
    nav {
      display: flex;
      flex-direction: row;
      align-items: center;
      column-gap: 75px;
      width: 100%;
      height: 140px;
      img {
        width: 43px;
        height: 49px;
      }
    }
    .hero-section__link{
      font-family: 'Inter';
      font-size: 27px;
      line-height: 21px;
      color: #fff;
      text-decoration: none;
      cursor: pointer;
    }
    .hero-section__title-wrapper{
      width:100%;
      display: flex;
      flex-direction: column;
      margin-bottom: 35px;
    }
    .hero-section__title{
      font-size: 125px;
      line-height: 0px;
      color: #fff;
      font-family: 'Tex';
      
        &:nth-child(1){
          margin-top: 75px;
          margin-bottom: 60px;
        }
        &:nth-child(2){
          margin-bottom: 60px;
        }

    }
    .hero-section__button{
      display: flex;
      justify-content: center;
      align-items: center;
      width: 265px;
      height: 70px;
      background-color: #e1e6e0;
      border: none;
      border-radius: 100px;
      font-family: 'Tex';
      font-size: 27px;
      cursor: pointer;
    }
    .hero-image {
      display: inline-block;
      width: 45%;
      height: 100%;
      background-image: url('../assets/images/hero-image.png');
      background-repeat: no-repeat;
      background-size: cover;
    }

    //To 1440px
    @media  only screen and (max-width:1600px){
      .hero-section{
        display: flex;
        flex-direction: column;
        width: 51%;
        height: 100%; 
      }
      .hero-section__title{
        font-size: 105px;
        line-height: 0px;
        color: #fff;
        font-family: 'Tex';
        
          &:nth-child(1){
            margin-top: 55px;
            margin-bottom: 40px;
          }
          &:nth-child(2){
            margin-bottom: 40px;
          }

      }
    }
    @media  screen and (max-width: 1440px) {
      .hero{
        display: flex;
        justify-content: flex-end;
        width: 100%;
        height: 100vh;
        background-color: #1F1F1F;
        min-height: 680px;
        max-height: 768px;
      }
      .hero-section{
        display: flex;
        flex-direction: column;
        width: 51%;
        height: 100%; 
      }
      nav {
        display: flex;
        flex-direction: row;
        align-items: center;
        column-gap: 75px;
        width: 100%;
        height: 110px;
        img {
          width: 40px;
          height: 46px;
        }
      }
      .hero-section__link{
        font-family: 'Inter';
        font-size: 22px;
        line-height: 21px;
        color: #fff;
        text-decoration: none;
      }
      .hero-section__title-wrapper{
        width:100%;
        display: flex;
        flex-direction: column;
        margin-bottom: 35px;
      }
      .hero-section__title{
        font-size: 85px;
        line-height: 0px;
        color: #fff;
        font-family: 'Tex';
        
          &:nth-child(1){
            margin-top: 75px;
            margin-bottom: 40px;
          }
          &:nth-child(2){
            margin-bottom: 40px;
          }

      }
      .hero-section__button{
        display: flex;
        justify-content: center;
        align-items: center;
        width: 245px;
        height: 65px;
        border: none;
        border-radius: 100px;
        font-family: 'Tex';
        font-size: 23px;
        cursor: pointer;
      }
      .hero-image {
        display: inline-block;
        width: 45%;
        height: 100%;
        background-image: url('../assets/images/hero-image.png');
        background-repeat: no-repeat;
        background-size: cover;
      }
    }
    @media  screen and (max-width: 1200px) {
      .hero{
        display: flex;
        justify-content: flex-end;
        width: 100%;
        height: 100vh;
        background-color: #1F1F1F;
        min-height: 600px;
        max-height: 600px;
      }
      .hero-section{
        display: flex;
        flex-direction: column;
        width: 51%;
        height: 100%; 
      }
      nav {
        display: flex;
        flex-direction: row;
        align-items: center;
        column-gap: 60px;
        width: 100%;
        height: 90px;
        img {
          width: 36px;
          height: 42px;
        }
      }
      .hero-section__link{
        font-family: 'Inter';
        font-size: 19px;
        line-height: 21px;
        color: #fff;
        text-decoration: none;
      }
      .hero-section__title-wrapper{
        width:100%;
        display: flex;
        flex-direction: column;
        margin-bottom: 35px;
      }
      .hero-section__title{
        font-size: 65px;
        line-height: 0px;
        color: #fff;
        font-family: 'Tex';
        
          &:nth-child(1){
            margin-top: 65px;
            margin-bottom: 25px;
          }
          &:nth-child(2){
            margin-bottom: 25px;
          }

      }
      .hero-section__button{
        display: flex;
        justify-content: center;
        align-items: center;
        width: 245px;
        height: 65px;
        border: none;
        border-radius: 100px;
        font-family: 'Tex'; 
        font-size: 23px;
        cursor: pointer;
      }
      .hero-image {
        display: inline-block;
        width: 45%;
        height: 100%;
        background-image: url('../assets/images/hero-image.png');
        background-repeat: no-repeat;
        background-size: cover;
      }
    }
    @media  screen and (max-width: 1024px) {
      .hero{
        display: flex;
        justify-content: flex-end;
        width: 100%;
        height: 100vh;
        background-color: #1F1F1F;
        min-height: 560px;
        max-height: 560px;
      }
      .hero-section{
        display: flex;
        flex-direction: column;
        width: 53%;
        height: 100%; 
      }
      nav {
        display: flex;
        flex-direction: row;
        align-items: center;
        column-gap: 35px;
        width: 100%;
        height: 80px;
        img {
          width: 34px;
          height: 40px;
        }
      }
      .hero-section__link{
        font-family: 'Inter';
        font-size: 18px;
        line-height: 21px;
        color: #fff;
        text-decoration: none;
      }
      .hero-section__title-wrapper{
        width:100%;
        display: flex;
        flex-direction: column;
        margin-bottom: 35px;
      }
      .hero-section__title{
        font-size: 60px;
        line-height: 0px;
        color: #fff;
        font-family: 'Tex';
        
          &:nth-child(1){
            margin-top: 65px;
            margin-bottom: 25px;
          }
          &:nth-child(2){
            margin-bottom: 25px;
          }

      }
      .hero-section__button{
        display: flex;
        justify-content: center;
        align-items: center;
        width: 226px;
        height: 60px;
        border: none;
        border-radius: 100px;
        font-family: 'Tex'; 
        font-size: 20px;
        cursor: pointer;
      }
      .hero-image {
        display: inline-block;
        width: 44%;
        height: 100%;
        background-image: url('../assets/images/hero-image.png');
        background-repeat: no-repeat;
        background-size: cover;
      }
    }
    @media  screen and (max-width: 768px) {
      .hero{
        display: flex;
        justify-content: flex-end;
        width: 100%;
        height: 100vh;
        background-color: #1F1F1F;
        min-height: 400px;
        max-height: 400px;
      }
      .hero-section{
        display: flex;
        flex-direction: column;
        width: 55%;
        height: 100%; 
      }
      nav {
        display: flex;
        flex-direction: row;
        align-items: center;
        column-gap: 20px;
        width: 100%;
        height: 80px;
        img {
          width: 26px;
          height: 32px;
        }
      }
      .hero-section__link{
        font-family: 'Inter';
        font-size: 15.3px;
        line-height: 21px;
        color: #fff;
        text-decoration: none;
      }
      .hero-section__title-wrapper{
        width:100%;
        display: flex;
        flex-direction: column;
        margin-bottom: 15px;
      }
      .hero-section__title{
        font-size: 42px;
        line-height: 0px;
        color: #fff;
        font-family: 'Tex';
        
          &:nth-child(1){
            margin-top: 35px;
            margin-bottom: 25px;
          }
          &:nth-child(2){
            margin-bottom: 25px;
          }

      }
      .hero-section__button{
        display: flex;
        justify-content: center;
        align-items: center;
        width: 150px;
        height: 40px;
        border: none;
        border-radius: 100px;
        font-family: 'Tex'; 
        font-size: 16px;
        cursor: pointer;
      }
      .hero-image {
        display: inline-block;
        width: 42%;
        height: 100%;
        background-image: url('../assets/images/hero-image.png');
        background-repeat: no-repeat;
        background-size: cover;
      }
    }
    @media  screen and (max-width: 576px) {
      .hero{
        display: flex;
        justify-content: flex-end;
        width: 100%;
        height: 100vh;
        background-color: #1F1F1F;
        min-height: 400px;
        max-height: 400px;
      }
      .hero-section{
        display: flex;
        flex-direction: column;
        width: 90%;
        height: 100%; 
      }
      nav {
        display: flex;
        flex-direction: row;
        align-items: center;
        column-gap: 35px;
        justify-content: flex-start;
        width: 100%;
        height: 80px;
        img {
          width: 32px;
          height: 38px;
        }
      }
      .hero-section__link{
        font-family: 'Inter';
        font-size: 18px;
        line-height: 21px;
        color: #fff;
        text-decoration: none;
      }
      .hero-section__title-wrapper{
        width:100%;
        display: flex;
        flex-direction: column;
        margin-bottom: 15px;
      }
      .hero-section__title{
        font-size: 50px;
        line-height: 0px;
        color: #fff;
        font-family: 'Tex';
        letter-spacing: 0.1em;
        
          &:nth-child(1){
            margin-top: 25px;
            margin-bottom: 25px;
          }
          &:nth-child(2){
            margin-bottom: 25px;
          }

      }
      .hero-section__button{
        display: flex;
        justify-content: center;
        align-items: center;
        width: 150px;
        height: 40px;
        border: none;
        border-radius: 100px;
        font-family: 'Tex'; 
        font-size: 16px;
        cursor: pointer;
      }
      .hero-image {
        display: none;
        width: 42%;
        height: 100%;
        background-image: url('../assets/images/hero-image.png');
        background-repeat: no-repeat;
        background-size: cover;
      }
    }
    @media  screen and (max-width: 480px) {
      .hero{
        display: flex;
        justify-content: flex-end;
        width: 100%;
        height: 100vh;
        background-color: #1F1F1F;
        min-height: 400px;
        max-height: 400px;
      }
      .hero-section{
        display: flex;
        flex-direction: column;
        width: 90%;
        height: 100%; 
      }
      
      .hamburger__nav{
        display: flex;
        flex-direction: row;
        align-items: center;
        width: 90%;
        height: 80px;
        align-self: flex-start;
        justify-content: space-between;
        img {
          width: 32px;
          height: 38px;
        }
      }
      nav {
        display: none;
        flex-direction: row;
        align-items: center;
        column-gap: 35px;
        justify-content: flex-start;
        width: 100%;
        height: 80px;
        img {
          width: 32px;
          height: 38px;
        }
      }
      .hero-section__link{
        font-family: 'Inter';
        font-size: 18px;
        line-height: 21px;
        color: #fff;
        text-decoration: none;
      }
      .hero-section__title-wrapper{
        width:100%;
        display: flex;
        flex-direction: column;
        margin-bottom: 15px;
      }
      .hero-section__title{
        font-size: 40px;
        line-height: 0px;
        color: #fff;
        font-family: 'Tex';
        letter-spacing: 0.1em;
        
          &:nth-child(1){
            margin-top: 25px;
            margin-bottom: 25px;
          }
          &:nth-child(2){
            margin-bottom: 25px;
          }

      }
      .hero-section__button{
        display: flex;
        justify-content: center;
        align-items: center;
        width: 150px;
        height: 40px;
        border: none;
        border-radius: 100px;
        font-family: 'Tex'; 
        font-size: 16px;
        cursor: pointer;
      }
      .hero-image {
        display: none;
        width: 42%;
        height: 100%;
        background-image: url('../assets/images/hero-image.png');
        background-repeat: no-repeat;
        background-size: cover;
      }
    }

    /*
  @media  screen and (max-width: 1440px) {

  }

  @media  screen and (max-width: 1200px) {
    
  }

  @media  screen and (max-width: 1024px) {
    
  }

  @media  screen and (max-width: 768px) {
    
  }

  @media  screen and (max-width: 576px) {
    
  }

  @media  screen and (max-width: 480px) {
    
  }

 
  */
</style>
