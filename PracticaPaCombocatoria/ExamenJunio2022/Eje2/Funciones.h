#ifndef FUNCIONES_H
#define FUNCIONES_H

#define LENGTH 100

struct Datos
{
    int codigo;
    char nombre[LENGTH];
    float pesoKg;
    float alturaM;
};


void apartado1(int n, struct Datos *v, int criterio);

int apartado2(int n, struct Datos *v, char *nombre);

int comparaIMC(const void *a, const void *b);

int comparaName(const void *a, const void *b);

#endif //FUNCIONES_H