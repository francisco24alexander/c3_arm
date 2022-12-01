#include <stdio.h>

int suma(int num1, int num2);
int resta(int num1, int num2);

int main(void)
{
    int a = 5;
    int b = 6;
    int c = suma(a,b);
    int d = resta(a,b);
    printf("%d",c);
    printf("\n");
    printf("%d",d);
    printf("\n");
}