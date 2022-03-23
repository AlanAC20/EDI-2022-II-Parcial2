//
// Created by carca on 19/03/2022.
//

#include <stdio.h>
#define MAX 5


void recursivoPalindroma(char cadena[MAX]);

int main()
{
    char cadena[MAX];

    for(int i = 0; i < MAX; i++){
        printf("Dame la cadena");
        scanf("%[^\n]", cadena);
    }

    recursivoPalindroma(cadena);




}

void recursivoPalindroma(char cadena[MAX]){

    if(cadena[MAX] < MAX)
        recursivoPalindroma(cadena[MAX])
        printf("Esta es una prueba");

}