#include <stdio.h>
#include <stdlib.h>
#include "mylib_tiempo.h"
#include "mylib_display.h"
#include "mylib_estados.h"
#include "mylib_boton.h"
#include "arranque.h"


estados_t func_calentado( arranque_t config, boton_t tecla){

estado_t estado;
arranque_t func;

      display(tiempo);
                         if(tecla.comienzo_detener == "COMIENZO/DETENER"){
                            calentar_on=config;

                            return(estado=detenido);
                         }else{
                                if( func.puerta == ABIERTA ){

                                    calentar_off= config;
                                    det_x_puerta=0;

                                    return(estado=detenido);
                                }else{

                                        if(!tiempo){

                                            calentar_off= config;
                                            return(estado=reposo);

                                        }else{
                                                tiempo=tiempo-seg,
                                                seg=0;
                                              }
                                     }

                              }

}
