//
// Created by carca on 20/03/2022.
//


#include <stdio.h>
#define MAX 4


void arregloRespuesta(int nums[MAX], int arrRes[MAX]);
void imprimirDatos(int arrRes[MAX]);

int main(){

    int nums[MAX];
    int arrRes[MAX];



    for(int i = 0 ; i < MAX ; i++){
        do{
            printf("Dame un numero en un rango de -30 a 30:");
            scanf("%d", &nums[i]);
            if(nums[i] < -30 || nums[i] >= 30)
                printf("Intenta de nuevo:\n");
        }while(nums[i] <= -30 || nums[i] >= 30);
    }


    printf("Los numeros que ingresaste fueron:");
    for(int i = 0; i < MAX; i++)
        printf( "[%d]", nums[i]);

    printf("\n");

    arregloRespuesta(nums, arrRes);
    printf("El resultado es:");
    imprimirDatos(arrRes);

}


void arregloRespuesta(int nums[MAX], int arrRes[MAX]){


    for (int i = 0; i < MAX; ++i) {
            arrRes[i] = 1;

        for (int j = 0; j < MAX; ++j) {

            if(i != j)
            arrRes[i] = nums[j] * arrRes[i];
        }
    }
}


void imprimirDatos(int arrRes[MAX]){

    for (int i = 0; i < MAX; ++i) {

        printf("[%d]", arrRes[i]);

    }

}