#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int n;
    double suma=0, cal=0;
    do{
        printf("Ingrese un numero entero:\n ");
        scanf("%d", &n);

        if (n<=0)
        {
           printf("Escribir un numero entero\n");

        }

    }while(n<=0);

    for (int i = 1; i <= n; i++)
    {
        suma=1/pow(2, i);
        cal=cal+suma;

    }
    printf("La suma de los %d terminos de la serie es: %1f\n", n, cal);
    printf("Gracias");

    getch();
    return 0;
}