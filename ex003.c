#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    float x, y, z;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor para 1o lado do triangulo: ");
    scanf("%f", &x);

    printf("Digite o valor para 2o lado do triangulo: ");
    scanf("%f", &y);

    printf("Digite o valor para 3o lado do triangulo: ");
    scanf("%f", &z);

    if (x > y + z || y > x + z || z > x + y)
    {
        printf("Não é um triângulo!");
    }
    else
    {
        if ((x == y) && (x == z))
        {
            printf("É um triângulo equilátero!");
        }
        else if ((x == y) || (x == z) || (y == z))
        {
            printf("É um triângulo isósceles");
        }
        else
        {
            printf("É um triângulo escaleno");
        }
    }
    return 0;
}