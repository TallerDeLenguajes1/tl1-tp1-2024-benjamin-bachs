#include <stdio.h>

int cuadrado(int a);
void cuadradoVoid (int* a);
void info(int* a);
void invertir(int* a, int* b);
void orden(int *a, int* b);

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Ingrese par de numeros: \n");
    scanf("%d %d", &a, &b);
    printf("a: %d b: %d\n", a, b);
    invertir(&a, &b);
    printf("invertidos a: %d b: %d\n", a, b);
    orden(&a, &b);
    printf("ordenados a: %d b: %d\n", a, b);
    return 0;
}

int cuadrado(int a){
    return a*a;
}

void cuadradoVoid (int* a){
    *a = *a * *a;
}

void info(int* a){
    printf("%p", a);
    printf("%d", *a);
}

void invertir(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
}

void orden(int *a, int* b){
    if (*b < *a)
    {
        int c = *a;
        *a = *b;
        *b = c;
    }
}