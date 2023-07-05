#include <stdio.h>
#define F(x,y) (2*x + 3*y)

int main() {
  int x = 2;
  int y = 3;
  printf("F(%d,%d) = %d\n", x, y, F(x,y));
  printf("F(%d,%d) = %d\n", x+1, y+1, F(x+1,y+1));
  return 0;
}
