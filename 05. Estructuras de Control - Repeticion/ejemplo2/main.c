/**
 * \file            main.c
 * \brief           05. Estructuras de Control - Repetición - Ejemplo 2 - Estructura "for" (2)
 * \author          Javier Balloffet
 * \date            Sep 30, 2018
 * \details         Ver README para compilar, linkear y ejecutar
 */

#include <stdio.h>

int main() {
    int number, i;
    int sum = 0;

    /* 1. Solicito un número por consola */
    printf("Ingrese un numero: ");
    scanf("%d", &number);
	
    /* 2. Calculo la sumatoria de todos los números desde cero hasta el número ingresado (incluído) */
    for (i = 0; i <= number; i++) {
        sum += i;   
    }
    printf("Sumatoria de 0 a %d = %d\n", number, sum);

	return 0;
}
