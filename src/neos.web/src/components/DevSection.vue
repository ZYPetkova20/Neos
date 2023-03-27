<template>
    <div class="dev-section">
        <div class="dev-section__title-wrapper">
            <p class="dev-section__title dev-section__title--bold">Concept to Creation,</p>
            <p class="dev-section__title">The story of our chemistry simulator</p>
        </div>
        <div class="dev-section__content-wrapper">
            <div class="development">
                <div class="development__field">
                    <p class="development__text">{{ elapsedTime }} Days</p>
                </div>  
                <p class="development__text">We tackled our educational and creative journey by doing the NEOS chemistry simulator</p>
            </div>
            <div class="development__side-info">
                <p class="development__side-info__text">"Our App was born out of a shared passion for chemistry and education among our team members."</p>
                <div class="development__side-info__chip">
                    <div class="tick-circle">
                        <img src="../assets/images/tick-icon.png" alt="Tick sign">
                    </div>
                    <p class="tick-circle__text">Fast Learning</p>
                </div>
                <div class="development__side-info__chip development__side-info__chip--wide">
                    <div class="tick-circle">
                        <img src="../assets/images/tick-icon.png" alt="Tick sign">
                    </div>
                    <p class="tick-circle__text">Interactive experience</p>
                </div>
            </div>
        </div>
    </div>
</template>

<script lang="ts" setup>
  import { defineComponent, onMounted, ref } from 'vue';  

    const startDate = new Date("March 4, 2023 03:00:00");
    let elapsedTime =  ref(0);

    onMounted(() => {
      setInterval(() => {
        elapsedTime.value = getDifferenceInSeconds(startDate, new Date());
        console.log(getDifferenceInSeconds(startDate, new Date()));
      }, 1000); // Milliseconds in one day 
    });

    function getDifferenceInSeconds(date1: Date, date2: Date): number {
        var diff = Math.abs(date1.getTime() - date2.getTime());
        var diffDays = Math.ceil(diff / (1000 * 3600 * 24)); 
        return diffDays;

    }

</script>

