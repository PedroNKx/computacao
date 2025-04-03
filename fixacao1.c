#include <stdio.h>
int main()
{
    float peso, alt, taxa;
    int idade, codigo;

    printf("Digite o codigo \n");
    scanf("%d", &codigo);
    printf("Digite a idade \n");
    scanf("%d", &idade);
    printf("Digite o peso (em Kg) \n");
    scanf("%f", &peso);
    printf("Digite a altura \n");
    scanf("%f", &alt);
    printf("digite a taxa \n");
    scanf("%f", &taxa);

    printf("Codigo: %d \n", codigo);
    printf("Idade: %d \nPeso: %f\nAltura %f\n", idade, peso, alt);
    printf("taxa: %f\n", taxa);

}
