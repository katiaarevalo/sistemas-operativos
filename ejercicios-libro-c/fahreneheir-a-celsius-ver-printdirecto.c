#include <stdio.h>

/*  Imprime directamente la tabla Fahreheir a celcius*/

int main()
{
    int gradosF;

/*         iniciador;   condición;          incremento          */
    for (gradosF = 0; gradosF <= 300; gradosF = gradosF +20) 
    {
        printf("%3d\t%6.1f\n", gradosF, (5.0/9.0)*(gradosF-32));
    }
}