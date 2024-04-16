#include <stdio.h>
int maiorn(int n1, int n2, int n3)
{
    if (n1 > n2 && n1 > n3)
    {
        printf("o numero %i e maior", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("o numero %i e maior", n2);
    }
    else if (n3 > n1 && n3 > n2)
    {
        printf("o numero %i e maior", n3);
    }
    else
    {
        printf("INVALIDO");
    }
    return 0;
}

int main()
{
    int a, b, c, maior = 0;

    printf("informe tres numeros:\n");
    scanf("%i%i%i", &a, &b, &c);

    maior = maiorn(a, b, c);
    return 0;
}