#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4;
    float promedio; 

    //solicitar notas
    printf("Ingrese la primera nota: ");
    scanf("%f", &nota1);

    printf("Ingrese la segunda nota: ");
    scanf("%f", &nota2);

    printf("Ingrese la tercera nota: ");
    scanf("%f", &nota3);

    printf("Ingrese la cuarta nota: ");
    scanf("%f", &nota4);

    //validación de notas -> notas mayores o iguales a 1. 
    if( nota1 >= 1 && nota2 >= 1 && nota3 >= 1 && nota4 >= 1)
    {
        // Validación de notas --> notas menores o iguales a 7. 
        if( nota1 <= 7.0 && nota2 <= 7.0 && nota3 <= 7.0 && nota4 <= 7.0)
        {
        promedio = (nota1 + nota2 + nota3 + nota4) /4 ;
        printf(" El promedio de notas es: %.2f\n", promedio);   
        }

        else
        {
            printf("Las notas ingresadas no son validas!");    
        }
    }
    else
    {
        printf("Las notas ingresadas no son validas!");
    }

    return 0; 
}