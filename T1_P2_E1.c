//
// Created by carca on 13/03/2022.
//
#include <stdio.h>
#include <string.h>
#define MAX 100

int ChecarPalindromo(char cadena[MAX], int Inicio, int extension);
int main()
{
    char cadena[MAX];
    int extension;
    int Recursivo;

    extension = strlen(cadena);
    printf("Escribe una cadena\n");
    scanf("%[^\n]", cadena);

    Recursivo = ChecarPalindromo(cadena, 0, extension - 1);
    if (Recursivo){
        printf("1\n");
    } else{
        printf("0\n");
    }
}

int ChecarPalindromo(char cadena[MAX], int Inicio, int extension){

    if (Inicio >= extension)
        return 1;

    if (cadena[Inicio] == cadena[extension]){
        return ChecarPalindromo(cadena, Inicio + 1, extension - 1);

    } else{
        return 0;
    }
}