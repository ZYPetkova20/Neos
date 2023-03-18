<template>
  <HeroSection />
  <BenefitsSection />
  <RouterView />
</template>

<script setup lang="ts">
import { RouterLink, RouterView } from 'vue-router'
import HeroSection from './components/HeroSection.vue'
import BenefitsSection from './components/BenefitsSection.vue'
</script>


<style lang="scss" scoped>

</style>