#include <stdio.h>
#include <string.h>

/* Declarar una estructura que permita guardar:
+               -   Código.
+               -   Descripción.
+               -   Precio.  
Luego definir dos parámetros de dicho tipo, cargarlas e imprimir el nombre del  producto que tiene mayor precio.    */

//            --- DEFINIR ESTRUCTURA PRODUCTO ---             //

#include <stdio.h>
#include <string.h>

// Definir estructura Producto
struct Producto
{
    char nombre[100];
    int codigo;
    char descripcion[100];
    int precio;
};

int main()
{
    struct Producto producto1;
    struct Producto producto2;

    /* Ingresar detalles del primer producto */
    printf("Ingrese los datos del primer producto:\n");
    printf("Nombre: ");
    scanf("%s", producto1.nombre);
    printf("Codigo: ");
    scanf("%d", &producto1.codigo);
    printf("Descripcion: ");
    scanf("%s", producto1.descripcion);
    printf("Precio: ");
    scanf(" %d", &producto1.precio); 

    /* Ingresar detalles del segundo producto */
    printf("Ingrese los datos del segundo producto:\n");
    printf("Nombre: ");
    scanf("%s", producto2.nombre);
    printf("Codigo: ");
    scanf("%d", &producto2.codigo);
    printf("Descripcion: ");
    scanf("%s", producto2.descripcion);
    printf("Precio: ");
    scanf(" %d", &producto2.precio); 

    if (producto1.precio > producto2.precio)
    {
        printf("El producto de mayor precio es: %s\n", producto1.nombre);
    }
    else if (producto2.precio > producto1.precio)
    {
        printf("El producto de mayor precio es: %s\n", producto2.nombre);
    }
    else
    {
        printf("Los productos tienen el mismo precio.\n");
    }

    return 0;
}