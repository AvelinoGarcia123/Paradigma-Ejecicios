#include <stdio.h>

int valorabsoluto(int num) {
    if (num < 0) {
        return -num;
    } else {
        return num;
    }
}

int main() {
    int numero = -10;
    printf("El valor absoluto de %d es: %d\n", numero, valorabsoluto(numero));

    return 0;
}
