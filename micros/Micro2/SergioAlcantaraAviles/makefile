all: saludos a.out 

a.out: main.o funciones.o funciones.h
	gcc main.o funciones.o

main.o: main.c funciones.h
	gcc -c main.c

funciones.o: funciones.c funciones.h
	gcc -c funciones.c

saludos:
	@echo "Ejecutando el makefile de Sergio Alcántara Avilés"

limpiar:
	rm a.out *.o
