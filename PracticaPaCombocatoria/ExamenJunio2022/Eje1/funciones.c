#include "Funciones.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

team *Reserva(int *n, char* name){

    char c;
    int cont = 1;
    team *v;

    FILE *f;
    
    f = fopen(name, "r");

    if(f == NULL){

        printf("Error abriendo el fichero\n");
        exit(EXIT_FAILURE);
    }

    while ((c = fgetc(f)) != EOF)
    {
        if(c == '\n'){

            cont ++;
        }
    }

    *n = cont/2;

    v = (team *)malloc(sizeof(team) * (*n));

    if(v == NULL){

        printf("Error reservando memoria");
        exit(EXIT_FAILURE);
    }    

    fclose(f);
    return v;
}

void apartado2(int n, team *v, char *name){

    int i;
    float tirados, acertados;
    char linea[MAXLINEA];
    FILE *f;

    f = fopen(name, "r");

    if(f == NULL){

        printf("Error abriendo el fichero\n");
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < n; i++){

        fgets(v[i].nombre, sizeof(v[i].nombre), f);
        v[i].nombre[strcspn(v[i].nombre, "\n")] = '\0';
        fgets(linea, sizeof(linea), f);
    /*
    Forma mucho mas sencilla de hacerlo y mas clean, chivada por noelia

        sscanf(linea, "%d %f %f\n", &v[i].codigo, &tirados, &acertados);
    */

    //La forma que hice yo calentandome la cabeza mucho.
        char *token = strtok(linea, " ");
        if(token != NULL){

            v[i].codigo = atoi(token);
        }

        token = strtok(NULL, " ");
        if(token != NULL){

            tirados = atof(token);
        }

        token = strtok(NULL, " ");
        if(token != NULL){

            acertados = atof(token);
        }
    //Aqui ya es comun a las dos formas

        if(tirados == 0){

            v[i].porcentaje = 0.0;
        }else{

            v[i].porcentaje = ((acertados/tirados)*100);
        }
    
    }

    fclose(f);
    
}

void apartado3(int n, team *v, char *name){

    int i;
    FILE *f;
    f = fopen(name, "w");

    if(f == NULL){

        printf("Error al abrir el fichero\n");
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < n; i++){

        fprintf(f, "%d <%s> %f\n", v[i].codigo, v[i].nombre, v[i].porcentaje);
    }

    fclose(f);
}