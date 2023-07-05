#include <stdio.h>

void druck_3dim_Array(int a[][2][2], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("a[%d][%d][%d] = %d\n", i, j, k, a[i][j][k]);
            }
        }
    }
}

int main() {
    int a[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };
    druck_3dim_Array(a, 2);
    return 0;
}
