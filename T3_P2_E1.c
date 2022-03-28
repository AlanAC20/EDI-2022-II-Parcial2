//
// Created by carca on 23/03/2022.
//
#include <stdio.h>
#define MAX 5


void calculaRep(int arreglo[MAX]);
int main() {

    int arreglo[MAX];

    for (int i = 0; i < MAX; ++i) {
        printf("Dame el numero %i de %d:", i + 1, MAX);
        scanf("%d", &arreglo[i]);
    }

    calculaRep(arreglo);

}

void calculaRep(int arreglo[MAX]){
    int cont;
    int aux;
    int brand=0;


    for(int i = 0; i < MAX && brand == 0; i++){
        cont=0;
        aux=arreglo[i];

        for(int j = 0; j < MAX; j++){
            if( aux == arreglo[j]){
                cont++;
            }
        }

        if( cont >= 2)
           brand = 1;
        }

    if(brand == 1)
        printf("\n1");
    else
        printf("\n0");
}
