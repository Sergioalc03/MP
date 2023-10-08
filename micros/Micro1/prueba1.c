#include "puntoh1.h"
#include <stdio.h>

int main(int argc, char **argv){

    struct Persona *v;
    int n;

    printf("Que tamaño tendra el vector de estructuras ?\n");
    scanf("%d", &n);

    v = resevamemoria(v,n);

    struct Persona p1 = crea();

    printf("Nombre: %s, edad: %d, peso: %f\n", &p1.nombre, p1.edad, p1.peso);

    rellevaVstruct(v,n);

    printVstruct(v,n);

    liveramemoria(v);

    return 0;
}