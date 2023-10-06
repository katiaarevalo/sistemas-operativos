#include <stdio.h>
#include <math.h>

/*Crear un programa que permita contar la cantidad de veces que se ingresan números pares
y la cantidad de números impares hasta que se ingrese un número negativo. El cero no se
cuenta.*/

int main()
{
    int contadorPar, contadorImpar;
    contadorPar = -1;
    contadorImpar = 0;
    int numero;

    while(numero >=0){

        printf("Ingrese un numero:");
        scanf("%d", &numero);

        if (numero%2 == 0 && numero !=1)
        {
            contadorPar = contadorPar+1;
        }
        else
        {
            contadorImpar = contadorImpar+1;
        }
    }

    printf("Numero de pares introducidos: %d\n", contadorPar);
    printf("Numero de impares introducidos: %d", contadorImpar);
    return 0;

}