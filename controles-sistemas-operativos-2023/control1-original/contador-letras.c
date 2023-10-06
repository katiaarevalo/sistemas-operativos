#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[1000];
    int contador_letra = 0;
    char letrai;
    char b;
    b = 'letrai'

  

    printf("Ingrese cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin); 
    printf("Ingres letra a contar: ");
    scanf("%s", &letrai);
    printf("%s", b);

    for( int i = 0; cadena[i] != '\0'; i++){
        if (cadena[i] == 'letrai'){
            contador_letra = contador_letra + 1;
        }
    }

    printf("La cantidad de letra: %d ", contador_letra);
    return 0;
}