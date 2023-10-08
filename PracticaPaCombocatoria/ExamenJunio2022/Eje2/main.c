#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main(int argc, char **argv){

    struct Datos v[4];
    int n, i, criterio, posicion; 
    char nombre[LENGTH];

    n = 4;

    printf("Inserta un nombre\n");
    scanf("%s", v[0].nombre);
    v[0].alturaM = 1.67;
    v[0].pesoKg = 72.6;
    v[0].codigo = 0;

    printf("Inserta un nombre\n");
    scanf("%s", v[1].nombre);
    v[1].alturaM = 1.82;
    v[1].pesoKg = 84.93;
    v[1].codigo = 1;

    printf("Inserta un nombre\n");
    scanf("%s", v[2].nombre);
    v[2].alturaM = 1.77;
    v[2].pesoKg = 77.7;
    v[2].codigo = 2;

    printf("Inserta un nombre\n");
    scanf("%s", v[3].nombre);
    v[3].alturaM = 1.59;
    v[3].pesoKg = 62.68;
    v[3].codigo = 3;

    printf("Inserta criterio de ordenacion\n");
    scanf("%d", &criterio);

    apartado1(n, v, criterio);
    
    for(i = 0; i < n; i++){

        printf("%s %f %f \n", v[i].nombre, v[i].pesoKg, v[i].alturaM);
    }

    printf("Inserta un nombre a buscar\n");
    scanf("%s", nombre);
    posicion = apartado2(n, v, nombre);

    if(posicion == -1){

        printf("No se encontro el nombre\n");
    }else{

        printf("Nombre encontrado en la posicion: %d\n", posicion);
    }
    exit(EXIT_SUCCESS);
}