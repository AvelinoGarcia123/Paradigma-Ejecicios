#include <stdio.h>

int limites(int limiteinferior, int limitesuperior) {
    int valor;
    do {
        printf("Introduce un valor entero entre %d y %d: ", limiteinferior, limitesuperior);
        scanf("%d", &valor);
    } while (valor < limiteinferior || valor > limitesuperior);

    return valor;
}

int main() {
    int valorleido = limites(1, 100);
    printf("El valor entero leido es: %d\n", valorleido);

    return 0;
}
