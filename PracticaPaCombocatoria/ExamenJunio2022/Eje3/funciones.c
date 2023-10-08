#include <stdlib.h>
#include <stdio.h>
#include "Funciones.h"
#include <string.h>

int ejercicio(int n1, int n2, struct Datos *C1, struct Datos *C2, struct lista **List){

    //TODO
}

struct Datos *reservaAlumn(struct Datos *Cx, int n){

    Cx = (struct Datos *)malloc(sizeof(struct Datos) * n);

    if(Cx == NULL){

        printf("Error reservando memoria para la combocatoria\n");
        exit(EXIT_FAILURE);
    }

    return Cx;
}

void rellenaCx(struct Datos *Cx, int n){

    int i;
    for(i = 0; i < n; i ++){

        printf("Inserte el codogo del alumno\n");
        scanf("%d", &Cx[i].codigo);
        printf("Inserte el nombre del alumno\n");
        scanf("%s", Cx[i].nombre);
    }
}