#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    int n;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o numero do mes que deseja saber: ");
    scanf("%d", &n);

    system("cls");

    switch (n)
    {
    case 1:
        printf("É Janeiro\n");
        break;
    case 2:
        printf("É Fevereiro\n");
        break;
    case 3:
        printf("É Março\n");
        break;
    case 4:
        printf("É Abril\n");
        break;
    case 5:
        printf("É Maio\n");
        break;
    case 6:
        printf("É Junho\n");
        break;
    case 7:
        printf("É Julho\n");
        break;
    case 8:
        printf("É Agosto\n");
        break;
    case 9:
        printf("É Setembro\n");
        break;
    case 10:
        printf("É Outubro\n");
        break;
    case 11:
        printf("É Novembro\n");
        break;
    case 12:
        printf("É Dezembro\n");
        break;

    default:
        printf("Numero invalido! Tente de 1-12!\n");
        break;
    }

    return 0;
}