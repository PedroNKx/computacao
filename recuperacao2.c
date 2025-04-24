#include <stdio.h>
int main ()
{
    int n, soma = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    int i;

    printf("Multiplos de %d no intervalo de 1 a 10:\n", n);
    for(i=1; i<=10; i++){
        if(i % n == 0){
            printf("%d", i);
            soma += i;
        }
    }

printf("\nA soma de todos os multiplos de %d no intervalo de 1 a 10 e: %d\n", n, soma);

}
