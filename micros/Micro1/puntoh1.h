//El objetivo de esta prueba es comprobar que tal con la reserva de memoria y las structs

#ifndef PUNTOH1_H
#define PUNTOH1_H

struct Persona
{
    int edad;
    float peso;
    char nombre;
};

struct Persona *resevamemoria(struct Persona *vp, int n);

struct Persona crea();

void rellevaVstruct(struct Persona *vp, int n);

void printVstruct(struct Persona *vp, int n);

void liveramemoria(struct Persona *vp);

#endif //PUNTOH1_H