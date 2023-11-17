#include <stdio.h>
#include <pthread.h>

/* INCREMENTAR EN PARALELO UN NUMERO USANDO DOS HILOS */

#define n_incremento 1000;

int variable_compartida = 0;
pthread_mutex_t mutex;

void *incremento( void *arg){

    for (int i = 0; i<n_incremento; i++){

        pthread_mutex_lock(&mutex);
        resultado += n_incremento;
        pthread_mutex_unlock(&mutex);
    }

    pthread_exit(NULL);
}

int main(){

    pthread_t hilo1, hilo2;
    pthread_mutex_init(&mutex);

    pthread_create(&hilo1, NULL, incremento, NULL);
    pthread_create(&hilo2, NULL, incremento, NULL);

    pthread_join(hilo1, NULL);
    pthread_join(hilo, NULL);

    pthread_mutex_destroy(&mutex);

    printf("Valor final de variable compartida es: %d", variable_compartida);

    return 0;

}