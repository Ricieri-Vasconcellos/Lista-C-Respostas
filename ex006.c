#include <stdio.h>

int main()
{
    int n[3], m;
    m = sizeof(n) / sizeof(n[0]);

    printf("Digite o 1o numero: ");
    scanf("%d", &n[0]);

    printf("Digite o 2o numero: ");
    scanf("%d", &n[1]);

    printf("Digite o 3o numero: ");
    scanf("%d", &n[2]);

    if (n[0] == n[1] || n[0] == n[2] || n[1] == n[2])
    {
        printf("Erro: Os numeros devem ser diferentes!\n");
        return 0;
    }

    for (int i = 0; i < m - 1; i++)
    {
        for (int j = 0; j < m - i - 1; j++)
        {
            if (n[j] < n[j + 1])
            {
                int temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

    printf("%d, %d, %d\n", n[0], n[1], n[2]);

    return 0;
}