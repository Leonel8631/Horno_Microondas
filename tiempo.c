#include <stdio.h>
#include <stdlib.h>

#include "mylib_tiempo.h"

void ingreso_tiempo(int tiempo){

int horas,minutos;

printf("\n 1)Ingrese el Tiempo \n");

printf("Ingresar la Hora; ");
scanf("%d",&horas);
printf("Ingresar los minutos: ");
scanf("%d",&minutos);


printf("\n DISPLAY  %d : %d",horas,minutos);

return 0;

}
