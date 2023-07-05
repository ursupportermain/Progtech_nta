#include <stdio.h>
#include <math.h>

void kugel(double radius) {
    double oberflaeche = 4 * M_PI * pow(radius, 2);
    double volumen = (4.0/3.0) * M_PI * pow(radius, 3);
    printf("Oberfläche: %f\n", oberflaeche);
    printf("Volumen: %f\n", volumen);
}

int main(int argc, char const *argv[]) {
    double radius = 5;
    kugel(radius);
    return 0;
}
