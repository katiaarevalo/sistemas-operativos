#include <stdio.h>

int main() {
    char palabra[1000]; // Palabra con menos de 1000 letras. 
    long cont_caracter = 0; // Contador.

    printf("Ingrese una cadena de caracteres: ");
    scanf("%s", palabra); // Lee una cadena. 

    // Contar caracteres hasta encontrar el carácter nulo '\0'
    while (palabra[cont_caracter] != '\0') {
        cont_caracter++;
    }

    printf("La cantidad de caracteres es: %ld\n", cont_caracter);
    
    return 0;

}