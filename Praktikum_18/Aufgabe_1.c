#include <stdio.h>

int fakultaet(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fakultaet(n-1);
    }
}

int main() {
    int n;
    printf("Geben Sie eine Zahl n ein: ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, fakultaet(n));
    return 0;
}