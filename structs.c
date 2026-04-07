#include <stdio.h>
#include <string.h>
#define T 5

struct Carro{
    int ano;
    char modelo[25];
    char marca[25];
    float valor;
};
int main()
{
    struct Carro Frota[T];
    struct Carro aux;
    int i, j;
    for (i = 0; i<T; i++)
    {
        printf("Digite o ano do carro: ");
        scanf("%d", &Frota[i].ano);
        getchar();
        printf("Digite o modelo do carro: ");
        gets(Frota[i].modelo);
        printf("Digite a marca do carro: ");
        gets(Frota[i].marca);
        printf("Digite o valor do carro: ");
        scanf("%f", &Frota[i].valor);

    }
    for (i=0; i<T-1; i++)
    {
        for (j=i+1; j<T;j++)
        {
            if (strcmp(Frota[i].modelo, Frota[j].modelo) > 0)
            {
                aux=Frota[i];
                Frota[i]=Frota[j];
                Frota[j]=aux;

            }
        }
    }
    for (i=0; i<T; i++)
    {
        printf("\nAno: %d", Frota[i].ano);
        printf("\nModelo: %s", Frota[i].modelo);
        printf("\nMarca: %s", Frota[i].marca);
        printf("\nValor: %.2f", Frota[i].valor);
    }
}