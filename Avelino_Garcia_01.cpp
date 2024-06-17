#include <stdio.h>

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10;
    int b = 25;

    printf("valores originales de cada variable: a = %d, b = %d\n", a, b);
    intercambiar(&a, &b);
    printf("intercambio: a = %d, b = %d\n", a, b);

    return 0;
}
