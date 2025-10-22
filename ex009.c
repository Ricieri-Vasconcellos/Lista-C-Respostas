#include <stdio.h>
#include <locale.h>

int main()
{
    float horas, por_hora, ganho, bonus, final;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &por_hora);

    printf("Digite o numero de horas trabalhadas na semana: ");
    scanf("%f", &horas);

    if (horas > 60)
    {
        ganho = 40 * por_hora;
        bonus = (horas - 60) * por_hora * 2;
        bonus = bonus + 20 * por_hora * 1.5;
        final = ganho + bonus;
    }
    else if (horas > 40)
    {
        ganho = 40 * por_hora;
        bonus = (horas - 40) * por_hora * 1.5;
        final = ganho + bonus;
    }
    else
    {
        final = horas * por_hora;
    }

    printf("Nessa semana voce recebe: R$ %.2f!", final);

    return 0;
}