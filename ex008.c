#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    float valor, valor_final;
    int op;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor do produto que deseja comprar: ");
    scanf("%f", &valor);

    printf("Opções de pagamento: \n");
    printf("\t1- À vista em dinheiro, recebe 10%% de desconto;\n");
    printf("\t2- À vista no cartão de crédito, recebe 5%% de desconto;\n");
    printf("\t3- Em 3 vezes no cartão, preço normal de etiqueta sem juros;\n");
    printf("\t4- Em 6 vezes, preço normal de etiqueta mais juros de 10%%.\n");

    printf("Qual opção deseja: ");
    scanf("%d", &op);

    system("cls");

    switch (op)
    {
    case 1:
        valor_final = valor * 0.9;
        printf("Preço a ser pago: R$ %.2f\n", valor_final);
        break;
    case 2:
        valor_final = valor * 0.95;
        printf("Preço a ser pago: R$ %.2f\n", valor_final);
        break;
    case 3:
        valor_final = valor / 3.0;
        printf("Preço a ser pago: R$ %.2f\n", valor);
        printf("Em 3x parcelas de R$ %.2f.\n", valor_final);
        break;
    case 4:
        valor = valor * 1.1;
        valor_final = valor / 6.0;
        printf("Preço a ser pago: R$ %.2f\n", valor);
        printf("Em 6x parcelas de R$ %.2f.\n", valor_final);
        break;

    default:
        printf("Opção invalida!");
        break;
    }

    return 0;
}