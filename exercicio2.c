#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LIN 3
#define COL 3
#define MAX_STR 50


int ehVogal(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}


int ehConsoante(char c) {
    c = tolower(c);
    return ((c >= 'a' && c <= 'z') && !ehVogal(c));
}


void inverteString(char *str) {
    int i, j;
    char temp;
    int len = strlen(str);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char matriz[LIN][COL][MAX_STR];
    char matrizModificada[LIN][COL][MAX_STR];
    int i, j;

    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("Digite a string da posição [%d][%d]: ", i, j);
            scanf("%49s", matriz[i][j]);
            strcpy(matrizModificada[i][j], matriz[i][j]);
        }
    }

    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            char primeira = matriz[i][j][0];
            int len = strlen(matriz[i][j]);
            char ultima = matriz[i][j][len - 1];

            if (ehVogal(primeira) && ehConsoante(ultima)) {
                inverteString(matrizModificada[i][j]);
            }
        }
    }

    printf("\nMatriz Original:\n");
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("%s ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Modificada:\n");
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("%s ", matrizModificada[i][j]);
        }
        printf("\n");
    }

    return 0;
}
