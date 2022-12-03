#include <stdio.h>

void burbuja(int arreglo[],int longitud);
void intercambiar(int* a, int* b);

int main(void)
{
    printf("Programa para ordenar datos en un arreglo");
    printf("\n");
    int num_ordenar[] = {30,25,12,34,-4,-53,56,200,43,28};

    //Obtener datos del arreglo
    int longitud_arreglo_bytes = sizeof(num_ordenar);
    int longitud_elemento = sizeof(num_ordenar[0]);
    int longitud_arreglo = longitud_arreglo_bytes/longitud_elemento;

    printf("Datos del arreglo sin ordenar : ");
    for(int i = 0; i < longitud_arreglo; i++)
    {
        printf("%d ",num_ordenar[i]);
    }
    printf("\n");

    burbuja(num_ordenar,longitud_arreglo);
    printf("Arreglo ordenado");
    printf("\n");
    printf("Datos ordenados en el arreglo : ");
    for(int i = 0; i < longitud_arreglo; i++)
    {
        printf("%d ",num_ordenar[i]);
    }
    printf("\n");
    printf("Fin del programa");
    printf("\n");
}

void burbuja(int arreglo[],int longitud)
{
    printf("\n");
    printf("Inicio del procedimiento de ordenamiento");
    for(int j = 0; j < longitud; j++)
    {
        for(int k = 0;k < longitud-j-1; k++)
        {
            if(arreglo[k] < arreglo[k+1])
            {
                intercambiar(&arreglo[k],&arreglo[k+1]);
            }
        }
    }
    printf("\n");
    printf("Fin del procedimiento de ordenamiento");
    printf("\n");
}

void intercambiar(int* a, int* b)
{
    int temporal = *a;
    *a = *b;
    *b = temporal;
}