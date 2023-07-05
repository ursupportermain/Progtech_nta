#include <stdio.h>

void operation(int wert1, int wert2, char op, int *ergebnis) {
    switch(op) {
        case '+':
            *ergebnis = wert1 + wert2;
            break;
        case '-':
            *ergebnis = wert1 - wert2;
            break;
        case '*':
            *ergebnis = wert1 * wert2;
            break;
        case '/':
            if (wert2 == 0) {
                printf("Fehler: Division durch 0.\n");
                *ergebnis = 0;
            } else {
                *ergebnis = wert1 / wert2;
            }
            break;
        default:
            printf("Fehler: Unbekannter Operator.\n");
            *ergebnis = 0;
            break;
    }
}

int main() {
    int wert1, wert2, ergebnis;
    char op;

    printf("Bitte geben Sie den ersten Wert ein: ");
    scanf("%d", &wert1);

    printf("Bitte geben Sie den zweiten Wert ein: ");
    scanf("%d", &wert2);

    printf("Bitte geben Sie den Operator (+, -, *, /) ein: ");
    scanf(" %c", &op);

    operation(wert1, wert2, op, &ergebnis);

    printf("Ergebnis: %d\n", ergebnis);

    return 0;
}