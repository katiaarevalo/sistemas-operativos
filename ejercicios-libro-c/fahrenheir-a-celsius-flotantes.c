#include <stdio.h>

/* Tabla de conversión Fahrenheit a Celsius ver. flotante */
int main()
{
    float gradosF, gradosC;     /* float = punto flotante*/
    int lim_inf, lim_sup, incremento;

    lim_inf = 0;
    lim_sup = 300;
    incremento = 20;

    gradosF = lim_inf;

    while (gradosF <= lim_sup){

        gradosC = (5.0/9.0) * (gradosF - 32.0);
        printf("%3.0f%6.1f\n", gradosF, gradosC);
        gradosF = gradosF + incremento;
    }

/*      DEBEMOS SABER PARA UN PRINTF;              
+       
+       %d    ----->    Mostrar como un entero.
+       %6d   ----->    Mostrar como un entero de, al menos, 6 caracteres de longitud.
+       %f    ----->    Mostrar como un punto flotante.
+       %6f   ----->    Mostrar como un punto flotante de, al menos, 6 caracteres de longitud.
+       %.2f  ----->    Mostrar como punto flotante con 2 carateres luego del punto decimal.
+       %6.2f ----->    Mostrar como punto flotante con 6 caracteres de longitud y 2 despues del punto decimal. 
+                                                                                                                   */

}
