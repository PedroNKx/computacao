#include <stdio.h>
#include <string.h>

int main() {
    char nomes[3][100];      
    char entrada[100];      

    
    printf("Digite três nomes:\n");
    for (int i = 0; i < 3; i++) {
        fgets(nomes[i], 100, stdin); 
        nomes[i][strcspn(nomes[i], "\n")] = '\0';  
    }

    while (1) {
        printf("Digite um nome: ");
        fgets(entrada, 100, stdin); 
        entrada[strcspn(entrada, "\n")] = '\0';  

        int encontrado = 0;

        for (int i = 0; i < 3; i++) {
            if (strcmp(entrada, nomes[i]) == 0) {
                encontrado = 1;
                break;
            }
        }

        if (encontrado) {
            printf("Este nome está entre os três nomes.\n");
            break; // Sai do loop
        } else {
            printf("Este nome não está entre os três nomes.\n");
        }
    }

    printf("Fim do programa.\n");

    return 0;
}
