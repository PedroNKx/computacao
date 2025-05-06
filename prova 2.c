#include <stdio.h>
int main ()
{
    int distancia;
    int segundos, minutos;
    int total_seg, ritmo_seg, ritmo_min, resto;


    printf("Qual eh a distancia? ");
    scanf("%d", &distancia);

    printf("Em quantos minutos você percorreu? ");
    scanf("%d", &minutos);

    printf("Em quantos segundos voce percorreu? ");
    scanf ("%d", &segundos);

    total_seg = minutos * 60 + segundos;

    ritmo_seg = total_seg / distancia;

    ritmo_min = ritmo_seg / 60;
    resto = ritmo_seg % 60;

    printf("O seu ritmo foi: %d:%d", ritmo_min, resto);

    return 0;
}
