//
// Created by carca on 23/03/2022.
//

#include <stdio.h>
#define MAX 10

void calculaRep(int arreglo[MAX]);
void imprimeArreglo(int arreglo[MAX]);
void insertionSort(int arreglo[MAX]);
int main() {

    int arreglo[MAX];

    for (int i = 0; i < MAX; ++i) {
        printf("Dame el numero %i de %d:", i + 1, MAX);
        scanf("%d", &arreglo[i]);
    }

    imprimeArreglo(arreglo);
    insertionSort(arreglo);
    calculaRep(arreglo);

}
void insertionSort(int arreglo[MAX]){

    int aux;

    for (int pos = 0; pos < MAX; ++pos) {

        for (int actual = pos; actual > 0 ; --actual) {

            if(arreglo[actual]< arreglo[actual-1]){
                aux = arreglo[actual];
                arreglo[actual] = arreglo[actual-1];
                arreglo[actual-1] = aux;
            }
        }


        imprimeArreglo(arreglo);
    }
}

void imprimeArreglo(int arreglo[MAX]){
    printf("\n[ ");
    for (int i = 0; i < MAX; ++i) {
        printf(" %d ", arreglo[i]);
    }
    printf(" ]");
}


void calculaRep(int arreglo[MAX]){
    int cont;
    int aux;
    int salida=0;

    for(int i=0; i < MAX && salida==0; i++){
        cont=0;
        aux = arreglo[i];

        for(int j = 0; j < MAX; j++){
            if(aux==arreglo[j]){
                cont++;
            }
        }

        if(cont > MAX/2)
            salida=1;
        else
        if(cont == MAX/2)
            salida=1;
        else
        if(cont < MAX/2)
            salida=1;
    }

    if(salida == 1)
        printf("\n %d", aux);



}
