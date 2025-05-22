#include <stdio.h>

void converteHora(int total_segundos, int *hora, int *min, int *seg)
{
    *hora = total_segundos / 3600;
    int resto = total_segundos % 3600;
    *min = resto / 60;
    *seg = resto % 60;
}

int main ()
{
    int total_segundos;
    int h, m, s; 
    
    printf("Digite o total em segundos: ");
    scanf("%d", &total_segundos);
    
    converteHora(total_segundos,&h,&m,&s);
    printf("Hora convertida: %d:%d:%d", h,m,s);
}
