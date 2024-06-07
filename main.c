#include <stdio.h>
#include "funciones.h"

int main() {
    int genero, producto, color, talla;

    printf("\n---------Bienvenido a nuestra tienda online de ropa--------\n");
    genero = leerEntero("Seleccione el género (1: Hombre, 2: Mujer): ");

    do {
        mostrarProducto();
        producto = leerEntero("Seleccione el producto (0 para salir): ");
        if (producto == 0) break;

        mostrarColores();
        color = leerEntero("Seleccione el color (1: Blanco, 2: Negro, 3: Azul, 4: Rojo, 5: Verde, 6: Rosa): ");

        mostrarTallas();
        talla = leerEntero("Seleccione la talla (1: Small, 2: Medium, 3: Large): ");

        mostrarDisponibilidad(producto, color, talla);
    } while (producto != 0);

    printf("\nGracias por visitar nuestra tienda online.\n");

    return 0;
}
