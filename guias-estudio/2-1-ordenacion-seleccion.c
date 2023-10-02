#include <stdio.h>


/* Función para intercambiar dos elementos de un arreglo*/
void funcionIntercambiar(int *x, int *y)
{
    int temp = *x;   // Guardo el valor de x en una variable temportal.
    *x = *y;          // Le pasamos el valor de y a x. 
    *y = temp;       // Le damos el valor de x a y que habiamos guardado anteriormente en el temporal.
}

void ordenSeleccion(int arr[], int n)
{
    int i,j, minimo;

    /* RECORRIDO DEL ARREGLO DESDE EL PRINCIPIO HASTA EL PENULTIMO */
    for (i = 0; i < n-1; i++ )
    {
        minimo = i;     // Decimos que, de momento, el primer elemento es el minimo. 

        /*  RECORRIDO DESDE EL SIGUIENTE ELEMENTO AL ACTUAL, PARA COMPARAR. */
        for (j = i + 1; j <n; j++)
        {
            // Comparamos elementos. 
            if (arr[j] < arr[minimo]) // Si el elemento es menor al minimo actual, se cambia. 
            {
                minimo = j;
            }
        }

        /* SI ENCONTRAMOS UN MINIMO DIFERENTE DEL INICIAL ENTONCES INTERCAMBIAMOS EL ELEMENTO ACTUAL POR EL MÁS PEQUEÑO*/
        if (minimo !=i)
        {
            funcionIntercambiar(&arr[i], &arr[minimo]);
        }
    }
}

int main()
{
    int arreglo[5];
    int i;

    // Pedir los 5 elementos del arreglo.   
    for (i = 0; i < 5; i++) {
        printf("Ingrese elemento del arreglo: ");
        scanf("%d", &arreglo[i]);
    }

    // Imgreso el arreglo en la función. 
    ordenSeleccion(arreglo, 5);

    // Imprimir el arreglo ordenado.
    printf("Arreglo ordenado:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    return 0;    
}