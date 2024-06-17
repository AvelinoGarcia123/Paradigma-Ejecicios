#include <stdio.h>
#include <math.h>

void polaresacartesianas(double radio, double angulo, double *x, double *y) {
    *x = radio * cos(angulo);
    *y = radio * sin(angulo);
}

int main() {
    double radio = 5.0;
    double angulo = M_PI / 4.0;
    double x, y;

    polaresacartesianas(radio, angulo, &x, &y);

    printf("Coordenadas polares (r=%.2f, ?=%.2f rad) convertidas a cartesianas: x=%.2f, y=%.2f\n", radio, angulo, x, y);

    return 0;
}
