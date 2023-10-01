#include <stdio.h>

/* Escribir un algoritmo en C que genere la suma de los primero 100 números impares. */

int main()
{
    int inicio = 1;    /* El primer numero que tomare para la suma    */
    int sumaTotal = 0;    /*  Variable para guardar la suma    */
    int auxiliar = 0;   /* Variable auxiliar para usar de contador  */

    while(auxiliar < 100)   /* Mintras el auxiliar no llegue a 100, es decir, que tengamos 100 numeros ( de 0 a 99 hay 100 numeros) */
    {
       sumaTotal = sumaTotal + inicio;      /*  Se suman los numeros impares  */
       inicio = inicio + 2;                 /*  Se busca el siguiente impar  */
       auxiliar = auxiliar + 1;             /*  "Contador" de numeros impares   */
    }

    printf("La suma total es: %d\n", sumaTotal);
    return 0;
}