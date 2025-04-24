#include <stdio.h>

int main()
{
    float base, altura, perimetro = 0;
    float porta = 0.8, area;

    printf("Digite o valor da base: ");
    scanf("%f", &base);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura) - porta;

    printf("O perimetro do quarto é %.2f\n", perimetro);

    area = base * altura;

    printf("A area do quarto é %2.f\n", area);

    printf("A quantidade de rodape necessaria sera %.2f\n", perimetro);
    printf("A quantidade de piso necessaria sera %.2f", area);
}
