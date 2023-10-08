/*Codifica un programa en C que, utilizando funciones, cree un fichero binario con números
enteros generados aleatoriamente en un intervalo especificado por el usuario. El programa
guardará los números en un vector dinámico antes de volcarlo a disco. El programa recibirá 4
parámetros como argumentos en la línea de órdenes: nombre del fichero a crear, número de
elementos que contendrá el fichero y los extremos superior e inferior del intervalo.*/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(int argc, char **argv){

    if(argc < 5){
        printf("Numero de argumentos insuficientes\n");
        printf("EJEMPLO:\n ./a.out NOMBRE_FICHERO NºELEMENTOS RANGO_MAX RANG_MIN\n");
        exit(EXIT_FAILURE);
    }

    int *v;
    int n, max, min;
    char *name = argv[1];
    n = atoi(argv[2]);
    max = atoi(argv[3]);
    min = atoi(argv[4]);

    v = reservaV(n, v);
    numRand(max, min);

    for(int i = 0; i < n; i++){

        v[i] = numRand(max, min);
        printf("Posicion %d, dato %d\n", i, v[i]);
    }

    ficheroBinario(name, v, n, max, min);

    liberaV(v);

    return 0;
}