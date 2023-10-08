#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Funciones.h"


int numeroRand(int max, int min){

    int a;
    srand(time(NULL));
    a = (rand()%(max - min + 1) + min);
    return a;
}

void escribeFichero(char *name){

    FILE *file;
    file = fopen( name, "w" );

    if( file == NULL){

        perror("Error en la apertura del fichero\n");
        exit(EXIT_FAILURE);
    }


    int n, max, min, i;
    printf("Necesito que introduzacas un rango maximo para la generacion de numeros aleatorios\n");
    scanf("%d", &max);
    printf("Intoduce tambien el valor minimo de los nunmeros aleatorios\n");
    scanf("%d", &min);

    if(max < min){

        printf("El valor minimo no puede ser superior al maximo\n");
        exit(EXIT_FAILURE);
    }

    printf("Cuantos numeros aleatorios desea generear\n");
    scanf("%d", &n);
    int num;

    for(i = 0; i < n; i++){

        num = numeroRand(max, min);
        fprintf(file, "%d ", num);
    }

    fclose(file);
}