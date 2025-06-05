#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 5
#define COLUNAS 5

int main() {
    int mat[LINHAS][COLUNAS];
    int i, j;

    srand(time(NULL));

    printf("Matriz original:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            mat[i][j] = rand() % 100 + 1;
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta:\n");
    for (j = 0; j < COLUNAS; j++) {
        for (i = 0; i < LINHAS; i++) {
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
