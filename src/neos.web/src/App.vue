<template>
  <HeroSection />

  <RouterView />
</template>

<script setup lang="ts">
import { RouterLink, RouterView } from 'vue-router'
import HeroSection from './components/HeroSection.vue'
</script>


<style lang="scss" scoped>

</style>