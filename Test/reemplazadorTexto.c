#include <stdio.h>

int main() {
    char cadena[101];
    char resultado[101];
    int i = 0, j = 0;

    /* Leer línea completa */
    printf("Ingresa una cadena (máximo 100 caracteres):\n");
    if (fgets(cadena, sizeof(cadena), stdin) == NULL) {
        return 1;
    }

    /* Recorrer y reemplazar consonantes */
    while (cadena[i] != '\0' && j < 100) {
        char c = cadena[i];
        char lower = c;
        
        /* Convertir mayúsculas a minúsculas para comparación */
        if (c >= 'A' && c <= 'Z') {
            lower = c + ('a' - 'A');
        }

        /* Mapear consonantes a símbolos */
        if (lower == 'b' || lower == 'c' || lower == 'd' || lower == 'f' || lower == 'g') {
            resultado[j++] = '#';
        } else if (lower == 'h' || lower == 'j' || lower == 'k' || lower == 'l' || lower == 'm' || lower == 'n') {
            resultado[j++] = '%';
        } else if (lower == 'p' || lower == 'q' || lower == 'r' || lower == 's' || lower == 't') {
            resultado[j++] = '&';
        } else if (lower == 'v' || lower == 'w' || lower == 'x' || lower == 'y' || lower == 'z') {
            resultado[j++] = '$';
        } else {
            /* Vocales, espacios, dígitos y otros sin cambios */
            resultado[j++] = c;
        }
        i++;
    }
    resultado[j] = '\0';

    /* Mostrar resultado */
    printf("Cadena original: %s", cadena);
    printf("Cadena resultante: %s", resultado);

    return 0;
}