#include <stdio.h>
#include <stdlib.h>

int main() {
    double *array = malloc(10 * sizeof(double)); // dynamisches Array erstellen

    // Inhalt des Arrays ausgeben (zunächst uninitialisiert)
    printf("Inhalt des Arrays nach Erstellung:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2lf ", array[i]);
    }
    printf("\n");

    // 10 double-Werte einlesen und dem Array zuweisen
    printf("Geben Sie 10 double-Werte ein:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
    }

    // Inhalt des Arrays mit einem Zeiger ausgeben
    printf("Inhalt des Arrays nach Initialisierung:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2lf ", *(array + i));
    }
    printf("\n");

    free(array); // dynamisches Array freigeben
    return 0;
}
