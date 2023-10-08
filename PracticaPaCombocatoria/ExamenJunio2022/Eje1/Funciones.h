/*
EXAMEN JUNIO 2022 DE MP
SERGIO ALCÁNTARA AVILÉS
*/

#ifndef FUNCIONES_H
#define FUNCIONES_H

#define MAXLINEA 100

struct Equipo
{
    int codigo; //Identificador univoco del equipo
    char nombre[MAXLINEA]; //nombre del equipo
    float porcentaje; //porcentaje de triples anotados
};

typedef struct Equipo team;

team *Reserva(int *n, char *name);

void apartado2(int n, team *v, char *name);

void apartado3(int n, team *v, char *name);

#endif //FUNCIONES_H