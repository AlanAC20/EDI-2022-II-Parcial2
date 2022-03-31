//
// Created by carca on 30/03/2022.
//
#include <stdio.h>
#include <string.h>

#define MAX 100

void checarPalindroma(int *extension, char cadena[MAX]);
int main(){

    char cadena[MAX];
    int extension;

    printf("Dame la cadena de caracteres a investigar\n");
    scanf("%[^\n]", cadena);

    printf("La cadena es: %s\n", cadena);

    extension = strlen(cadena);

    printf("El largo de la cadena es %d\n", extension);

    checarPalindroma(&extension, cadena);
}

void checarPalindroma(int *extension, char cadena[MAX]){

    int m = *extension - 1;
    int ext = *extension/2;
    int band = 0;

    for (int i = 0; i < ext && band == 0; i++, m--){

        if(cadena[i] == ' ')
            i++;
        if(cadena[m] == ' ')
            m--;

        printf("comparando: [%c] con [%c]\n", cadena[i], cadena[m]);

        if(cadena[i] != cadena[m])
            band=1;
    }
    if(band==1)
        printf("0");
    else
        printf("1");
}