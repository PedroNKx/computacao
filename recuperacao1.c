#include <stdio.h>
#include <math.h>

int main ()
{
    float altura, largura;
    float area, quantidade_tinta;
    
    
    printf("Digite a altura da parede (em metros): ");
    scanf("%f", &altura);
    
    printf("Digite a largura da parede (em metros): ");
    scanf("%f", &largura);
    
    area = altura * largura;
    
    quantidade_tinta = ceil (area / 2);
    
    printf("A area da parede eh: %.2f \n", area);
    printf("A quantidade de tinta necessaria eh: %.0f", quantidade_tinta);
    
}
