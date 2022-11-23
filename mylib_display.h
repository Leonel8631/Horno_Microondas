#ifndef MYLIB_DISPLAY_H_INCLUDED
#define MYLIB_DISPLAY_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "mylib_tiempo.h"

void Display(int tiempo_t){


  if{tiempo_t == "0"){

     printf("\n DISPLAY  %d : %d",horas,minutos);
  }else{

         ingreso_tiempo(tiempo_t);
          printf("\n DISPLAY  %d : %d",horas,minutos);

         }

return 0;

}

#endif // MYLIB_DISPLAY_H_INCLUDED
