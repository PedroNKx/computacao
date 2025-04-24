#include <stdio.h>

int main() {
    int forca, nivel;
    float multiplicador, dano;

    printf("Digite sua força (1 a 100)\n");
    scanf("%d", &forca);
    printf("Digite seu nivel (1 a 50)\n");
    scanf("%d", &nivel);
    printf("Digite o multiplicador (1.0 a 2.0)\n");
    scanf("%f", &multiplicador);

    dano = forca * nivel + multiplicador;

    if (dano > 5000) {
        printf("DANO CRÍTICO MASSIVO!!\n");
    } else if (dano >= 1000 && dano <= 5000) {
        printf("Dano Crítico\n");
    } else {
        printf("Dano normal :(\n");
    }

    printf("O seu dano total foi %.2f\n", dano);

    return 0;
}
