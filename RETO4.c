//
// Created by carca on 23/03/2022.
//

#include <stdio.h>
#define MAX 30


void juntarArr(int nums1[MAX], int nums2[MAX], int nums3[MAX], int tam1, int tam2);
void insertionSort(int nums3[MAX], int tam1, int tam2);
void imprimeArreglo(int nums3[MAX], int tam1, int tam2);

int main(){

    int nums1[MAX];
    int nums2[MAX];
    int nums3[MAX];
    int tam1,tam2;


    printf("Dame el largo del arreglo 1:");
    scanf("%d", &tam1);

    for (int i = 0; i < tam1; ++i) {
        printf("Introduce el valor %i de %d del arreglo 1:", i+1, tam1);
        scanf("%d", &nums1[i]);
    }

    printf("Dame el largo del arreglo 2:");
    scanf("%d", &tam2);

    for (int i = 0; i < tam2; ++i) {
        printf("Introduce el valor %i de %d del arreglo 2:", i+1, tam2);
        scanf("%d", &nums2[i]);
    }


    juntarArr(nums1, nums2, nums3, tam1, tam2);
     insertionSort(nums3, tam1, tam2);
    printf("\n\n");
     imprimeArreglo(nums3,tam1, tam2);

    }


void juntarArr(int nums1[MAX], int nums2[MAX], int nums3[MAX], int tam1, int tam2)
{

    int tam3 = tam1 + tam2;

    for(int i = 0; i < tam1; i++)
        nums3[i] = nums1[i];


    for(int i = tam1; i < tam3; i++)
        nums3[i] = nums2[i-tam1];
}




void insertionSort(int nums3[MAX], int tam1, int tam2){

    int aux;
    int tam3 = tam1 + tam2;

    for (int pos = 0; pos < tam3; ++pos) {

        for (int actual = pos; actual > 0 ; --actual) {

            if(nums3[actual]< nums3[actual-1]){
                aux = nums3[actual];
                nums3[actual] = nums3[actual-1];
                nums3[actual-1] = aux;
            }
        }
        imprimeArreglo(nums3, tam1, tam2);
    }
}


void imprimeArreglo(int nums3[MAX], int tam1, int tam2){

    int tam3 = tam1 + tam2;

    printf("\n[ ");
    for (int i = 0; i < tam3; ++i) {
        printf(" %d ", nums3[i]);
    }
    printf(" ]");
}