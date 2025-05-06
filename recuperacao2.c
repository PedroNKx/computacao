#include <stdio.h>
int main ()
{
    int numero, inicio, fim, soma = 0;
    int i;
    
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    printf("Digite o inicio do intervalo: ");
    scanf("%d", &inicio);
    
    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);
    
    i = inicio;
    
    while (i<=fim){
        if (i % numero == 0){
            soma += i;
        }
        
        i++; }
        
    printf("A soma dos multiplos eh: %d", soma);
}
