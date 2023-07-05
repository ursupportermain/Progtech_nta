#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Bitte geben Sie den ersten Wert ein: ");
    scanf("%d", &a);

    printf("Bitte geben Sie den zweiten Wert ein: ");
    scanf("%d", &b);

    printf("Vor dem Swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Nach dem Swap: a = %d, b = %d\n", a, b);

    return 0;
}
