#include <stdio.h>

int main()
{
    float nota1, nota2, nota3;
    float promedio;

    // Solicitar datos.
    printf("Ingrese nota 1: ");
    scanf("%f", &nota1);

    printf("Ingrese nota 2: ");
    scanf("%f", &nota2);

    printf("Ingrese nota 3: ");
    scanf("%f", &nota3);

    promedio = (nota1*0.4) + (nota2*0.3) + (nota3*0.3);

    if (promedio < 3.95)
    {
        printf("Obtuvo un %.2f, ha reprobado la asignatura.", promedio);
    }
    else if (promedio >= 3.95 && promedio <= 4.94)
    {
        printf("Obtuvo un %.2f, debe ir a examen.", promedio);
    }
    else
    {
        printf("Obtuvo un %.2f, se exime de la asignatura.", promedio);
    }

    return 0;
}
