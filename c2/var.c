#include <stdio.h>

void potenciaCuadrado(int* nro);

int main()
{
    /*
    int numero = 36;
    long long numero2 = 24;
    char caracter = '2';
    float num1 = 21.254;
    double num2 = 24.21;

    int numero4 = 24;
    int numero23 = 12;

    int numero25 = numero4 + numero23;
    float numero30 = (float)(numero4 + numero23);
    */

   /*
   int notas_curso[5];
   char nombre[6];
   
   notas_curso[0] = 23;
   notas_curso[1] = 45;
   notas_curso[2] = 12;
   notas_curso[3] = 54;
   notas_curso[4] = 23;

   int longitud_arreglo = sizeof(notas_curso);
   int longitud_elemento = sizeof(notas_curso[0]);
   int longitud_real = longitud_arreglo/longitud_elemento;

   printf("El arreglo notas_curso tiene %d elementos",longitud_real);
   printf("\n");

   int i = 0;
   
   for(i = 0;i<longitud_real;i++)
   {
        printf("El valor del indice %d es %d",i,notas_curso[i]);
        printf("\n");
   }

   int suma_total = 0;
   int j = 0;
   while(j < longitud_real)
   {
        suma_total = suma_total + notas_curso[j];
        j = j + 1;
   }
   printf("La suma de los elementos es : %d",suma_total);
   float promedio_arreglo = 0.00;
   promedio_arreglo = (float)suma_total/longitud_real;
   printf("\n");
   printf("El promedio de los valores del arreglo es %.2f",promedio_arreglo);
   printf("\n");
   */

    int n = 50;
    int* p = &n;
    printf("El valor de n es %d",n);
    printf("\n");
    printf("El valor de la direccion de n es %p",p);
    printf("\n");
    n = 25;
    printf("Se ha variado el valor de n");
    printf("\n");
    printf("El valor de n es %d",*p);
    printf("\n");
    printf("El valor de la direccion de n es %p",p);
    potenciaCuadrado(&n);
    printf("\n");
    printf("El valor de n es %d",*p);
    printf("\n");
    printf("El valor de la direccion de n es %p",p);
    printf("\n");
}

void potenciaCuadrado(int* nro)
{
    *nro = *nro * *nro;
}