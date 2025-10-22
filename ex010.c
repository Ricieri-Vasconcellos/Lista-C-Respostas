#include <stdio.h>
#include <locale.h>

int main()
{
    float sal, imp;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o seu salário mensal: ");
    scanf("%f", &sal);

    if (sal <= 2259.20)
    {
        printf("Isento!\n");
    }
    else if (sal <= 2828.65)
    {
        imp = sal * 0.075 - 169.44;
        printf("O imposto a ser pago será de R$ %.2f!\n", imp);
    }
    else if (sal <= 3751.05)
    {
        imp = sal * 0.15 - 381.44;
        printf("O imposto a ser pago será de R$ %.2f!\n", imp);
    }
    else if (sal <= 4664.68)
    {
        imp = sal * 0.225 - 662.77;
        printf("O imposto a ser pago será de R$ %.2f!\n", imp);
    }
    else
    {
        imp = sal * 0.275 - 896;
        printf("O imposto a ser pago será de R$ %.2f!\n", imp);
    }
    
    return 0;
}