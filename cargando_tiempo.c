#include <stdio.h>
#include <stdlib.h>
#include "mylib_tiempo.h"
#include "mylib_display.h"
#include "mylib_estados.h"
#include "mylib_boton.h"


estados_t func_cargando_tiempo( arranque_t config, boton_t tecla){

arranque_t digitos_cargados = 0;

estados_t estado;

if( tecla == "BORRAR"){
                        tiempo=0;
                        digitos_cargados=0;
                        ingreso_tiempo(tiempo);//Ingreso tiempo cero para borrar lo que tenia.
                        display(tiempo); // Muestra en pantalla el tiempo en cero.

                      return(estado=reposo);
                     } else {
                             if( tecla == "COMIENZO/DETENER" && tiempo){
                                digitos_cargados = 0;
                                     calentar_on= config;

                                     return(estado=calentado);
                                }else{
                                       if( tecla!=NO_KEY && digitos_cargados < 4 ){

                                            tiempo=tiempo*10 + tecla;
                                            digitos_cargados++;
                                       }
                                     }
                            }

}
