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

// Función para escribir en una página
void writePage(Page *page, int pageNumber, const char *texto)
{
    page->pageNumber = pageNumber;
    snprintf(page->data, sizeof(page->data), "%s", texto);
}

// Función principal
int main()
{
    char texto[PAGE_SIZE];

    FILE *file = fopen("C://Users//katia//OneDrive//Documentos//SISTEMAS-OPERATIVOS-2023//actividad-memory//datos-memory.txt", "r+");

    if (file == NULL)
    {
        perror("Error al abrir el archivo");
        return 1;
    }

    VirtualMemory virtualMemory;

    // Cargar datos desde el archivo a la memoria virtual
    loadFileIntoMemory(file, &virtualMemory);

    // Escribir el contenido de cada página
    for (int i = 0; i < NUM_PAGES; ++i)
    {
        printf("Ingrese la línea de texto para la página %d: ", i);
        fgets(texto, sizeof(texto), stdin);

        // Escribir en la página
        writePage(&virtualMemory.pages[i], i, texto);
    }

    // Volver al principio del archivo antes de imprimir
    rewind(file);

    // Imprimir el contenido de cada página
    for (int i = 0; i < NUM_PAGES; ++i)
    {
        printf("\nContenido de la Pagina %d:\n", virtualMemory.pages[i].pageNumber);
        printPage(&virtualMemory.pages[i]);

        // Escribir en el archivo después de imprimir
        fprintf(file, "%s", virtualMemory.pages[i].data);
    }

    fclose(file);

    return 0;
}
