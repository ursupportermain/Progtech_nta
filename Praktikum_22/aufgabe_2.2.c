#include <stdio.h>

int main() {
  printf("__func__ = %s\n", __func__);
  printf("__FILE__ = %s\n", __FILE__);
  printf("__LINE__ = %d\n", __LINE__);
  printf("__DATE__ = %s\n", __DATE__);
  printf("__TIME__ = %s\n", __TIME__);
  return 0;
}
