#include <stdio.h>
#include <math.h>

int main() {
    float largura, altura, area, tinta;

    printf("Digite a altura da parede (em metros): ");
    scanf("%f", &altura);

    printf("Digite a largura da parede (em metros): ");
    scanf("%f", &largura);

    area = largura * altura;

    tinta = area / 2;

     tinta = ceil(tinta);

    printf("A area da parede e: %.2f metros quadrados\n", area);
    printf("Quantidade de tinta necessaria: %.0f litros\n", tinta);

    return 0;
}
