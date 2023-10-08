#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Funciones.h"

void apartado1(int n, struct Datos *v, int criterio){

    if(criterio == 0){

        qsort(v, n, sizeof(struct Datos), &comparaIMC);

    }else if(criterio == 1){

        qsort(v, n, sizeof(struct Datos), &comparaName);

    }else{

        printf("El criterio no es valido, debe ser 1 o 0\n");
    }
}

int comparaIMC(const void *a, const void *b){

    struct Datos *datosA = (struct Datos *)a;
    struct Datos *datosB = (struct Datos *)b;

    float IMCa, IMCb;

    IMCa = datosA->pesoKg/(datosA->alturaM * datosA->alturaM);
    IMCb = datosB->pesoKg/(datosB->alturaM * datosB->alturaM);

    if(IMCa < IMCb){

        return -1;
    }else if(IMCa == IMCb){

        return 0;
    }else{

        return 1;
    }
}

int comparaName(const void *a, const void *b){

    struct Datos *datosA = (struct Datos *)a;
    struct Datos *datosB = (struct Datos *)b;

    return (strcmp(datosA->nombre, datosB->nombre) * (-1));
}

int apartado2(int n, struct Datos *v, char *nombre){

    int cont = n - 1 ;

    if(cont == -1){

        return -1;
    }

    if(strcmp(v[cont].nombre, nombre) == 0){

        return cont;
    }

    apartado2(n -1, v, nombre);
}