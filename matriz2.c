#include <stdio.h>

#define N 7

int main() {
    int pascal[N][N];
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                pascal[i][j] = 1;
            else
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    printf("Triangulo de Pascal (%dx%d):\n", N, N);
    for (i = 0; i < N; i++) {
        for (j = 0; j <= i; j++) {
            printf("%4d", pascal[i][j]);
        }
        printf("\n");
    }

    return 0;
}
