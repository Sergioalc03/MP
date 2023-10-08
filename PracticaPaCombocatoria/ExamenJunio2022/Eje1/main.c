#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main(int argc, char **argv){

    if(argc != 3){

        printf("Faltan parametros al ejecutar\n");
        printf("EJEMPLO: ./a.out NOMBRE_FICHERO NOMBRE_NUEVO_FICHERO\n");
        exit(EXIT_FAILURE);
    }

    int n, i; 
    team *v;

    v = Reserva(&n,argv[1]);

    printf("Se van a reservar %d\n", n);

    apartado2(n, v, argv[1]);
    for(i = 0; i < n; i++){

        printf("Nombre: %s\nID: %d\nPorcentaje: %f \n", v[i].nombre, v[i].codigo, v[i].porcentaje);
    }

    apartado3(n, v, argv[2]);
    exit(EXIT_SUCCESS);
}   