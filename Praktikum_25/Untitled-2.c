#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int *arr = (int *) calloc(10, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Array after calloc:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        *(arr + i) = rand() % 20;
    }
    printf("Array after random values assignment:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
