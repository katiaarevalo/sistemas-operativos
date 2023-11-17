#include <stdio.h>
#include <pthread.h>

/* USAR MUTEX PARA SIMULAR TRASFERENCIA DE DINERO ENTRE DOS CUENTAS*/

#define monto_inicial = 1000;

int saldo_cuenta1 = monto_inicial;
int saldo_cuenta2 = monto_inicial;

pthread_mutex_t mutex;

void *transferencia (void *arg){
    int *datos_transferencia = (int *)arg;
    int monto = datos_transferencia[0];
    int origen = datos_transferencia[1];
    int destino = datos_transferencia[2];

    phtread_mutex_lock(&mutex);

    if (origen = 1 && saldo_cuenta1 >= monto){
        saldo_cuenta1 -= monto;
        saldo_cuenta2 += monto;
        printf("Transferencia de cuenta 1 a 2 de %d", monto);
    }
    else if (origen = 2 && saldo_cuenta2 >= monto){
        saldo_cuenta1 += monto;
        saldo_cuenta2 -= monto;
        printf("Transferencia de cuenta 2 a 1 de %d", monto);
    }
    else{
        printf("Transferencia no válida");
    }

    pthread_mutex_unlock(&mutex);
    pthread_exit(NULL);
}

int main(){

    pthread_t hilo1, hilo2;
    pthread_mutex_init(&mutex, NULL);

    int datos_transferencia1[3] = {200,1,2};
    int datos_transferencia2[3] = {500,2,1};

    pthread_create(&hilo1, NULL, transferencia, void *datos_transferencia1);
    pthread_create(&hilo2, NULL, transferencia, void *datos_transferencia2);

    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);

    pthread_mutex_destroy(&mutex);
    return 0;
}