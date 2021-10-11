#include <stdio.h>

#define n 5

void leeArreglo(int arr[n]);
void insercion(int arr[n]);

int main()
{
    int arreglo[n];

    leeArreglo(arreglo);
    insercion(arreglo);

    return 0;
}

void leeArreglo(int arr[n])
{
    int i;

    for(i=0; i<n; i++)
    {
        printf("Arreglo[&d]: ",i);
        scanf("%d", &arr[i]);
    }
}

void insercion(int arr[n])
{
    int actual, mover, aux;

    for(actual=1; actual<n; actual++)
    {
        for(mover=actual; mover>0 && arr[mover]<arr[mover-1]; mover = mover-1)
        {
            aux = arr[mover];
            arr[mover] = arr[mover-1];
            arr[mover-1] = aux;
        }
    }
}
