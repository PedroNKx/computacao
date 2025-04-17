#include <stdio.h>

int main()
{
    int valor, positivos = 0, soma = 0;

    printf("Ola! Digite valores inteiros. Para encerrar, digite -1000.\n");


    printf("Digite um valor: ");
    scanf("%d", &valor);



    printf("Digite um valor: ");
    scanf("%d", &valor);
    while (valor != -1000)
    {
        if (valor > 0)
        {
            positivos++;
            soma += valor;
        }

        printf("\nVocê digitou %d valores positivos.\n", positivos);

        if (positivos > 0)
        {
            float media = (float)soma / positivos;
            printf("A média dos valores positivos é: %.1f\n", media);
        }
        else
        {
            printf("Nenhum valor positivo foi digitado.\n");
        }

        printf("Programa encerrado. Obrigado por usar!\n");
        return 0;
    }
