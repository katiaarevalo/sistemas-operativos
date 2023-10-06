#include <stdio.h>

/*Realizar algoritmo que pruebe si una palabra ingresada por el usuario es o no
palíndromo. Una palabra es palíndroma cuando se lee igual de derecha a izquierda que de
izquierda a derecha. Por ejemplo: ana, radar, oso, etc. */

#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100];
    int esPalindromo = 1; // 1 -> Es palindromo. 

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    // calculo la longitud de la palabra.
    int longitud = strlen(palabra);
    
    // recorro la mitad de la palabra. 
    for (int i = 0; i < longitud / 2; i++) {

        // Si la palabra en la posición i es diferente a la posición contraria.
        if (palabra[i] != palabra[longitud - 1 - i]) {
            esPalindromo = 0; // 0 -> No es un palíndromo.
            break; // No es necesario seguir comprobando.
        }
    }

    if (esPalindromo == 1)
    {
        printf("%s es un palindromo.\n", palabra);
    } else {
        printf("%s no es un palindromo.\n", palabra);
    }

    return 0;
}