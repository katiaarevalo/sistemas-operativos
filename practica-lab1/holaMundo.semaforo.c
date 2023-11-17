#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t semaforo;

void *imprimirHola (void *arg){
  sem_wait(&semaforo);
  printf("Hola ");
  sem_post(&semaforo);

  pthread_exit(NULL);

}

void *imprimirMundo (void *arg){

  sem_wait(&semaforo);
  printf("Mundo");
  sem_post(&semaforo);

  pthread_exit(NULL);
}

int main(){

  pthread_t hilo1, hilo2;

  sem_init(&semaforo,0,1);

  pthread_create(&hilo1, NULL, imprimirHola, NULL);
  pthread_create(&hilo2, NULL, imprimirMundo, NULL);

  pthread_join(hilo1, NULL);
  pthread_join(hilo2, NULL);

  sem_destroy(&semaforo);

  return 0;
}