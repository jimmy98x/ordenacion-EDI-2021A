#include <stdio.h>

#define n 5

void leeArreglo(int arr[n]);
void seleccion(int arr[n]);

int main()
{
    int arreglo[n];

    leeArreglo(arreglo);
    seleccion(arreglo);

    return 0;
}

void seleccion(int arr[n])
{
    int actual, pos, aux;

    for(actual=0; actual<n-1; actual++)
    {
        for(pos=actual+1; pos<n; pos++)
        {
            if(arr[pos]<arr[actual])
            {
                aux = arr[pos];
                arr[pos] = arr[actual];
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
        printf("Arreglo[&d]: ",i);
        scanf("%d", &arr[i]);
    }
}
