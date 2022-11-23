#ifndef MYLIB_BOTON_H_INCLUDED
#define MYLIB_BOTON_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

tydepef struct boton{

   char comienzo_detener[10];
   char borrado[10];

}boton_t;


boton_t boton (boton_t boton ){

     printf("Ingresar por teclado COMIENZO/DETENER: ")
     scanf("%s",&boton_t.comienzo_detener);
     printf("Ingrsar por teclado BORRADO: ");
     scanf("%s",&boton_t.borrado);

return boton_t,

}

#endif // MYLIB_BOTON_H_INCLUDED
