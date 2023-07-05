#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n;
    printf("Geben Sie eine Zahl n ein: ");
    scanf("%d", &n);
    printf("Der %d-te Eintrag in der Fibonacci-Folge ist %d\n", n, fibonacci(n));
    return 0;
}
