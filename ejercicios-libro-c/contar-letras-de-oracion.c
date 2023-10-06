#include <stdio.h>

int main()
{
    char oracion[1000];
    int cont_palabras;

    cont_palabras = 0;

    printf("Ingrese una oracion: ");
    fgets( oracion, sizeof(oracion), stdin);

    for ( int i = 0; oracion[i] != '\0'; i++){
        if (oracion[i] == ' ' || oracion[i] == '\n'){
        }
        else{
            cont_palabras = cont_palabras +1;
        }
    }
    printf("La cantidad de letras son: %d\n", cont_palabras);
    return 0;
}