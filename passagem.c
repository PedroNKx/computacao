#include <stdio.h>
#include <math.h>

int calcula_raizes(float a, float b, float c, float *x1, float *x2)
{
    float delta = b * b - 4 * a * c;

    if (delta < 0) {
        return 0;
    } else if (delta == 0) {
        *x1 = -b / (2 * a);
        *x2 = *x1;
        return 1;
    } else {
        
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2;
    }
}

int main()
{
    float a, b, c, r1, r2;
    int qtd_raizes;

    printf("Digite o coeficientes a: ");
    scanf("%f", &a);
    printf("Digite o coeficientes b: ");
    scanf("%f", &b);
    printf("Digite o coeficientes c: ");
    scanf("%f", &c);
    

    qtd_raizes = calcula_raizes(a, b, c, &r1, &r2);
    if (qtd_raizes == 0) {
        printf("Nao existem raizes reais.\n");
    } else if (qtd_raizes == 1) {
        printf("Existe uma raiz real: %.2f\n", r1);
    } else {
        printf("Existem duas raizes reais: %.2f e %.2f\n", r1, r2);
    }

    return 0;
}
