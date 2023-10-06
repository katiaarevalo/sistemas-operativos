#include <stdio.h>

int main()
{
    char cadena[1000];
    int contador_espacios = 0;

    printf("Ingrese cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin); //

    /*  PARA ASEGURARME DE LEER ESPACIOS EN BLANCO. 
        - usar fgets, de esta manera es seguro que tomará los espacios en blanco. 
        - sizeof, me aseguro de dar la memoria suficiente.
        -stdin, leer datos que ingresa el usuario por teclado.
    */

    for( int i = 0; cadena[i] != '\0'; i++){
        if (cadena[i] == ' '){
            contador_espacios = contador_espacios + 1;
        }
    }
    printf("La cantidad de espacios en blanco es: %d ", contador_espacios);
    return 0;
}