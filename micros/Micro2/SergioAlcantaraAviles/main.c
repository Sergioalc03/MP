#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(int argc, char **argv){

    if(argc < 4){

        printf("Faltan argumentos en la ejecucion del programa\n");
        printf("Ejemplo:\n./a.out NOMBRE_ALMACEN_A NOMBRE_ALMACEN_B NOMBRE_COMBINACION\n");
        exit(EXIT_FAILURE);
    }

    combinaFicheros(argv[1], argv[2], argv[3]);

    return 0;
}