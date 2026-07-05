#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

int main() {

    int numero_secreto;
    int numero_max=20;
    int numero_min=1;
    int intento;
    int numero_usuario;

    srand(time(NULL)); // Inicializar generador de números aleatorios

    numero_secreto = (rand() % (numero_max - numero_min + 1)) + 1; // Obtengo un numero aleatorio entre 1 y 50, TODO: cambiar el ultimo +1 por numero_min

    printf("Tenes 5 intentos para adivinar un multiplo del numero secreto (entre %d y %d).\n", numero_min, numero_max);
    
    for (intento = 1; intento <= 5; intento++) {
        printf("Intento %d de %d. Ingresa un numero: ", intento, 5);
        scanf("%d", &numero_usuario);

        if (numero_secreto % numero_usuario == 0) {
            printf("%d es multiplo de %d. Felicitaciones!\n", numero_usuario, numero_secreto);
            return 0;
        } else {
            printf("%d no es multiplo del numero secreto.\n\n", numero_usuario, numero_secreto);
        }
    }

    // Si se acaban los intentos
    printf("Te quedaste sin intentos. El numero era %d\n", numero_secreto);
    return 0;
}