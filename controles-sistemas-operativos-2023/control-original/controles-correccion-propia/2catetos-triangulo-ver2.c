#include <stdio.h>
#include <math.h>


//              LISTO                //
/*Desarrollar un programa que lea los valores de los catetos de un triángulo rectángulo y
calcule cuál es la hipotenusa, el área y el perímetro del triángulo mediante las siguientes
expresiones: */

int main()
{

    int cateto1, cateto2;
    float hipotenusa, area, perimetro;

    printf("Ingrese un cateto: \n");
    scanf("%d", &cateto1);

    printf("Ingrese un cateto: \n");
    scanf("%d", &cateto2);

    if (cateto1 > 0 && cateto2 >0)
    {

        hipotenusa = sqrt( (pow(cateto1, 2) + pow(cateto2, 2) ));
        area = (cateto1 * cateto2) /2;
        perimetro = hipotenusa + cateto1 + cateto2; 
    
        printf("La hipotenusa es: %.2f\n", hipotenusa);
        printf("El area es: %.2f\n", area);
        printf("El perimetro es: %.2f\n", perimetro);
    }

    else 
    {

        printf("Cateto no valido.\n");
    }
    return 0;

}