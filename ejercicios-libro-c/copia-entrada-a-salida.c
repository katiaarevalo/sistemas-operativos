#include <stdio.h>

// Copia la entrada a la salida. 
// EOF --> End of file (fin del archivo)

int main ()
{
    int c;

    while ((c= getchar()) != EOF)
        putchar(c);

    return 0;
}