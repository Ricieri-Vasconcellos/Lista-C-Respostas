#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[300];
    float n[3], m;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite a nota 1a prova: ");
    scanf("%f", &n[0]);

    printf("Digite a nota 2a prova: ");
    scanf("%f", &n[1]);

    printf("Digite a nota 3a prova: ");
    scanf("%f", &n[2]);

    system("cls");

    m = (n[0] + n[1] + n[2]) / 3.0;

    printf("O aluno %s, teve a media: %.2f\n", nome, m);

    if (m >= 7)
    {
        printf("O aluno está aprovado!\n");
    }
    else if (m >= 5.1)
    {
        printf("O aluno está de recuperação!\n");
    }
    else
    {
        printf("O aluno está reprovado!\n");
    }

    return 0;
}