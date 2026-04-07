#include <stdio.h>
#define L 5
#define C 4

int main(void)
{
    int i, j, Matriz[L][C], Soma = 0;

    for (i = 0; i < L; i++)
    {
        printf("Digite os valores da linha %d:\n", i + 1);
        for (j = 0; j < C; j++)
        {
            printf("Digite um valor inteiro: ");
            scanf("%d", &Matriz[i][j]);
        }
    }
    for (i=0; i<L;i++)
    { printf("\n");
        for (j=0;j<C;j++)
        {
            printf("%d ",Matriz[i][j]);
        }
    }
}