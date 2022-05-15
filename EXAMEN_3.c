//
// Created by carca on 21/04/2022.
//

#include <stdio.h>
#include<string.h>
#define MAX 30

typedef struct prom_alumnos
{
    float promedio;
    char nombres[30];
}ALUMNOS;

void captura_tam(int *num_al);
void llenar_arreglo(ALUMNOS ArrAl[MAX], int num_al);
void acomodar_arreglo(ALUMNOS ArrAl[MAX], int num_al);
void mostrar_arreglo(ALUMNOS ArrAl[MAX], int num_al);

int main()
{
    ALUMNOS alumnos[MAX];
    int numero_alumnos;

    captura_tam(&numero_alumnos);
    llenar_arreglo(alumnos,numero_alumnos);
    acomodar_arreglo(alumnos,numero_alumnos);
    mostrar_arreglo(alumnos,numero_alumnos);
}


void captura_tam(int *num_al)
{

    printf("Numero de alumnos:");
    scanf("%d", num_al);
}


void llenar_arreglo(ALUMNOS nombres[MAX], int num_al)
{
    for(int i = 0; i < num_al; i++){

        printf("Alumno %d de %d:\n ", i+1, num_al);
        scanf("%[^\n]", nombres[i].nombres);
        fflush(stdin);
        gets(nombres[i].nombres);

        printf("Promedio del alumno %d de %d: ", i+1, num_al);
        scanf("%f",&nombres[i].promedio);
    }
}


void acomodar_arreglo(ALUMNOS nombres[MAX], int num_al)
{
    float aux=0;
    char auxnom[30];

    for(int i = 0; i < num_al; i++){

        for(int j = 0; j < num_al; j++){

            if(nombres[i].promedio>nombres[j].promedio){

                aux = nombres[i].promedio;
                strcpy(auxnom,nombres[i].nombres);
                nombres[i].promedio = nombres[j].promedio;
                strcpy(nombres[i].nombres, nombres[j].nombres);
                nombres[j].promedio=aux;
                strcpy(nombres[j].nombres,auxnom);
            }
        }
    }
}


void mostrar_arreglo(ALUMNOS nombres[MAX], int NA)
{
    for(int i=0; i<NA; i++)
    {
        printf("%s %.1f", nombres[i].nombres, nombres[i].promedio);
        printf("\n");
    }
}