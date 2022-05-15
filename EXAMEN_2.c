//
// Created by carca on 21/04/2022.
//

#include <stdio.h>
#include <string.h>

#define MAX 10

void checarinversa(int *extension, char cadena[MAX]);
void checarInversaRecursiva(int *extension, char cadena[MAX]);

int main(){

    char cadena[MAX];
    int extension;

    printf("Dame la cadena de caracteres a investigar\n");
    scanf("%[^\n]", cadena);

    extension = strlen(cadena);
    //checarinversa(&extension, cadena);

    checarInversaRecursiva(&extension, cadena);
}

void checarinversa(int *extension, char cadena[MAX]){

    if(*extension < 0){
        return;
    }
    else{
        char aux = cadena[MAX];
        cadena[MAX] = cadena[MAX + *extension];
        cadena[MAX + *extension] = aux;
        checarinversa(cadena + 1, extension -2);
    }

}

void checarInversaRecursiva(int *extension, char cadena[MAX]){
    for(int i = 0; i < *extension; i++)
        printf("%c", cadena[*extension-1-i]);
}
