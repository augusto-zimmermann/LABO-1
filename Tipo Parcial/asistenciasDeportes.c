#include <stdio.h>
#include <string.h>

#define NUM_DEPORTES 6
#define MAX_NOMBRE_DEPORTE 20

int main() {
    char nombres_deportes[NUM_DEPORTES][MAX_NOMBRE_DEPORTE] = {"Fútbol", "Basquet", "Natación", "Tenis", "Atletismo", "Ping Pong"};
    float porcentajes_asistencia[NUM_DEPORTES];

    for (int i = 0; i < NUM_DEPORTES; i++) {
        int presentes = 0;
        int total_miembros = 0;
        int legajo;
        int asistencia;

        printf("\n--- Ingresando asistencia para %s ---\n", nombres_deportes[i]);

        while (1) {
            printf("Ingrese el número de legajo del miembro (0 para finalizar): ");
            if (scanf("%d", &legajo) != 1) {
                printf("Entrada inválida. Por favor, ingrese un número entero.\n");
                while (getchar() != '\n'); // Limpiar el buffer de entrada
                continue;
            }

            if (legajo == 0) {
                break;
            }

            if (legajo <= 0) {
                printf("El número de legajo debe ser mayor a 0.\n");
                continue;
            }

            printf("¿Estuvo presente el miembro con legajo %d? (1: Sí, 0: No): ", legajo);
            if (scanf("%d", &asistencia) != 1) {
                printf("Entrada inválida. Por favor, ingrese 1 o 0.\n");
                while (getchar() != '\n'); // Limpiar el buffer de entrada
                continue;
            }

            if (asistencia != 0 && asistencia != 1) {
                printf("Ingrese 1 para presente o 0 para ausente.\n");
                continue;
            }

            total_miembros++;
            if (asistencia == 1) {
                presentes++;
            }
        }

        if (total_miembros > 0) {
            porcentajes_asistencia[i] = (float)presentes / total_miembros * 100.0;
            printf("%s – porcentaje de asistencia: %.1f%%\n", nombres_deportes[i], porcentajes_asistencia[i]);
        } else {
            porcentajes_asistencia[i] = 0.0;
            printf("%s – No se ingresaron miembros.\n", nombres_deportes[i]);
        }
    }

    if (NUM_DEPORTES > 0) {
        int deporte_mayor_indice = 0;
        int deporte_menor_indice = 0;

        for (int i = 1; i < NUM_DEPORTES; i++) {
            if (porcentajes_asistencia[i] > porcentajes_asistencia[deporte_mayor_indice]) {
                deporte_mayor_indice = i;
            }
            if (porcentajes_asistencia[i] < porcentajes_asistencia[deporte_menor_indice]) {
                deporte_menor_indice = i;
            }
        }

        printf("\n--- Resumen de Asistencia ---\n");
        printf("Deporte con mayor asistencia: %s – %.1f%%\n", nombres_deportes[deporte_mayor_indice], porcentajes_asistencia[deporte_mayor_indice]);
        printf("Deporte con menor asistencia: %s – %.1f%%\n", nombres_deportes[deporte_menor_indice], porcentajes_asistencia[deporte_menor_indice]);
    } else {
        printf("\nNo se ingresó información de asistencia para ningún deporte.\n");
    }

    return 0;
}