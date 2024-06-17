#include <stdio.h>

void division(int dividendo, int divisor, int *cociente, int *resto) {
    *cociente = 0;
    *resto = dividendo;

    while (*resto >= divisor) {
        *resto = *resto - divisor;
        (*cociente)++;
    }
}

int main() {
    int dividendo = 20;
    int divisor = 3;
    int cociente, resto;

    division(dividendo, divisor, &cociente, &resto);

    printf("Division entera de %d entre %d es: %d\n", dividendo, divisor, cociente);
    printf("Resto de la division de %d entre %d es: %d\n", dividendo, divisor, resto);

    return 0;
}
