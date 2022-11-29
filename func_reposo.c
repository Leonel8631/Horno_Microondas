#include <stdio.h>
#include <stdlib.h>
#include "mylib_tiempo.h"
#include "mylib_display.h"
#include "mylib_estados.h"
#include "mylib_boton.h"

arranque_t config;

estado_t func_reposo(arranque_t config, int tiempo){

estado_t estado;
 puerta=cerrada;
                    if( tecla != "COMIENZO/DETENER" && tecla != "BORRAR"){

                         ingreso_tiempo(tiempo);
                         display(tiempo);

                         return (estado=cargando_tiempo);
                    }

}
