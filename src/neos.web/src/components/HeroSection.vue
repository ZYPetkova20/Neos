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
      min-height: 750px;
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
      font-size: 18px;
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

  /*  .section-wrapper {
      display: flex;
      width: 100vw;
      height: 100vh;
    }
    .left-section-wrapper {
      width: 55%;
      height: 100%;
      background-color: #1f1f1f;
      display: flex;
      align-items: center;
      justify-content: flex-start;
      flex-direction: column;
    }
    .left-section{
      width: 80%;
      height: 100%;
    }
    nav {
      display: flex;
      justify-content: space-evenly;
      align-items: flex-end;
      width: 100%;
      height: 70px;
      img {
        width: 43px;
        height: 49px;
      }
    }
    .left-section__link {
      font-family: 'Lato-light';
      font-size: 18px;
      line-height: 21px;
      color: #fff;
      text-decoration: none;
    }
    .hero-title-wrapper {
      width: 85%;
      height: 70%;
      display: flex;
      flex-direction: column;
      justify-content: center;
      align-items: center;
    }
    .hero-title {
      font-size: 96px;
      line-height: 0px;
      color: #fff;
      font-family: 'Tex';
    }
    .gradient{
      width: 100%;
      height: 100%;
      background-color: red;
    }
    .hero-title_gradient{
      font-size: 96px;
      background: url(https://24.media.tumblr.com/tumblr_m87dri70zh1qzla33o1_500.gif);
      background-size: cover;
      background-clip: text;
      -webkit-text-fill-color: transparent;
    }
    .left-section__download-button {
      width: 200px;
      height: 50px;
      background-color: #e1e6e0;
      border: none;
      border-radius: 100px;
      font-family: 'Tex';
      font-size: 18px;
      line-height: 21px;
      color: #000;
      cursor: pointer;
    }
    .right-section {
      width: 45%;
      height: 100%;
      background-image: url('../assets/images/hero-image.png');
      background-repeat: no-repeat;
      background-size: cover;
      
    }
  */
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

  @media  screen and (max-width: 360px) {

  }
  */
</style>
