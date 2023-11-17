#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

#define num_incremento 10000;


sem_t semaforo;
int valorCompartido = 0;

void *incremento (void *arg){

    sem_wait(&semaforo);

    for (int i = 0; i < num_incremento; i++){
        valorCompartido += 1;
    }

    sem_post(&semaforo);
    pthread_exit(NULL);
}

int main(){

    pthread_t hilo1, hilo2;
    
    sem_init(&semaforo, 0, 1);

    pthread_create(&hilo1, NULL, incremento, NULL);
    pthread_create(&hilo2, NULL, incremento, NULL);

    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);

    sem_destroy(&semaforo);

    printf("Valor compartido es %d.", valorCompartido);

    return 0;

}
