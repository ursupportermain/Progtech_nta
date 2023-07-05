#include <stdio.h>

void auf_ab(int n, int max) {
  if (n == max) {
    printf("%d ", n);
    return;
  }
  printf("%d ", n);
  auf_ab(n+1, max);
  printf("%d ", n);
  if (n == 0) {
    return;
  }
}

int main() {
  int n;
  printf("Geben Sie eine positive Ganzzahl ein: ");
  scanf("%d", &n);
  if (n > 0) {
    auf_ab(0, n);
    printf("\n");
  }
  return 0;
}
