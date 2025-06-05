#include <stdio.h>

#define M 3
#define NCOL 3

void multiplica(int a[][NCOL], int b[][NCOL], int c[][NCOL]) {
    int i, j, k;
    for (i = 0; i < M; i++)
        for (j = 0; j < M; j++) {
            c[i][j] = 0;
            for (k = 0; k < M; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
}

void copia(int origem[][NCOL], int destino[][NCOL]) {
    int i, j;
    for (i = 0; i < M; i++)
        for (j = 0; j < M; j++)
            destino[i][j] = origem[i][j];
}

void imprime(int m[][NCOL]) {
    int i, j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }
}

int main() {
    int a[M][NCOL] = {{1, 2, 0}, {0, 1, 0}, {3, 0, 1}};
    int b[M][NCOL], c[M][NCOL];
    int n, i;

    copia(a, b);

    multiplica(a, a, c);
    printf("A^2:\n");
    imprime(c);

    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        multiplica(b, a, c);
        copia(c, b);
    }

    printf("A^%d:\n", n);
    imprime(c);

    return 0;
}
