#include <stdio.h>
#include <locale.h>

int main()
{
    int n;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("O numero %d é par!\n", n);
    }
    else
    {
        printf("O numero %d é impar!\n", n);
    }

    return 0;
}