#include <stdio.h>
#include <stdlib.h>
#include "mylib_tiempo.h"
#include "mylib_display.h"
#include "mylib_estados.h"


int main()
{
    int tiempo;
    arranque_t config;
    estados_t estado = repaso; // primer estado
    config = inicio();

    while(1){

      switch (estado) {

        case reposo:

                      estado= func_reposo(config, tiempo);

                     break;
        case cargando_tiempo:

                     estado= func_cargando_tiempo(config,tecla);

                       break;
        case calentado:

                        estado_ func_calentado( config,tecla);

                              break;
        case detenido:

                       estado= func_detenido ( config, tecla);


                    }
                    break;
      } //fin del switch

    }// fin del while

    return 0;
}

