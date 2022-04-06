//
// Created by carca on 03/04/2022.
//

#include<stdio.h>
#include<math.h>
typedef struct
{
    float x;
    float y;
}PUNTO;

void pidePunto(PUNTO *punto);
float calculaDist(PUNTO punto1, PUNTO punto2);
void muestraDist(PUNTO punto1, PUNTO punto2, float dist);

int main(){
    PUNTO punto1, punto2;
    float distancia;
    pidePunto(&punto1);
    pidePunto(&punto2);
    distancia=calculaDist(punto1, punto2);
    muestraDist(punto1, punto2, distancia);
}

void pidePunto(PUNTO *punto){
    printf("Coordenada X: ");
    scanf("%f",&punto->x);
    printf("Coordenada Y: ");
    scanf("%f",&punto->y);
}

float calculaDist(PUNTO punto1, PUNTO punto2){
    float dist;
    dist=sqrt(pow(punto2.x-punto1.x,2)+pow(punto2.y-punto1.y,2));
    return(dist);
}

void muestraDist(PUNTO punto1, PUNTO punto2, float dist){
    printf("\nLa distancia de los puntos (%.2f, %.2f) (%.2f, %.2f) es %.2f \n", punto1.x, punto1.y, punto2.x, punto2.y, dist);
}

