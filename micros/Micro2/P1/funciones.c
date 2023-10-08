#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ficheros.h"

void mayusculasFichero(char *arg){

    char *origen = arg;
    FILE *f;
    f = fopen( origen, "r" );

    if( f == NULL){

        perror("Error en la apertura del fichero\n");
        exit(EXIT_FAILURE);
    }

    char *mayus = "Mayusculas.txt";
    FILE *f2;
    f2 = fopen( mayus, "w");

    if(f2 == NULL){

        perror("Error abriendo el cambio a mayusculas\n");
        exit(EXIT_FAILURE);
    }

    char c;
    while( (c = fgetc(f)) != EOF ){

        c = toupper( c );
        fputc(c, f2);
    }

    fclose(f);
    fclose(f2);

    printf("Archivo copiado en mayusuclas con exito\n");
}