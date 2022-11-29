#include <stdio.h>
#include <stdlib.h>
#include "mylib_tiempo.h"
#include "mylib_display.h"
#include "mylib_estados.h"
#include "mylib_boton.h"

arranque_t config;

estados_t func_detenido(arranque_t config, boton_t tecla){
estados_t estado;
int tiempo;

display(tiempo);

                    if( det_x_puerta_off == config && tecla== "COMIENZO/DETENER" && tiempo){

                        calentar_on= config;

                        return(estado=detenido);

                    }
                    if( det_x_puerta_on == config && puerta== CERRADO){
                        det_x_puerta_off=config;
                        calentar_on=config;
                        return(estado=calentado);
                    }
                    if( det_x_puerta_off== config && tecla == "BORRAR"){
                        tiempo=0;
                        return(estado=detenido);

                    }

}
