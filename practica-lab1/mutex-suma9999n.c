#include <stdio.h>
#include <pthread.h>

// Defino el mutex. (Le asigno nombre)
pthread_mutex_t lock;

void *funcionSuma(){

    //Bloqueo acceso a región critica. 
    phtread_mutex_lock(&lock);

    //Sección critica.
    int resultado = 0;

    for (int i = 0; i <10000; i ++){
        resultado +=i;
    }

    printf("Resultado de la suma: %d", resultado);

    // Desbloqueo acceso a región critica.
    pthread_mutex_unlock(&lock);

    pthread_exit(NULL);
}

int main(){

    // asigno id a hilos.
    phtread_t hilo1, hilo2;

    phtread_mutex_init(&lock, NULL);        // INICIO MUTEX

    pthread_create(&hilo1, NULL, funcionSuma, NULL);
    pthread_create(&hilo2, NULL, funcionSuma, NULL);

    phtread_join(hilo1, NULL);
    phtread_join(hilo2, NULL);

    pthread_mutex_detroy(&lock);        // DESTRUTO MUTEX. 

    return 0;
}