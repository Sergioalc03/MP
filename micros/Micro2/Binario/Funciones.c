#include "funciones.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int *reservaV(int n, int *v){

    v = malloc(sizeof(int) * n);

    if(v == NULL){

        printf("Error al reservar memoria\n");
        exit(EXIT_FAILURE);
    }

    return v; 
}

void liberaV(int *v){

    free(v);
}

int numRand(int max, int min){

    srand(time(NULL));
    
    return (rand()%(max - min + 1) + min);
}

void ficheroBinario(char *name, int *v, int n, int max, int min){

    int i;
    int v2[100];
    FILE *f;
    f = fopen(name, "wb");

    if(f == NULL){

        printf("Error abriendo el fichero\n");
        exit(EXIT_FAILURE);
    }

    fwrite(v, sizeof(int), n, f);
    
    fseek(f, 0, SEEK_SET);

    fread(v2, sizeof(int), n, f);

    printf("Vector leído: ");
    for (i = 0; i < n; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");
    
    fclose(f);
}