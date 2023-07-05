#include <stdio.h>

int Summe(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    printf("Bitte geben Sie einen Wert für n ein: ");
    scanf("%d", &n);
    int ergebnis = Summe(n);
    printf("Die Summe von 1 bis %d ist: %d\n", n, ergebnis);
    return 0;
}

