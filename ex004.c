#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    int n;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite um numero dentro do intervalo 1-5 para escreve-lo por extenso: ");
    scanf(" %d", &n);

    switch (n)
    {
    case 1:
        printf("1 - Um\n");
        break;
    case 2:
        printf("2 - Dois\n");
        break;

    case 3:
        printf("3 - Três\n");
        break;

    case 4:
        printf("4 - Quatro\n");
        break;

    case 5:
        printf("5 - Cinco\n");
        break;

    default:
        printf("número inválido.\n");
        break;
    }

    return 0;
}