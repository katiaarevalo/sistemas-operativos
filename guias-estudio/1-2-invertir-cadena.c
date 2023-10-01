#include <stdio.h>
#include <string.h>  /*     Biblioteca de cadenas   */

/* Una función en C que permita invertir una cadena de texto, y tome los caracteres
como argumento y devuelva la cadena invertida. Por ejemplo, si se pasa la cadena "casa", la
función debe devolver "asac” */


void cadenaInvertida(char str[])    /* Función cadenaInvertida ---> recibe " char str[] ", es decir, un arreglo de caracteres */
{
    int longitud = strlen(str);     /* Calculo la longitud de la cadena de entrada (str) qye recibe sando strlen*/

    for ( int i = 0; i < longitud/2 ; i++)  /* Se recorre la cadena hasta la mitad*/
    {
        char temp = str[i];     /* Se guarda en una variable temporal */
        str[i] = str[longitud -i -1];   /* Se le asigna el caracter en la posición i el que está en la posición opuesta*/
        str[ longitud -i -1] = temp;    /* Se le asigna el caracter i a la posición opuesta */
    }

}

int main()
{
    char palabra[] = "hola";
    printf("Cadena original: %s\n", palabra);

    cadenaInvertida(palabra);   /*  Llamo a la función */
    printf("Cadena Invertida: %s\n", palabra);

    return 0;

}