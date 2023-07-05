#include <stdio.h>

int fibonacci(int n) {
    int a = 1, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    printf("Geben Sie eine Zahl n ein: ");
    scanf("%d", &n);
    printf("Der %d-te Eintrag in der Fibonacci-Folge ist %d\n", n, fibonacci(n));
    return 0;
}
