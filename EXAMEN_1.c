//
// Created by carca on 21/04/2022.
//


#include <stdio.h>
#define MAX 4



int BuscaBinarioRecursivo(int arreglo[MAX], int numABuscar, int inicio, int fin);
int main()
{
    int arreglo[MAX];
    int numABuscar;

    for(int i = 0; i < MAX; i++){

        printf("Dame el valor ORDENADO %d", i);
        scanf("%d", &arreglo[i]);
    }

    printf("Cual es el numero que quieres buscar?");
    scanf("%d", &numABuscar);

    printf("\n");

    BuscaBinarioRecursivo(arreglo, numABuscar, 0, MAX-1);

}


int BuscaBinarioRecursivo(int arreglo[MAX], int numABuscar, int inicio, int fin){

    int mitad = inicio + (fin - inicio) / 2;

    if(numABuscar > arreglo[fin]) {
        printf("El valor podria estar en la posicion: %d\n", fin + 1);
        return 0;
    }

    if(numABuscar < arreglo[inicio]) {
        printf("El valor podra estar en la posicion: %d\n", inicio - 1);
        return 0;
    }

    if( arreglo[mitad] == numABuscar){
        printf("El valor esta en la posicion: %d", mitad);
        return 0;
    }

    if( arreglo[inicio] == numABuscar){
        printf("El valor esta en la posicion: %d", inicio);
        return 0;
    }

    if( arreglo[fin] == numABuscar){
        printf("El valor esta en la posicion: %d", fin);
        return 0;
    }


    // Caso Recursivo
    if( numABuscar < arreglo[mitad])
        BuscaBinarioRecursivo(arreglo, numABuscar, inicio, mitad-1);
    else
        BuscaBinarioRecursivo(arreglo, numABuscar, mitad+1 , fin);

}
