#include <stdio.h>

int main(void)
{
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
}