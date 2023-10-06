#include <stdio.h>

/*Crear un programa que permita contar la cantidad de veces que se ingresan números pares
y la cantidad de números impares hasta que se ingrese un número negativo. El cero no se
cuenta.*/

int main() {
    int contadorPar = 0; 
    int contadorImpar = 0; 
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    while (numero >= 0) {
        if (numero % 2 == 0 && numero != 0) {
            contadorPar++; 
        } else {
            contadorImpar++; 
        }

        printf("Ingrese un numero: ");
        scanf("%d", &numero);
    }

    printf("Numero de pares introducidos: %d\n", contadorPar);
    printf("Numero de impares introducidos: %d\n", contadorImpar);

    return 0;
}