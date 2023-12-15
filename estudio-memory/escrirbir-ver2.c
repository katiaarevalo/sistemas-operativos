#include <stdio.h>
#include <stdlib.h>

#define PAGE_SIZE 1024
#define NUM_PAGES 4

// Estructura de una página
typedef struct
{
    int pageNumber;
    char data[PAGE_SIZE];
} Page;

// Estructura de la memoria virtual
typedef struct
{
    Page pages[NUM_PAGES];
} VirtualMemory;

// Función para leer datos desde un archivo y cargarlos en la memoria virtual
void loadFileIntoMemory(FILE *file, VirtualMemory *virtualMemory)
{
    for (int i = 0; i < NUM_PAGES; ++i)
    {
        virtualMemory->pages[i].pageNumber = i;
        fread(virtualMemory->pages[i].data, sizeof(char), PAGE_SIZE, file);
    }
}

// Función para imprimir el contenido de una página
void printPage(Page *page)
{
    printf("Page Number: %d\n", page->pageNumber);
    printf("Data: %s\n", page->data);
}

// Escribir datos en una página
void escribirPage(VirtualMemory *virtualMemory, int pageNumber, const char *data)
{
    if (pageNumber >= 0 && pageNumber < NUM_PAGES)
    {
        virtualMemory->pages[pageNumber].pageNumber = pageNumber;
        snprintf(virtualMemory->pages[pageNumber].data, PAGE_SIZE, "%s", data);
    }
    else
    {
        printf("Número de página inválido.\n");
    }
}

// Función principal
int main()
{
    FILE *file = fopen("C://Users//katia//OneDrive//Documentos//SISTEMAS-OPERATIVOS-2023//estudio-memory//memory-test.txt", "r");

    if (file == NULL)
    {
        perror("Error al abrir el archivo");
        return 1;
    }

    VirtualMemory virtualMemory;

    // Cargar datos desde el archivo a la memoria virtual
    loadFileIntoMemory(file, &virtualMemory);

    // Imprimir el contenido de cada página
    for (int i = 0; i < NUM_PAGES; ++i)
    {
        printf("\nContenido de la Página %d:\n", virtualMemory.pages[i].pageNumber);
        printPage(&virtualMemory.pages[i]);
    }

    // Escribir en una página
    escribirPage(&virtualMemory, 0, "Nuevo contenido para la página 0");
    escribirPage(&virtualMemory, 1, "Nuevo contenido para la página 1");
    escribirPage(&virtualMemory, 2, "Nuevo contenido para la página 2");
    escribirPage(&virtualMemory, 3, "Nuevo contenido para la página 3");


    // Imprimir el contenido actualizado de la página 2
    printf("\nContenido actualizado de la Página 0:\n");
    printPage(&virtualMemory.pages[0]);

    // Imprimir el contenido actualizado de la página 2
    printf("\nContenido actualizado de la Página 2:\n");
    printPage(&virtualMemory.pages[2]);

    fclose(file);

    return 0;
}