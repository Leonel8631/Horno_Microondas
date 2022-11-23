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
    arranque_testados_t digitos_cargados = 0;
    boton_t tecla;
    config = inicio();
    while(1){

      switch (estado) {
        case reposo:

                    puerta=cerrada;
                    if( tecla != "COMIENZO/DETENER" && tecla != "BORRAR"){

                         ingreso_tiempo(tiempo);
                         display(tiempo);
                    }
                     break;
        case cargando_tiempo:

                     if( tecla == "BORRAR"){
                        tiempo=0;
                        digitos_cargados=0;
                        ingreso_tiempo(tiempo);//Ingreso tiempo cero para borrar lo que tenia.
                        display(tiempo); // Muestra en pantalla el tiempo en cero.
                     } else {
                             if( tecla == "COMIENZO/DETENER" && tiempo){
                                digitos_cargados = 0;
                                     calentar_on= config;
                                }else{
                                       if( tecla!=NO_KEY && digitos_cargados < 4 ){

                                            tiempo=tiempo*10 + tecla;
                                            digitos_cargados++;
                                       }
                                     }
                            }

                       break;
        case calentado:

                         display(tiempo);
                         if(tecla == "COMIENZO/DETENER"){
                            calentar_on=config;
                         }else{
                                if( puerta == ABIERTA ){

                                    calentar_off= config;
                                    det_x_puerta=0;
                                }else{

                                        if(!tiempo){

                                            calentar_off= config;

                                        }else{
                                                tiempo=tiempo-seg,
                                                seg=0;
                                              }
                                     }

                              }
                              break;
        case detenido:

                        display(tiempo);

                    if( det_x_puerta_off == config && tecla== "COMIENZO/DETENER" && tiempo){

                        calentar_on= config;

                    }
                    if( det_x_puerta_on == config && puerta== CERRADO){
                        det_x_puerta_off=config;
                        calentar_on=config;
                    }
                    if( det_x_puerta_off== config && tecla == "BORRAR"){
                        tiempo=0;

                    }
                    break;
      } //fin del switch

    }// fin del while

    return 0;
}

