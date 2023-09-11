#include <stdio.h>

int main(void)
{
    float n1, n2, n3;

    printf("Ingrese primera nota: ");
    scanf("%f", &n1); 

    printf("Ingrese segunda nota: ");
    scanf("%f", &n2); 

    printf("Ingrese tercera nota: ");
    scanf("%f", &n3); 

    float promedio_ponderado = n1*0.4 + n2*0.3 + n3*0.3;

    printf("El promedio ponderado es: %.3f\n", promedio_ponderado);

}
