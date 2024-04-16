#include <stdio.h>
int maiorn(int a, int b)
{
    if (a > b)
    {
        printf("o numero %i e maior", a);
    }
    else if (b > a)
    {
        printf("o numero %i e maior", b);
    }
    else
    {
        printf("os numeros %i, %i sao iguais", a, b);
    }
    return 0;
}
int main()
{
    int n1, n2, maiornumero = 0;

    printf("informe dois numeros:\n");
    scanf("%i%i", &n1, &n2);

    maiornumero = maiorn(n1, n2);
    return 0;
}