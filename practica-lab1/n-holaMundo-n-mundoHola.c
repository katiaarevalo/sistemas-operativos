#include <stdio.h>
#include <pthread.h>  // Debo incluir pthread.h para trabajar con Hilos.



/*              PROBLEMA: 
Crear 2 hilos que impriman N veces "Hola Mundo" y M veces "Mundo Hola" respectivamente. 
Pista: Utilizar la biblioteca <pthread.h>. Se debe establecer N y M en el código.*/


#define N 10
#define M 10

void *holaMundo(void *arg) {
    for (int i = 0; i < N; i++) {
        printf("Hola Mundo\n");
    }
    pthread_exit(NULL);
}

void *mundoHola(void *arg) {
    for (int i = 0; i < M; i++) {
        printf("Mundo Hola\n");
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t th1, th2;

    pthread_create(&th1, NULL, holaMundo, NULL);
    pthread_create(&th2, NULL, mundoHola, NULL);

    pthread_join(th1, NULL);
    pthread_join(th2, NULL);

    return 0;
}