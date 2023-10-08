#include <stdio.h>

#define TAMANIO_VECTOR 5

int main() {
    FILE* archivo = fopen("archivo.bin", "wb+");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    int vector[TAMANIO_VECTOR] = {1, 2, 3, 4, 5};

    fwrite(vector, sizeof(int), TAMANIO_VECTOR, archivo);

    // Regresar al principio del archivo para leer los datos escritos
    fseek(archivo, 0, SEEK_SET);

    int vector_leido[TAMANIO_VECTOR];
    fread(vector_leido, sizeof(int), TAMANIO_VECTOR, archivo);

    printf("Vector leído: ");
    for (int i = 0; i < TAMANIO_VECTOR; i++) {
        printf("%d ", vector_leido[i]);
    }
    printf("\n");

    fclose(archivo);
    return 0;
}