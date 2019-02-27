/**
 * \file            main.c
 * \brief           11. Arreglos Multidimensionales - Ejemplo 6 - Pasaje de un array multidimensional a una función
 * \author          Javier Balloffet
 * \date            26-FEB-2019
 * \details         Usar makefile para compilar, linkear y ejecutar
 */

#include <stdio.h>

float average(int arr[2][3], int rows, int columns);

int main() {
    /* 1. Declaro un arreglo multidimensional (2D array) de enteros (int) de 2x3 posiciones */
    int array2D[2][3];
    int i, j;
    float avg;

    /* 2. Cargo el arreglo */
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Ingrese un numero: ");
            scanf("%d", &array2D[i][j]);
        }
    }

    /* 3. Paso el arreglo a la función "average" para calcular el promedio.
        Nota: En los arreglos numéricos DEBO pasar la longitud para saber donde finaliza el mismo */
    avg = average(array2D, 2, 3);

    /* 4. Imprimo el promedio */
    printf("Promedio del array = %.2f\n", avg);

	return 0;
}

float average(int arr[2][3], int rows, int columns) {
    int i, j, sum = 0;
    float avg;

    /* 5. Recorro el array recibido, sumando el valor de todas las posiciones y luego calculo el promedio */
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            sum += arr[i][j];
        }
    }
    avg = (float) sum / (rows * columns);

    return avg;
}
