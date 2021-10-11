#include <stdio.h>

#define n 5

void leeArreglo(int arr[n]);
void seleccionEst(int arr[n]);

int main()
{
    int arreglo[n];

    leeArreglo(arreglo);
    seleccionEst(arreglo);

    return 0;
}

void seleccionEst(int arr[n])
{
    int piv, barrido, menor, aux;

    for(piv=0; piv<n-1; piv++)
    {
        menor = piv;
        for(barrido=piv+1; barrido<n; barrido++)
            if(arr[barrido]<arr[menor])
            {
                menor = barrido;
                aux =arr[piv];
                arr[piv]=arr[menor];
                arr[menor]= aux;
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

