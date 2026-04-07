#include <stdio.h>

void somar(void)
{
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("A soma e: %d\n", n1 + n2);
}

void subtrair(void)
{
    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("A subtracao e: %d\n", n1 - n2);
}

void multiplicar(void)
{
    int n1, n2;
    printf("Digite o primeiro numero:");
    scanf("%d", &n1);
    printf("Digite o segundo numero:");
    scanf("%d", &n2);
    printf("A multiplicacao e: %d\n", n1 * n2);
}

void dividir(void)
{
    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("A divisao e: %d\n", n1 / n2);
}

int main(void)
{
    int opcao;
    printf("Escolha uma operação\n 1.SOMA\n 2.SUBTRAÇÃO\n 3.MULTIPLICAÇÃO\n 4.DIVISÃO\n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        somar();
        break;

    case 2:
        subtrair();
        break;

    case 3:
        multiplicar();
        break;

    case 4:
        dividir();
        break;
    }

    return 0;
}
