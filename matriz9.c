#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NL 5
#define NCOL 10

char converte(int n) {
    return "abcd"[n % 4];
}

void geraRespostas(char m[NL][NCOL]) {
    int i, j;
    for (i = 0; i < NL; i++)
        for (j = 0; j < NCOL; j++)
            m[i][j] = converte(rand() % 4);
}

void compara(char gabarito[], char respostas[NL][NCOL], int pontua[]) {
    int i, j;
    for (i = 0; i < NL; i++) {
        pontua[i] = 0;
        for (j = 0; j < NCOL; j++)
            if (respostas[i][j] == gabarito[j])
                pontua[i]++;
    }
}

int main() {
    char gabarito[NCOL];
    char respostas[NL][NCOL];
    int pontua[NL], i, j;

    srand(time(NULL));

    for (i = 0; i < NCOL; i++)
        gabarito[i] = converte(rand() % 4);

    geraRespostas(respostas);
    compara(gabarito, respostas, pontua);

    for (i = 0; i < NL; i++) {
        for (j = 0; j < NCOL; j++)
            printf("%c ", respostas[i][j]);
        printf("-> %d\n", pontua[i]);
    }

    return 0;
}
