
#include <stdio.h>
#include <string.h>

int main() {
    char cadena[1000];
    int contador_letra = 0;
    char letrai;

    // LO OCUPO PARA LEER TODO, INCLUSO LOS ESPACIOS INGRESADOS. 
    printf("Ingrese cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);

    // %C ---> PARA LEER UNICO CARACTER 
    printf("Ingrese letra a contar: ");
    scanf(" %c", &letrai); 

    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] == letrai) { 
            contador_letra = contador_letra + 1;
        }
    }

    printf("La cantidad de letra '%c' en la cadena es: %d\n", letrai, contador_letra);
    return 0;
}
