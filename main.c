/*
 * En este programa le pediremos al usuario una secuencia de numeros
 * Y le daremos varias opciones dependiendo de lo que nosotros tengamos en el programa para el usuario
 *
 * Autora: Yasmin Alvarado Lee
 * Fecha: 15 de oct del 2018
 * correo: yazminalvlee@gmail.com
 */

#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    double average = 0;
    int min;
    int max;
    int menu;
//Le pido al usuario que ponga una secuencia de numeros
    printf("Inserta los numeros que quieras:\n");
    scanf("%d", &n);
//Uso los numeros de la secuencia como cantidad en la variable n
    int numeros[n];

    for (int i = 0; i < n; i++) { //pido los valores
        printf("Inserte los numeros uno por uno:\n");
        scanf("%i", &numeros[i]);
    }
    //OPERACION SUMA Y PROMEDIO
    for(int i = 0; i < n; ++i) {
        sum += numeros[i];
    }

    average = sum / n;

    //OPERACION PARA SACAR EL MINIMO DE LOS NUMEROS INSERTADOS
    for (int i = 0; i < n; i++) {
        if (numeros[i] < min) {
            min = numeros[i];
        }
    }

    //OPERACION PARA SACAR EL MAXIMO DE LOS NUMEROS INSERTADOS
    for (int i = 0; i < n; i++) {
        if (numeros[i] > max) {
            max = numeros[i];
        }
    }
//Menu que tiene nuestro programa
    printf("Que quieres hacer con los numeros?\n"
           "1.- Sacar la suma\n"
           "2.-Sacar el Promedio\n"
           "3.-mostrar el numero mas pequeño\n"
           "4.-mostrar el numero mas grande.\n"
           " Escribe la opcion:");
    scanf("%d", &menu);
//RESULTADOS DEPENDIENDO DE LA FUNCION QUE ELEGIO EL USUARIO
    switch (menu){
        case 1:
            printf("La respuesta de la suma es: %d", sum);
            break;
        case 2:
            printf("Promedio: %lf", average);
            break;
        case 3:
            printf("El minimo es: %d", min);
            break;
        case 4:
            printf("El maximo es: %d", max);
            break;
        default:
            printf("No existe, elige otra opción.");
    }
    return 0;
}