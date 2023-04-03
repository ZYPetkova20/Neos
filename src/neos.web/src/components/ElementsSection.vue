<template>
    <div class="elements">
      <div class="header-wrapper">
        <div class="reactive-element-wrapper">
          <h1 class="reactive-element">{{ currentElement.symbol }}</h1>
        </div>
        <h1 class="reactive-element-title">{{ currentElement.name }}</h1>

      </div>
      <div class="separate-line"></div>
      <div class="second-section-wrapper">
        <div class="grid">
          <div class="grid-item" v-for="(element, index) in elements" :key="index" @click="selectElement(element)">
            {{ element.symbol }}
          </div>
        </div>
        <div class="information-box">
          <h1 class="information-box-heading">{{ currentElement.infoTitle }}</h1>
          <p class="information-box-text">{{ currentElement.infoText }}</p>
        </div>
      </div>
    </div>
  </template>

  <script>
  export default {
    data() {
      return {
        elements: [
          {
            number: 1,
            name: "Hydrogen",
            symbol: "H",
            infoTitle: "Hydrogen Information",
            infoText: "Hydrogen is the most common element in the universe, making up about 75% of its mass."
          },
          {
            number: 2,
            name: "Nitrogen",
            symbol: "N",
            infoTitle: "Nitrogen Information:",
            infoText: "Liquid nitrogen is used in molecular gastronomy to make ultra-smooth ice cream."
          },
          {
            number: 3,
            name: "Oxygen",
            symbol: "O",
            infoTitle: "Oxygen Information:",
            infoText: "As a gas, oxygen is clear. As a liquid, it's pale blue."
          },
          {
            number: 4,
            name: "Chlorine",
            symbol: "Cl",
            infoTitle: "Chlorine Information:",
            infoText: "Chlorine gas, also known as bertholite, was first used as a weapon in World War I."
          },
          {
            number: 5,
            name: "Magnesium",
            symbol: "Mg",
            infoTitle: "Magnesium Information:",
            infoText: "The top producers of magnesium by the second decade of the 21st century included China and Turkey."
          },
          {
            number: 6,
            name: "Iron",
            symbol: "Fe",
            infoTitle: "Iron Information:",
            infoText: "Blood is red because of the interaction between iron and oxygen."
          },
          {
            number: 7,
            name: "Aluminium",
            symbol: "Al",
            infoTitle: "Aluminium Information:",
            infoText: "Despite its widespread occurrence in the Earth's crust, aluminium has no known function in biology."
          },
          {
            number: 8,
            name: "Sodium",
            symbol: "Na",
            infoTitle: "Sodium Information:",
            infoText: "The most common sodium compound is sodium chloride - table salt."
          },
          {
            number: 9,
            name: "Calcium",
            symbol: "Ca",
            infoTitle: "Calcium Information:",
            infoText: "Calcium is the main component of teeth and bones."
          },
          {
            number: 10,
            name: "Barium",
            symbol: "Ba",
            infoTitle: "Barium Information:",
            infoText: "After exposure to light they would glow for years."
          },
          {
            number: 11,
            name: "Sulfur",
            symbol: "S",
            infoTitle: "Sulfur Information:",
            infoText: "According to the Ebers Papyrus, a sulfur ointment was used in ancient Egypt to treat granular eyelids."
          },
          {
            number: 12,
            name: "Bromine",
            symbol: "Br",
            infoTitle: "Bromine Information:",
            infoText: "Bromine is used to purify water."
          },
        ],
        currentElement: {}
      };
    },
    created() {
    // select a random element on initial load
    this.selectElement(this.elements[Math.floor(Math.random() * this.elements.length)]);
  },
  methods: {
    selectElement(element) {
      this.currentElement = element;
    }
  }
}
</script>
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
    h1{
        margin: 0;
        padding: 0;
    }
    .elements{
        width:100%;
        height:700px;
        background-image: url(../assets/images/elements-background.png);
    }
    .header-wrapper{
        display: flex;
        align-items: center;
        height: 200px;
    }
   
    .reactive-element-wrapper{
        width:18%;
        display: flex;
        align-items: center;
        justify-content: center;
    }
    .reactive-element{
        width: 120px;
        height: 120px;
        background-color: white;
        border-style: solid;
        border-color: #ABABAB;
        border-radius: 10px;
        display: flex;
        align-items: center;
        justify-content: center;
        font-family: 'Lato-bold';
        font-size: 50px;
    }
    .reactive-element-title{
        font-family: 'Lato-bold';
        font-size: 82px;
        color: black;
        margin: 0;
        padding: 0;
    }
    .separate-line{
        width: 100%;
        height: 2px;
        background-color: #ABABAB;
    }
    .second-section-wrapper{
        display: flex;
        align-items: center;
        justify-content:space-evenly;
        width: 100%;
        height: 400px;
    }
    .grid {
        display: grid;
        grid-template-columns: repeat(4, 1fr);
        grid-template-rows: repeat(3, 1fr);
        gap: 10px; /* optional */
  
        /* optional styling */
        width: 100%;
        max-width: 700px;
    }
    .grid-item {
        display: flex;
        align-items: center;
        justify-content: center;
        background-color: white;
        font-family: "lato-bold";
        border-radius: 10px;
        border-style: solid;
        border-color: #ABABAB;
        padding: 20px;
        width: 50px;
        height: 50px;
    }
    .information-box{
        width: 40%;
        height: 250px;
        background-color: white;
        border-radius: 10px;
    }
    .information-box-heading{
        width: 300px;
        padding-left: 20px;
        padding-top: 20px;
        font-family: 'Lato-bold';
    }
    .information-box-text{
        padding-left: 20px;
        padding-top: 10px;
        font-family: 'Inter';
    }

</style>