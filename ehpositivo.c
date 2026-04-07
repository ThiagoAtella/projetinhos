#include <stdio.h>

int ehPositivo(int numero)
{
    if (numero > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int valor;
    printf("Digite um numero inteiro:");
    scanf("%d", &valor);
    if (ehPositivo(valor))
    {
        printf("Valor aceito");
    }
    else
    {
        printf("Valor rejeitado");
    }
}