#include <stdio.h>
#define T 3

int main()
{
    int matriz[T][T], i, j, soma = 0, soma2 = 0;

    for (i=0;i<T;i++)
    {
        for (j=0;j<T;j++)
        {
            printf("Digite um valor: ");
            scanf("%d", &matriz[i][j]);
            if (i == j)
            {
                soma += matriz[i][j];
            }
            if (i + j == T - 1)
            {
                soma2 += matriz[i][j];
            }
        }
    }
    for (i=0; i<T;i++)
    { printf("\n");
        for (j=0;j<T;j++)
        {
            printf("%d ",matriz[i][j]);
        }
    }
    printf("\nA soma da diagonal principal e: %d", soma);
    printf("\nA soma da diagonal secundaria e: %d", soma2);
}