+#include <stdio.h>

void f(int i, int& j, int* p, int* q) {
    i = 2; // a: i wird geändert
    j = 3; // b: j wird geändert
    int k = 4;
    *p = 5; // c: die Variable, auf die p zeigt, wird geändert
    q = &k; // d: q zeigt auf eine andere Variable
}

int main() {
    int i = 1, j = 1, x = 1;
    int* p = &x;
    int* q = &x;
    f(i, j, p, q);
    printf("i = %d, j = %d, x = %d, *p = %d, *q = %d\n", i, j, x, *p, *q);
    return 0;
}
