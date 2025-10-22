#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

int main()
{
    char nome[50];
    float peso, altura, IMC;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite seu primeiro nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("%s digite seu peso (kg): ", nome);
    scanf("%f", &peso);

    printf("%s digite sua altura (m): ", nome);
    scanf("%f", &altura);

    IMC = peso / (altura * altura);

    system("cls");

    printf("%s, seu IMC é de %.2f\n", nome, IMC);

    if (IMC >= 40)
    {
        printf("%s, você está com obesidade grave!\n", nome);
    }
    else if (IMC >= 30)
    {
        printf("%s, você está obeso!\n", nome);
    }
    else if (IMC >= 25)
    {
        printf("%s, você está acima do peso!\n", nome);
    }
    else if (IMC >= 18.5)
    {
        printf("%s, você está com o peso normal!\n", nome);
    }
    else
    {
        printf("%s, você está abaixo do peso!\n", nome);
    }

    return 0;
}