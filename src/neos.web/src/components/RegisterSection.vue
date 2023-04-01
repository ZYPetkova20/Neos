  <template>
    <div class="register-wrapper">
      <div class="register">
        <div class="register__left-section">
            <div class="register__left-section__inner">
              <p class="left-section__inner__title">Neos</p>
              <p class="left-section__inner__title">Chemistry</p>
              <p class="left-section__inner__title">Simulator</p>
              <p class="left-section__inner__text">This is a pure filler text, and I am going to make some typos and make some extra connections</p>
            </div>
        </div>
        <div class="register__right-section">
          <div class="register__right-section__inner">
            <img src="../assets/images/logo-register.png" alt="logo">
            <div class="hello-text-wrapper">
              <p class="hello-text">Hey, hello</p>
              <img src="../assets/images/hello-icon.png" alt="wave emoji">
            </div>
            <p class="greeting-text">This is a pure filler text, and I am.</p>
            <form action="">
              <div class="form-section-wrapper">
                <div class="form__left-section">
                  <div class="input-and-label-wrapper">
                    <input type="text" name="First name" placeholder="&nbsp;" required>
                    <label for="First name" class="input-label">First name</label>
                  </div>
                  <div class="input-and-label-wrapper">
                    <input type="email" name="Email" placeholder="&nbsp;" required>
                    <label for="Email" class="input-label">Email</label>
                  </div>
                </div>
                <div class="form__right-section">
                  <div class="input-and-label-wrapper">
                    <input type="text" name="Last name" placeholder="&nbsp;" required>
                    <label for="Last name" class="input-label">Last name</label>
                  </div>
                  <div class="input-and-label-wrapper">
                    <input type="password" name="Password" placeholder="&nbsp;" required>
                    <label for="Password" class="input-label">Password</label>
                  </div>
                </div>
              </div>
              <input type="submit" value="Register" class="submit-button" >
            </form>
            <p class="neos-text">2022 © NEOS | All rights reserved</p>
          </div>
        </div>
      </div>
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
      .register-wrapper{
        max-width:1920px;
        max-height:1080px;
        width:100%;
        height:100vh;
        margin: auto;
        display: flex;
        justify-content: center;
        align-items: center;
      }
      .register{
        display: flex;
        width:1180px;
        height:711px;
        box-shadow:(6px 6px 35px rgba(17, 67, 79, 0.25));
      }
      .register__left-section{
        display: flex;
        justify-content: center;
        align-items: center;
        width:560px;
        height: 100%;
        background-image: url('../assets/images/register-background.png');
        background-repeat: no-repeat;
        background-size: cover;
      }
      .register__left-section__inner{
        display: flex;
        flex-direction: column;
        width:460px;
        height:460px;
        background: rgba(248, 248, 248, 0.4);
        backdrop-filter: blur(15px);
        border-radius: 2px;
        text-align: center;
      }
      .left-section__inner__title{
        font-size: 64px;
        line-height: 0px;
        color: rgba(71, 82, 78, 1);
        font-family: 'Tex';
        padding-left: 30px;
        align-self: flex-start;
          &:nth-child(1){
            margin-bottom: 35px;
          }
          &:nth-child(2){
            margin-bottom: 35px;
          }

      }
      .left-section__inner__text{
        color: #656565;
        font-family: 'Inter';
        padding-left: 30px;
        font-size: 16px;
        width: 370px;
      }
      .register__right-section{
        display: flex;
        align-items: flex-end;
        width: 620px;
        height:100%;

      }
      .register__right-section__inner{
        display: flex;
        flex-direction: column;
        margin-left: 65px;
        width:520px;
        height:650px;
          img {
            width: 43px;
            height: 49px;
          }
      }
      .hello-text-wrapper{
        display: flex;
        align-items: center;
        height:80px;
        width:100%;
        column-gap: 20px;
          img{
            width: 31px;
            height: 31px;
          }
      }
      .hello-text{
        font-size: 30px; 
        line-height: 0px;
        font-family: 'Lato-bold';
        color:#47524E;
      }
      .greeting-text{
        font-size: 16px;
        font-family: 'Inter';
        color:#656565;
        line-height: 0px;
      }
      form{
        display: flex;
        flex-direction: column;
        justify-content: flex-start;
        row-gap: 0px;
        width:100%;
        height:400px;
      }
      .form-section-wrapper{
        padding-top:60px;
        display: flex;
        height: 230px;
        width:100%;  
      }
      .form__left-section{
        display: flex;
        flex-direction: column;
        width:50%;
        height:100%;
        row-gap: 40px;
      }
      .form__right-section{
        display: flex;
        row-gap: 40px;
        flex-direction: column;
        width:50%;
        height:100%;
      }
      .input-and-label-wrapper{
        display: flex;
        flex-direction: row;
        align-items: flex-end;
        position: relative;
        width:100%;
        height:60px;
      }
      input{
        border: none;
        background-color: transparent;
        border-bottom-style: solid;
        border-bottom-color: #656565;
        border-bottom-width: 2px;
        line-height: 0px;
        width:90%;
        height: 50px;
        outline:none;
        font-size: 18px;
        color:#656565;
        font-family: 'Lato-light';
        height: 30px;
      }
      .input-label{
          position: absolute;
          top: 0px;
          left:0em;
          z-index: 2;
          font-size: 16px;
          color: #000;
          transition: 0.3s;
          transform: translate(0px, 0em);
          font-family: 'Lato-bold';
          color: #656565;
      }
      .submit-button{
        width:190px;
        height:45px;
        background-color: rgba(225, 230, 224, 1);
        color:black;
        border:none;
        font-family: 'Inter';
        font-size: 16px;
      }
      .neos-text{
          font-family: 'Lato-light';
          font-size: 17px;
          color: #767676;
      }

  </style>
  