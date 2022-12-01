#ifndef MYLIB_ESTADOS_H_INCLUDED
#define MYLIB_ESTADOS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "mylib_boton.h"

typedef enum {

  reposo = 0;
  cargando_tiempo = 1;
  calentado = 2;
  detenido = 3;

}estados_t;

typedef struct funcionamiento{

   char calentar_on;
   char calentar_off;
   char det_x_puerta_off;
   char det_x_puerta_on;

}funcionamiento_t;

estados_t func_reposo(arranque_t , int );
estados_t func_cargando_tiempo(arranque_t , boton_t );
estados_t func_calentado(arranque_t , boton_t );
estados_t func_detenido(arranque_t , boton_t );


#endif // MYLIB_ESTADOS_H_INCLUDED
