#include <stdio.h>

int arredonda(float x) {
    int parte_inteira = (int) x;   
    float decimal = x - parte_inteira; 

    if (decimal >= 0.5 || decimal <= -0.5) {  
        if (x > 0) {
            return parte_inteira + 1;   
        } else {
            return parte_inteira - 1;  
        }
    }
    return parte_inteira;   
}

int main() {
    float valor;

    
    printf("Digite um número para arredondar: ");
    scanf("%f", &valor);  

    
    printf("Valor arredondado: %d\n", arredonda(valor));

    return 0;  
}
