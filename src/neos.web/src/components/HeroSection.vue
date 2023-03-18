<template>
  <div class="section-wrapper">
    <div class="left-section-wrapper">
      <div class="left-section">
        <nav>
          <img src="../assets/images/logo.png" class="left-section__logo" alt="logo" />
          <p class="left-section__link">Section 1</p>
          <p class="left-section__link">Section 2</p>
          <p class="left-section__link">Section 3</p>
        </nav>
        <div class="hero-title-wrapper">
          <p class="hero-title">Neos</p>
          <span class="gradient"><p class="hero-title hero-title_gradient">Chemistry</p></span>
          <p class="hero-title">App</p>
        </div>
        <div class="left-section__download-button-wrapper">
          <button class="left-section__download-button">Download</button>
        </div>
      </div>
    </div>
    <div class="right-section"></div>
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
}
.section-wrapper {
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
