//
// Created by carca on 15/03/2022.
//

#include <stdio.h>
int fibonacci(int numero);
int main(){

    int numero;
    int resultado;

    printf("Ingresa el numero a experimentar");
    scanf("%d", &numero);
    resultado = fibonacci(numero);
    printf("Resultado es: %d", resultado);
}

int fibonacci(int numero){

    if(numero == 0)
        return 0;
    else
        if(numero == 1)
        return 1;
        else
            return fibonacci(numero - 1) + fibonacci(numero - 2);
}










