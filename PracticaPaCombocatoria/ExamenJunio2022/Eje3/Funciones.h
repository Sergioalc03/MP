#ifndef FUNCIONES_H
#define FUNCIONES_H

#define LENGTH 100

//Estructura que define un alumno de los vectores v1 y v2
struct Datos
{
    int codigo;
    char nombre[LENGTH];
};

struct lista
{
    int codigo;
    char nombre[LENGTH];
    struct lista *sig;
};

int ejercicio(int n1, int n2, struct Datos *C1, struct Datos *C2, struct lista **List);

struct Datos *reservaAlumn(struct Datos *Cx, int n);

void rellenaCx(struct Datos *Cx, int n);

#endif //FUNCIONES_H