<style style lang="scss">
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

    .dev-section{
        display: flex;
        flex-direction: column;
        justify-content: flex-start;
        margin: auto;
        width: 89%;
        height:800px;
    }
    .dev-section__title-wrapper{
        display: flex;
        flex-direction: column;
        width:100%;
        padding-top: 30px;
        padding-bottom: 50px;
    }
    .dev-section__title{
        font-size: 70px;
        line-height: 0;
        font-family: "Lato-light";
    }
    .dev-section__title--bold{
        font-family: "Lato-bold";
        margin-bottom: 20px;
    }
    .dev-section__content-wrapper{
        width:100%;
        display: flex;
        flex-direction: row;
        justify-content: space-between;
    }
    .development{
        display: flex;
        flex-direction: column;
        justify-content: center;
        align-items: center;
        width:50%;
        height:400px;
        background-color: #E1E6E0;
    }
    .development__field{
        display: flex;
        justify-content: center;
        align-items: center;
        width:80%;
        height:150px;
        background-color: #fff;
        border-radius: 11px;
    }
    .development__text{
        font-family: 'Inter';
        text-align: center;
        font-size: 30px;
        width: 80%;
        color: #606060;
    }
    .development__side-info{
        display: flex;
        flex-direction: column;
        width:40%;
        height:100%;
    }
    .development__side-info__text{
        font-size: 30px;
        font-family: 'Inter';
        width:530px;
        margin-top: 0px;
    }
    .development__side-info__chip{
        display: flex;
        justify-content: flex-start;
        align-items: center;
        width:320px;
        height:70px;
        background-color:#F0F0F0;
        border-radius: 36px;
        border-width: 3px;
        border-style: solid;
        border-color: #8E8E8E;
        margin-top: 35px;
    }
    .development__side-info__chip--wide{
        width:380px;
        margin-top: 30px;
    }
    .tick-circle{
        display: flex;
        justify-content: center;
        align-items: center;
        width:50px;
        height:50px;
        margin-left: 20px;
        border-radius: 100%;
        background-color: #E1E6E0;
                img{
                    width: 70%;
                    height: 70%;
                }
    }
    .tick-circle__text{
        font-size: 25px;
        font-family: 'Lato-light';
        padding-left: 7%;
    }
    
    @media  screen and (max-width: 1440px) {
        .dev-section{
            display: flex;
            flex-direction: column;
            justify-content: flex-start;
            margin: auto;
            width: 89%;
            height:680px;
        }
        .dev-section__title-wrapper{
            display: flex;
            flex-direction: column;
            width:100%;
            padding-top: 10px;
            padding-bottom: 30px;
        }
        .dev-section__title{
            font-size: 53px;
            line-height: 0;
            font-family: "Lato-light";
        }
        .dev-section__title--bold{
            font-family: "Lato-bold";
            margin-bottom: 10px;
        }
        .dev-section__content-wrapper{
            width:100%;
            display: flex;
            flex-direction: row;
            justify-content: space-between;
        }
        .development{
            display: flex;
            flex-direction: column;
            justify-content: center;
            align-items: center;
            width:50%;
            height:370px;
            background-color: #E1E6E0;
        }
        .development__field{
            display: flex;
            justify-content: center;
            align-items: center;
            width:80%;
            height:150px;
            background-color: #fff;
            border-radius: 11px;
        }
        .development__text{
            font-family: 'Inter';
            text-align: center;
            font-size: 25px;
            width: 80%;
            color: #606060;
        }
        .development__side-info{
            display: flex;
            flex-direction: column;
            width:40%;
            height:100%;
        }
        .development__side-info__text{
            font-size: 26px;
            font-family: 'Inter';
            width:450px;
            margin-top: 0px;
        }
        .development__side-info__chip{
            display: flex;
            justify-content: flex-start;
            align-items: center;
            width:274px;
            height:60px;
            background-color:#F0F0F0;
            border-radius: 36px;
            border-width: 3px;
            border-style: solid;
            border-color: #8E8E8E;
            margin-top: 35px;
        }
        .development__side-info__chip--wide{
            width:360px;
            margin-top: 30px;
        }
        .tick-circle{
            display: flex;
            justify-content: center;
            align-items: center;
            width:50px;
            height:50px;
            margin-left: 20px;
            border-radius: 100%;
            background-color: #E1E6E0;
                img{
                    width: 70%;
                    height: 70%;
                }
        }
        .tick-circle__text{
            font-size: 23px;
            font-family: 'Lato-light';
            padding-left: 7%;
        }
    }
    @media  screen and (max-width: 1200px) {
        .dev-section{
            display: flex;
            flex-direction: column;
            justify-content: flex-start;
            margin: auto;
            width: 89%;
            height:680px;
        }
        .dev-section__title-wrapper{
            display: flex;
            flex-direction: column;
            width:100%;
            padding-top: 10px;
            padding-bottom: 30px;
        }
        .dev-section__title{
            font-size: 50px;
            line-height: 0;
            font-family: "Lato-light";
        }
        .dev-section__title--bold{
            font-family: "Lato-bold";
            margin-bottom: 10px;
        }
        .dev-section__content-wrapper{
            width:100%;
            display: flex;
            flex-direction: row;
            justify-content: space-between;
        }
        .development{
            display: flex;
            flex-direction: column;
            justify-content: center;
            align-items: center;
            width:50%;
            height:370px;
            background-color: #E1E6E0;
        }
        .development__field{
            display: flex;
            justify-content: center;
            align-items: center;
            width:80%;
            height:150px;
            background-color: #fff;
            border-radius: 11px;
        }
        .development__text{
            font-family: 'Inter';
            text-align: center;
            font-size: 24px;
            width: 80%;
            color: #606060;
        }
        .development__side-info{
            display: flex;
            flex-direction: column;
            width:40%;
            height:100%;
        }
        .development__side-info__text{
            font-size: 20px;
            font-family: 'Inter';
            width:350px;
            margin-top: 0px;
        }
        .development__side-info__chip{
            display: flex;
            justify-content: flex-start;
            align-items: center;
            width:244px;
            height:55px;
            background-color:#F0F0F0;
            border-radius: 36px;
            border-width: 3px;
            border-style: solid;
            border-color: #8E8E8E;
            margin-top: 35px;
        }
        .development__side-info__chip--wide{
            width:320px;
            margin-top: 30px;
        }
        .tick-circle{
            display: flex;
            justify-content: center;
            align-items: center;
            width:40px;
            height:40px;
            margin-left: 20px;
            border-radius: 100%;
            background-color: #E1E6E0;
                img{
                    width: 70%;
                    height: 70%;
                }
        }
        .tick-circle__text{
            font-size: 20px;
            font-family: 'Lato-light';
            padding-left: 7%;
        }
    }
    @media  screen and (max-width: 1024px) {
        .dev-section{
            display: flex;
            flex-direction: column;
            justify-content: flex-start;
            margin: auto;
            width: 89%;
            height:600px;
        }
        .dev-section__title-wrapper{
            display: flex;
            flex-direction: column;
            width:100%;
            padding-top: 15px;
            padding-bottom: 30px;
        }
        .dev-section__title{
            font-size: 40px;
            line-height: 0;
            font-family: "Lato-light";
        }
        .dev-section__title--bold{
            font-family: "Lato-bold";
            margin-bottom: 10px;
        }
        .dev-section__content-wrapper{
            width:100%;
            display: flex;
            flex-direction: row;
            justify-content: space-between;
        }
        .development{
            display: flex;
            flex-direction: column;
            justify-content: center;
            align-items: center;
            row-gap: 30px;
            width:50%;
            height:370px;
            background-color: #E1E6E0;
        }
        .development__field{
            display: flex;
            justify-content: center;
            align-items: center;
            width:70%;
            height:130px;
            background-color: #fff;
            border-radius: 11px;
        }
        .development__text{
            font-family: 'Inter';
            text-align: center;
            font-size: 18px;
            width: 80%;
            color: #606060;
        }
        .development__side-info{
            display: flex;
            flex-direction: column;
            width:44%;
            height:100%;
        }
        .development__side-info__text{
            font-size: 18px;
            font-family: 'Inter';
            width:100%;
            margin-top: 0px;
        }
        .development__side-info__chip{
            display: flex;
            justify-content: flex-start;
            align-items: center;
            width:221px;
            height:50px;
            background-color:#F0F0F0;
            border-radius: 36px;
            border-width: 3px;
            border-style: solid;
            border-color: #8E8E8E;
            margin-top: 35px;
        }
        .development__side-info__chip--wide{
            width:300px;
            margin-top: 30px;
        }
        .tick-circle{
            display: flex;
            justify-content: center;
            align-items: center;
            width:35px;
            height:35px;
            margin-left: 20px;
            border-radius: 100%;
            background-color: #E1E6E0;
                img{
                    width: 70%;
                    height: 70%;
                }
        }
        .tick-circle__text{
            font-size: 18px;
            font-family: 'Lato-light';
            padding-left: 7%;
        }
    }

</style>