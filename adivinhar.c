#include <stdio.h>

int main()
{
    int numero_secreto;
    int max_tentativas = 7;
    int chance, tentativas =1;
    
    
    printf("Jogador1, digite seu numero secreto de (1 a 100): ");
    scanf("%d", &numero_secreto);
    
    printf("Jogador2, tente acertar o numero \n");
    printf("Voce tem %d tenativas \n", max_tentativas);
    
    while(tentativas<=max_tentativas){
        printf("\nTentativa %d: ", tentativas);
        scanf("%d", &chance);
        
    if(chance==numero_secreto){
        printf("Parabens voce acertou o numero %d em %d tentativa(s)", numero_secreto, tentativas);
        break;
    }
    
    else if (chance<numero_secreto){
        printf("O numero secreto eh maior\n");
    }    
    else{
        printf("O numero secreto eh menor\n");
    }    
         
    tentativas++;
    }
    
    if (chance != numero_secreto)
        printf("Voce perdeu o numero secreto era %d: ", numero_secreto);
    
    
    
}
