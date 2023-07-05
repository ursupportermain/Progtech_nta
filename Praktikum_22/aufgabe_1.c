#include <stdio.h>

int main(int argc, char* argv[]) {
  printf("Anzahl der Argumente: %d\n", argc);
  printf("Argumente: ");
  for (int i = 0; i < argc; i++) {
    printf("%s ", argv[i]);
  }
  printf("\n");
  return 0;
}
