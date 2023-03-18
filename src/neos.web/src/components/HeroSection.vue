<template>
  <div class="section-wrapper">
    <div class="left-section">
      <nav>
        <img src="../assets/images/logo.png" class="left-section__logo" alt="logo" />
        <p class="left-section__link">Section 1</p>
        <p class="left-section__link">Section 2</p>
        <p class="left-section__link">Section 3</p>
      </nav>
      <div class="hero-title-wrapper">
        <p class="hero-title">Neos</p>
        <p class="hero-title hero-title_gradient">Chemistry</p>
        <p class="hero-title">App</p>
      </div>
      <div class="left-section__download-button-wrapper">
        <button class="left-section__download-button">Download</button>
      </div>
    </div>
    <div class="right-section">

    </div>
  </div>
</template>

<style lang="scss">

//Import Fonts
@font-face {
  font-family: "Tex";
  src: url(../assets/fonts/tex-gyre-adventor.bold.ttf);
}

@font-face {
  font-family: "Inter";
  src: url(../assets/fonts/Inter-Light.ttf);
}

@font-face {
  font-family: "Lato-light";
  src: url(../assets/fonts/Lato-Light.ttf);
}

@font-face {
  font-family: "Lato-bold";
  src: url(../assets/fonts/Lato-Bold.ttf);
}

body,
html {
  margin: 0 !important;
  padding: 0 !important;
}
.section-wrapper{
  display: flex;
  width: 100vw;
  height: 100vh;
}
.left-section {
  width: 55%;
  height: 100%;
  background-color: #1F1F1F;
}
nav{
  display: flex;
  justify-content: space-evenly;
  align-items:flex-end;
  width: 100%;
  height: 70px;
    img{
      width: 43px;
      height: 49px;
    }
}
.hero-title-wrapper{
  width: 100%;
  height: 70%;
  display: flex;
  flex-direction: column;
  justify-content: center;
  
}
.hero-title{
  font-size: 96px;
  line-height: 0px;
  color: #fff;
  font-family: "Tex";
}
.right-section{
  width: 45%;
  height: 100%;
  background-image: url("../assets/images/hero-image.png");
  background-repeat: no-repeat;
  background-size: cover;
  background-color: rebeccapurple;
}
</style>
