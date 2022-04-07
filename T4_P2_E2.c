//
// Created by carca on 03/04/2022.
//

#include <stdio.h>
#include <string.h>
typedef struct{
    int dia;
    int annio;
    char mes[12];

}est_fecha;

void capturaFecha(est_fecha *fecha);
void imprimeFecha(est_fecha fecha);

int main(){
    est_fecha fecha;
    capturaFecha(&fecha);
    imprimeFecha(fecha);
}
void capturaFecha(est_fecha *fecha){
    printf("Ingrese el dia: ");
    scanf("%d",&fecha->dia);

    printf("Ingrese el mes: ");
    fflush(stdin);
    gets(&fecha->mes);

    printf("Ingrese el annio: ");
    scanf("%d",&fecha->annio);

    for(int i = 0; i<strlen(fecha->mes); i++){
        if(i == 0){
            fecha->mes[i] = toupper(fecha->mes[i]);
        }
    }
}

void imprimeFecha(est_fecha fecha){
    if(fecha.dia>0 && fecha.dia<10){
        printf("0%d/%s/%d.",fecha.dia,fecha.mes,fecha.annio);
    }else{
        printf("%d/%s/%d.",fecha.dia,fecha.mes,fecha.annio);
    }
}