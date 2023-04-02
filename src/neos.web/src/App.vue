<template>
  <HeroSection />
  <DevSection />
  <BenefitsSection />
  <ProcessSection />
  <FooterSection />
</template>

<script setup lang="ts">  
  import { RouterLink, RouterView } from 'vue-router'
  import HeroSection from './components/HeroSection.vue'
  import DevSection from './components/DevSection.vue'
  import BenefitsSection from './components/BenefitsSection.vue'
  import ProcessSection from './components/ProcessSection.vue'
  import FooterSection from './components/FooterSection.vue'
</script>


<style lang="scss" scoped>
  
</style>