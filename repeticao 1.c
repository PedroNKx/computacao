#include <stdio.h>

int main() {
    int base, inicio, fim, soma = 0, i;

    printf("Digite o numero base: ");
    scanf("%d", &base);
    printf("Digite o valor inicial do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o valor final do intervalo: ");
    scanf("%d", &fim);

    i = inicio;
    while (i <= fim) {
        if (i % base == 0) {
            soma += i;
        }
        i++;
    }

    printf("Soma dos multiplos de %d entre %d e %d: %d\n", base, inicio, fim, soma);

    return 0;
}

