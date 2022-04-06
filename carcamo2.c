//odio las estructuras
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wctype.h>
typedef struct{
int dia;
int annio;
char mes[15];

}Tfecha;
void fechaNueva(Tfecha *nueva);
void imprimir(Tfecha nueva);

int main(){
Tfecha new_fecha;
fechaNueva(&new_fecha);
imprimir(new_fecha);
}
void fechaNueva(Tfecha *nueva){
printf("Ingrese el dia: ");
scanf("%d",&nueva->dia);
printf("Ingrese el mes: ");
fflush(stdin);
gets(&nueva->mes);
printf("Ingrese el annio: ");
scanf("%d",&nueva->annio);
for(int i=0;i<strlen(nueva->mes);i++){
        if(i==0){
            nueva->mes[i]=towupper(nueva->mes[i]);
        }
}
}

void imprimir(Tfecha nueva){
if(nueva.dia>0 && nueva.dia<10){
    printf("0%d/%s/%d.",nueva.dia,nueva.mes,nueva.annio);
}else{
 printf("%d/%s/%d.",nueva.dia,nueva.mes,nueva.annio);
}
}
