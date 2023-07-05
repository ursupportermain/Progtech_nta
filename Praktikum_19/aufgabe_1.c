#include <stdio.h>

void ab_und_auf(int n) {
  if (n == 0) {
    printf("%d ", n);
    return;
  }
  printf("%d ", n);
  ab_und_auf(n-1);
  printf("%d ", n);
}

int main() {
  int n;
  printf("Geben Sie eine positive Ganzzahl ein: ");
  scanf("%d", &n);
  if (n > 0) {
    ab_und_auf(n);
    printf("\n");
  }
  return 0;
}
