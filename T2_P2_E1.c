//
// Created by carca on 19/03/2022.
//

#include <stdio.h>
#define MAX 5


void pedirNombres(char nombres[MAX]);
void buscarNombre(char nombreABuscar, char nombres[MAX]);

int main()
{

  char nombres[MAX];
  char nombreABuscar;

    pedirNombres(nombres);
    buscarNombre(nombreABuscar, nombres);

}
void pedirNombres(char nombres[MAX]){

    for (int i = 0; i < MAX; i++) {
        printf("Dame el nombre %d de %d\n", i, MAX-1 );
        scanf("%s", &nombres[i]);

    }
}



void buscarNombre(char nombreABuscar, char nombres[MAX]){

    printf("Que nombre quieres buscar dentro de la lista\n");
    scanf("%s",&nombreABuscar);


    int resultado = -1;
    for (int i = 0; i < MAX && resultado == -1; ++i) {


        if(nombres[i] == nombreABuscar)
            resultado = i;
    }

    printf("LA POSICION ES: %d", resultado);
}

