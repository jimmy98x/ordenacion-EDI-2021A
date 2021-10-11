#include <stdio.h>

#define n 5

void leeArreglo(int arr[n]);
void burbuja(int arr[n]);

int main()
{
    int arreglo[n];

    leeArreglo(arreglo);
    burbuja(arreglo);

    return 0;
}

void burbuja(int arr[n])
{
    int actual, mover, aux;

    for(actual=n-1; actual>0; actual--)
    {
        for(mover=0; mover<actual; mover++)
       {
            if(arr[mover]>arr[mover+1])
            {
                aux = arr[mover];
                arr[mover] = arr[actual];
                arr[actual] = aux;
            }

       }
    }
}

void leeArreglo(int arr[n])
{
    int i;

    for(i=0; i<n; i++)
    {
        printf("Arreglo[%d]: ",i);
        scanf("%d", &arr[i]);
    }
}
