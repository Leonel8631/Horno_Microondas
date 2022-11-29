#include <stdio.h>
#include <stdlib.h>
#include "mylib_tiempo.h"
#include "mylib_display.h"
#include "mylib_estados.h"
#include "mylib_boton.h"
#include "arranque.h"

arranque_t config;

estados_t func_detenido(arranque_t config, boton_t tecla){
estados_t estado;
funcionamiento_t p;
arranque_t fun;
int tiempo;

display(tiempo);

                    if( det_x_puerta_off == config && tecla.comienzo_detener == "COMIENZO/DETENER" && tiempo){

                        calentar_on= config;

                        return(estado=detenido);

                    }
                    if( p.det_x_puerta_on == config && func.puerta== CERRADO){
                        det_x_puerta_off=config;
                        calentar_on=config;
                        return(estado=calentado);
                    }
                    if( p.det_x_puerta_off== config && tecla.borrardo == "BORRAR"){
                        tiempo=0;
                        return(estado=detenido);

                    }

}
