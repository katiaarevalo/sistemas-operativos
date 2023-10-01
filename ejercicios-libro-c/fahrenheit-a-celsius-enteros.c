#include <stdio.h>
/* Muestra la tabla de conversión de grados F a C* para F= 0, 20, ... , 300.*/

main()
{

    int gradosF, gradosC;
    int lim_inf, lim_sup, incremento;

    lim_inf = 0;       /*Minimo del valor que puede tomar = 0*/
    lim_sup = 300;     /*Máximo del valor que puede tomar = 300*/
    incremento = 20; /*Los grados F van de 0, 20, 40, 60, 80, ... hasta 300. */

    gradosF = lim_inf; /*Se inicia los grados F con el minimo valor posible.*/

    while ( gradosF <= lim_sup) {
        gradosC = 5 *(gradosF-32) / 9;
        printf ( "%d\t%d\n", gradosF, gradosC );
        gradosF = gradosF + incremento;
    }

    /*Explicación del printf ---->      "%d\t%d\n"       <------ 

    Debemos entender lo siguiente; 
    Tenemos         %d    --- >      Imprimir un número entero.   
    +               /t    --- >      Tabular una vez.
    +               %d    --- >      Imprimir el segundo argumento en número entero.
    +               /n    --- >      Realiza un salto de linea.                      */
                    
}