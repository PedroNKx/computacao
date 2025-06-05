#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 4
#define COLUNAS 5

int main() {
    int mat[LINHAS][COLUNAS];
    int i, j;

    srand(time(NULL));

    printf("Matriz gerada:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            mat[i][j] = rand() % 100 + 1;
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }

    int maior = mat[0][0];
    int lin_maior = 0, col_maior = 0;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            if (mat[i][j] > maior) {
                maior = mat[i][j];
                lin_maior = i;
                col_maior = j;
            }
        }
    }

    int minimax = mat[lin_maior][0];
    int col_minimax = 0;

    for (j = 1; j < COLUNAS; j++) {
        if (mat[lin_maior][j] < minimax) {
            minimax = mat[lin_maior][j];
            col_minimax = j;
        }
    }

    printf("\nMaior elemento: %d (linha %d, coluna %d)\n", maior, lin_maior, col_maior);
    printf("Elemento minimax: %d (linha %d, coluna %d)\n", minimax, lin_maior, col_minimax);

    return 0;
}
