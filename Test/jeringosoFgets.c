#include <stdio.h>

int main() {
    char cadena[101];
    int i;

    printf("Ingresa una cadena (max 100 caracteres): ");
    fgets(cadena, 101, stdin);

    for (i = 0; cadena[i] != '\0' && cadena[i] != '\n'; i++) {
        char c = cadena[i];
        switch (c) {
            case 'b': case 'B':
            case 'c': case 'C':
            case 'd': case 'D':
            case 'f': case 'F':
            case 'g': case 'G':
                putchar('#');
                break;
            case 'h': case 'H':
            case 'j': case 'J':
            case 'k': case 'K':
            case 'l': case 'L':
            case 'm': case 'M':
            case 'n': case 'N':
                putchar('%');
                break;
            case 'p': case 'P':
            case 'q': case 'Q':
            case 'r': case 'R':
            case 's': case 'S':
            case 't': case 'T':
                putchar('&');
                break;
            case 'v': case 'V':
            case 'w': case 'W':
            case 'x': case 'X':
            case 'y': case 'Y':
            case 'z': case 'Z':
                putchar('$');
                break;
            default:
                putchar(c);
        }
    }
    putchar('\n');
    return 0;
}
