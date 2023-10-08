#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"

void combinaFicheros(char *fileA, char *fileB, char *name){

    char ca, cb;
    FILE* almacenA;
    almacenA = fopen(fileA, "r");

    if(almacenA == NULL){

        printf("Error abriendo el Almacen A\n");
        exit(EXIT_FAILURE);
    }

    FILE *almacenB;
    almacenB = fopen(fileB, "r");

    if(almacenB == NULL){

        printf("Error abriendo el Almacen B\n");
        exit(EXIT_FAILURE);
    }

    FILE *fusion;
    fusion = fopen(name, "w");

    if(fusion == NULL){

        printf("Error abriendo/creando el fichero fusion\n");
        exit(EXIT_FAILURE);
    }

    while((ca = fgetc(almacenA)) != EOF){

        fputc(ca, fusion);
    }

    printf("Almacen A copiado con exito\n");

    while((cb = fgetc(almacenB)) != EOF){

        fputc(cb, fusion);
    }

    printf("Fusion realizada con exito\n");

    fclose(almacenA);
    fclose(almacenB);
    fclose(fusion);
}
