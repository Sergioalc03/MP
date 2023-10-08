#include "puntoh1.h"
#include <stdio.h>
#include <stdlib.h>

struct Persona *resevamemoria(struct Persona *pv, int n){

    pv = malloc(n*sizeof(struct Persona));
    if(pv == NULL){

        printf("Erro reservando memoria\n");
        exit(EXIT_FAILURE);
    }

    printf("Memoria reservada con exito\n");
    return pv;
}

struct Persona crea(){

    struct Persona p;

    printf("Edad de la persona: \n");
    scanf("%d", &p.edad);
    printf("peso: \n");
    scanf("%f", &p.peso);
    printf("Nombre: \n");
    scanf("%s", &p.nombre);

    return p;
}

void rellevaVstruct(struct Persona *pv, int n){

    int i;
    for(i = 0; i < n; i++){
        struct Persona p = crea();
        pv[i] = p;
    }
}

void printVstruct(struct Persona *vp, int n){

    int i;
    for(i = 0; i < n; i++){

        printf("elemento %d del vercot\n Nombre: %s\n Edad: %d\n Peso: %f\n", i, &vp[i].nombre, vp[i].edad, vp[i].peso);
    }
}


void liveramemoria(struct Persona *vp){

    free(vp);
}