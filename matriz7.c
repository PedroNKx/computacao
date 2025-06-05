#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void criaMatrizes(int a[][TAM], int b[][TAM]) {
    int i, j;
    for (i = 0; i < TAM; i++)
        for (j = 0; j < TAM; j++) {
            a[i][j] = rand() % 100;
            b[i][j] = rand() % 100;
        }
}

void imprimeMatriz(int m[][TAM]) {
    int i, j;
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++)
            printf("%3d ", m[i][j]);
        printf("\n");
    }
}

void somaMatrizes(int a[][TAM], int b[][TAM], int r[][TAM]) {
    int i, j;
    for (i = 0; i < TAM; i++)
        for (j = 0; j < TAM; j++)
            r[i][j] = a[i][j] + b[i][j];
    imprimeMatriz(r);
}

void subtraiMatrizes(int a[][TAM], int b[][TAM], int r[][TAM]) {
    int i, j;
    for (i = 0; i < TAM; i++)
        for (j = 0; j < TAM; j++)
            r[i][j] = b[i][j] - a[i][j];
    imprimeMatriz(r);
}

void multiplicaPorConstante(int a[][TAM], int r[][TAM], int k) {
    int i, j;
    for (i = 0; i < TAM; i++)
        for (j = 0; j < TAM; j++)
            r[i][j] = a[i][j] * k;
    imprimeMatriz(r);
}

int main() {
    int a[TAM][TAM], b[TAM][TAM], r[TAM][TAM], criado = 0, op, k;

    srand(time(NULL));

    do {
        scanf("%d", &op);
        if (op == 0) {
            criaMatrizes(a, b);
            criado = 1;
        } else if (criado) {
            if (op == 1) {
                imprimeMatriz(a);
                printf("\n");
                imprimeMatriz(b);
            } else if (op == 2) {
                somaMatrizes(a, b, r);
            } else if (op == 3) {
                subtraiMatrizes(a, b, r);
            } else if (op == 4) {
                scanf("%d", &k);
                multiplicaPorConstante(a, r, k);
            }
        }
    } while (op != -1);

    return 0;
}
