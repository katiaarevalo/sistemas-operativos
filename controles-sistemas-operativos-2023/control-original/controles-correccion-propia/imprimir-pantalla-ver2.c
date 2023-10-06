#include <stdio.h>

    //      LISTO      //
// IMPRIMIR LO SOLCICITADO //

int main(){

    int columna1;
    int inicial;
    columna1 = 100;
    inicial = 1;

    
    for (int i=0; i<10; i++){
        printf("%d\t  ->  %d\t %d\t %d\t %d\t %d\t %d\t\n",inicial+i, columna1, columna1+10, columna1+20, columna1+30, columna1+40, columna1+50);
    }

}
