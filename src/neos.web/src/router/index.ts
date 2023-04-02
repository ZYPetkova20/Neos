import { createRouter, createWebHistory } from 'vue-router'
import HomeView from '../views/HomeView.vue'
import AboutView from '../views/AboutView.vue'
import RegisterSection from '../components/RegisterSection.vue'
import LoginSection from '../components/LoginSection.vue'

const router = createRouter({
  history: createWebHistory(import.meta.env.BASE_URL),
  routes: [
    {
      path: '/',
      name: 'home',
      component: HomeView
    },
    {
      path: '/login',
      name: 'Login',
      component: LoginSection
    },
    {
      path: '/register',
      name: 'Register',
      component: RegisterSection
    },
  ]
})

export default router
