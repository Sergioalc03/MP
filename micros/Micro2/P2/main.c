/*Codifica un programa en C que, utilizando funciones, cree un fichero texto con números enteros
generados aleatoriamente en un intervalo especificado por el usuario. El programa le preguntará
al usuario el nombre del fichero a crear, el número de elementos que contendrá el fichero y los
extremos superior e inferior del intervalo.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Funciones.h"

int main(int argc, char** argv){

    char name[100];
    printf("¿Nombre del fichero a crear o abrir?\n");
    scanf("%s", name);

    escribeFichero(name);

    return 0;
}