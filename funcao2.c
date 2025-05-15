#include <stdio.h>

int calculaDigitoVerificador(int num) {
    
    int x1 = num / 100;     
    int x2 = (num / 10) % 10; 
    int x3 = num % 10;      
    
   
    int soma = (x1 * 3 + x2 * 2 + x3 * 1) % 11;
    
    
    return soma % 10;
}

int main() {
    int num;

    
    printf("Digite um número de 3 dígitos: ");
    scanf("%d", &num);

    
    if (num >= 100 && num <= 999) {
        
        printf("Dígito verificador: %d\n", calculaDigitoVerificador(num));
    } else {
        printf("O número deve ter 3 dígitos.\n");
    }

    return 0;
}
