#include <stdio.h>

int main()
{
    int numero;
    int maior;

    printf("Digite numeros inteiros. Para encerrar, digite um numero negativo.\n");

    printf("Digite um numero: ");
    scanf("%d", &numero);

    maior = numero;


    while (numero >= 0)
    {
        if (numero > maior)
        {
            maior = numero;
        }

        printf("Digite um numero: ");
        scanf("%d", &numero);
    }

    printf("O maior numero digitado foi: %d\n", maior);
    return 0;
}

