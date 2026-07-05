#include <stdio.h>

int main() {
    char c;
    int cuenta = 0;

    printf("Ingresa una cadena (maximo 100 caracteres)\n");
    while ((c = getchar()) != '\n' && cuenta < 100) {
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
        cuenta++;
    }
    return 0;
}