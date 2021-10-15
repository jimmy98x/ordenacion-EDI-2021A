#include <stdio.h>
#define N 10


 void imprimeArreglo(int arreglo[N]);
 void quickSort(int arr[N], int izq, int der);

 int main()
 {
     int i, arreglo[N]={5,25,9,78,11,4,23,8,1,55};

    quickSort(arreglo, 0, N-1);

    imprimeArreglo(arreglo);

    return 0;
 }

 void quickSort(int arr[N], int izq, int der)
 {
     int pivote, aux;
     int inicio = izq;
     int fin = der;

     if(inicio <= fin)
     {
        while(der>izq)
        {
            while(der>pivote && arr[der]>=arr[pivote])
            {
                der--;
            }

            if(arr[der] < arr[pivote])
            {
                aux = arr[der];
                arr[der] = arr[pivote];
                arr[pivote] = aux;

                pivote = der;
            }

            while(izq < pivote && arr[izq] < arr[pivote])
            {
                izq++;
            }

            if(arr[izq] > arr[pivote])
            {
                aux = arr[izq];
                arr[izq] = arr[pivote];
                arr[pivote] = aux;

                pivote = izq;
            }
        }
        quickSort(arr, inicio, pivote-1);
        quickSort(arr, pivote+1, fin);
     }
 }

void imprimeArreglo(int arreglo[N])
{
    printf("[");
    for(int i=0; i<N; i++)
    {
        printf("%d", arreglo[i]);
    }
    printf("]\n");
}
