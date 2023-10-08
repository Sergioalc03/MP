/*Codifica un programa en C que, utilizando funciones, abra un fichero de texto, cuyo nombre se
pedirá al usuario, y genere un nuevo fichero llamado mayusculas-nombreFicheroDeEntrada.txt,
que tenga el mismo contenido que el fichero original pero en mayúsculas.*/
#include <stdio.h>
#include <stdlib.h>
#include "ficheros.h"

int main(int argc, char** argv){

    if(argc < 2){

        printf("Error, faltan argumentos en la ejecucion (Ej: ./a.out nombreFichero)\n");
        return -1;
    }
    
    mayusculasFichero( argv[1]);

    return 0;
}