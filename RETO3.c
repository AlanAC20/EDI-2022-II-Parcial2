//
// Created by carca on 28/03/2022.
//

#include <stdio.h>
#define MAX 3

void checarMayor(char arreglo[25], char objetivo, char arr[MAX]);

int main(){

    char arreglo[26];
    char arr[MAX];
    char objetivo;

    for (int i = 0; i < MAX; ++i) {
        printf("Ingresa el caracter ORDENADO %i de %d:", i + 1, MAX);
        scanf("%c", &arreglo[i]);
         fflush(stdin);
    }

    printf("Que letra quieres buscar?");
    scanf("%c", &objetivo);

    checarMayor(arreglo, objetivo, arr);

    arreglo[0]='a'; arreglo[1]='b'; arreglo[2]='c'; arreglo[3]='d';
    arreglo[4]='e'; arreglo[5]='f'; arreglo[6]='g'; arreglo[7]='h';
    arreglo[8]='i'; arreglo[9]='j'; arreglo[10]='k'; arreglo[11]='l';
    arreglo[12]='m'; arreglo[13]='n'; arreglo[14]='o'; arreglo[15]='p';
    arreglo[16]='q'; arreglo[17]='r'; arreglo[18]='s'; arreglo[19]='t';
    arreglo[20]='u'; arreglo[21]='v'; arreglo[22]='w'; arreglo[23]='x';
    arreglo[24]='y'; arreglo[25]='z';
}

void checarMayor(char arreglo[26], char objetivo, char arr[MAX]){


    int aux=0;
    int auxiliar;
    for (int i = 0; i < MAX && aux== 0; ++i) {

        if(objetivo < arreglo[i]){
            aux=1;
            auxiliar = arreglo[i];
        }

        if(objetivo > arreglo[i]){
            aux=1;
            auxiliar = arreglo[i];
        }
    }
    if(aux ==1)
        printf("El menor es %c", auxiliar);
    else
        printf("HOLIII");
}
