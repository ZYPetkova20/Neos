<template>
    <RouterView></RouterView>
    <h1>Hello</h1>
</template>

<script setup lang="ts">  
  import { RouterLink, RouterView } from 'vue-router'
  import LoginSection from '@/components/LoginSection.vue';
  import RegisterSection from '@/components/RegisterSection.vue';
</script>
