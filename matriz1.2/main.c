#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

void sumarColumnas(int matriz[FILAS][COLUMNAS])
{
    int columna, fila;
    int sumaColumnas[COLUMNAS] = {0};

    for (columna = 0; columna < COLUMNAS; columna++)
    {
        for (fila = 0; fila < FILAS; fila++)
        {
            sumaColumnas[columna] += matriz[fila][columna];
        }
    }

    printf("Suma de las columnas:\n");
    for (columna = 0; columna < COLUMNAS; columna++)
    {
        printf("%d ", sumaColumnas[columna]);
    }
    printf("\n");
}

void multiplicarFilas(int matriz[FILAS][COLUMNAS])
{
    int columna, fila;
    int productoFilas[FILAS] = {1};

    for (fila = 0; fila < FILAS; fila++)
    {
        for (columna = 0; columna < COLUMNAS; columna++)
        {
            productoFilas[fila] *= matriz[fila][columna];
        }
    }

    printf("Producto de las filas:\n");
    for (fila = 0; fila < FILAS; fila++)
    {
        printf("%d\n", productoFilas[fila]);
    }
}

int main()
{
    int matriz[FILAS][COLUMNAS];
    int fila, columna;

    printf("Ingrese los elementos de la matriz:\n");

    for (fila = 0; fila < FILAS; fila++)
    {
        for (columna = 0; columna < COLUMNAS; columna++)
        {
            printf("Ingrese el elemento en la posición [%d][%d]: ", fila, columna);
            scanf("%d", &matriz[fila][columna]);
        }
    }

    sumarColumnas(matriz);
    multiplicarFilas(matriz);

    return 0;
}
