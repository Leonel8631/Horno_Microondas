#ifndef MYLIB_TIEMPO_H_INCLUDED
#define MYLIB_TIEMPO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

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

#endif // MYLIB_TIEMPO_H_INCLUDED
