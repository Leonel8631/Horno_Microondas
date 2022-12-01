#include <stdio.h>
#include <stdlib.h>
#include "mylib_tiempo.h"
#include "mylib_display.h"
#include "mylib_estados.h"
#include "mylib_boton.h"
#include "arranque.h"


int main() {

    int tiempo;

    arranque_t config;

    estados_t estado = reposo; // primer estado

    boton_t tecla;

    estados_t (*paffunc[])(arranque_t,tiempo,boton_t) = {func_reposo, func_cargando_tiempo,func_calentado,func_detenido};

    config = inicio();

    while(1) estado = (*pafunc[estado])(config,tiempo,tecla);

  return 0;
}
