#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("hola mundo \n");

    int a = 5;

    int* b = &a;

    printf("Para mi el contenido de un puntero es la direccion de memoria que almacena pero como ese es el punto 2 supongo que se pide la variable a la que apunta: %d \n", *b);

    printf("Direccion de memoria almacenada por el puntero: %p \n", b);

    printf("Direccion de memoria de b: %p \n", &a);

    printf("Direccion de memoria del puntero: %p \n", &b);

    printf("tamaño de memoria utilizado: %d", sizeof(&b));

    return 0;
}
