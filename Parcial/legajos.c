#include <stdio.h>

int main() {
    int entrenamientos[4] = {0};
    int miembros[4] = {0};
    char legajo[20];
    int entero;

    for (int i = 0; i < 4; i++) {
        printf("\nCategoria %d (Sub15=1, Sub18=2, Libres=3, Senior=4)\n", i+1);
        printf("Ingrese legajo (X para terminar): ");
        while (scanf("%19s", legajo) == 1 && legajo[0] != 'X' && legajo[0] != 'x') {
            printf("Entrenamientos realizados esta semana: ");
            scanf("%d", &entero);
            entrenamientos[i] += entero;
            miembros[i]++;
            printf("Ingrese legajo (X para terminar): ");
        }
    }

    // Totales y promedios
    int maxIndice = 0, minIndice = 0;
    float minProm = 1e9;
    for (int i = 0; i < 4; i++) {
        float prom = (miembros[i] > 0) ? (float)entrenamientos[i] / miembros[i] : 0;
        printf("Categoría %d: Total = %d, Promedio = %.2f\n", i+1, entrenamientos[i], prom);
        if (entrenamientos[i] > entrenamientos[maxIndice]) maxIndice = i;
        if (prom < minProm) { minProm = prom; minIndice = i; }
    }

    // Resultados
    printf("\nMayor total de entrenamientos: Categoría %d (Total = %d)\n", maxIndice+1, entrenamientos[maxIndice]);
    printf("Menor promedio por miembro: Categoría %d (Promedio = %.2f)\n", minIndice+1, minProm);

    return 0;
}