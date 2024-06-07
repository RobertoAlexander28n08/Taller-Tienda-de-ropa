#include <stdio.h>
#include "funciones.h"

// Arreglos para productos, colores, tallas y precios
const char *productos[] = {"Camisetas", "Chompas", "Pantalones", "Zapatos", "Gorras"};
const char *colores[] = {"Blanco", "Negro", "Azul", "Rojo", "Verde", "Rosa"};
const char *tallas[] = {"Small", "Medium", "Large"};
const float precios[5][6] = {
    {19.99, 14.99, 24.99, 29.99, 0.0, 0.0},  // Camisetas
    {39.99, 44.99, 59.99, 29.99, 0.0, 0.0},  // Chompas
    {29.99, 35.99, 49.99, 59.99, 0.0, 0.0},  // Pantalones
    {35.99, 49.99, 59.99, 29.99, 0.0, 0.0},  // Zapatos
    {20.00, 15.00, 0.0, 0.0, 0.0, 0.0}       // Gorras
};

void mostrarProducto() {
    printf("\nSeleccione el producto:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, productos[i]);
    }
}

void mostrarColores() {
    printf("\nSeleccione el color:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d. %s\n", i + 1, colores[i]);
    }
}

void mostrarTallas() {
    printf("\nSeleccione la talla:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, tallas[i]);
    }
}

void mostrarDisponibilidad(int producto, int color, int talla) {
    int disponibilidad = 100;  
    float precio = precios[producto - 1][color - 1];
    float iva = 0.15;  // 15% de IVA

    if (precio > 0.0) {
        float precioConIVA = precio * (1 + iva);
        printf("\nDisponibilidad: %d unidades\n", disponibilidad);
        printf("Precio sin IVA: $%.2f\n", precio);
        printf("Precio con IVA (15%%): $%.2f\n", precioConIVA);
    } else {
        printf("\nProducto no disponible en ese color.\n");
    }
}
