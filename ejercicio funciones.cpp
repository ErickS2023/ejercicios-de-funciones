/*
// primer ejercicio
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void suma(int, int);

int main() {
    int num1, num2;
    srand(time(NULL));
    printf("Introducir dos numeros a sumar \n");
    scanf("%d %d", &num1, &num2);
    suma(num1, num2);
    return 0;
}

void suma(int a, int b) {
    int resultado = a + b;
    printf("La suma es: %d\n", resultado);
}


|*/
//ejercicio 2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void suma(int, int);

int main() {
    int num1, num2;
    srand(time(NULL));
    printf("Introducir dos numeros a sumar \n");
    scanf("%d %d", &num1, &num2);
    suma(num1, num2);
    return 0;
}

void suma(int a, int b) {
    int resultado = a + b;
    printf("La suma es: %d\n", resultado);
}


