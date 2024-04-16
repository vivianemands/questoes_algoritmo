#include <stdio.h>
int main()
{
    int n1;

    printf("informe um numero: ");
    scanf("%i", &n1);

    if (n1 > 0)
    {
        printf("o numero %i e positivo", n1);
    }
    else if (n1 < 0)
    {
        printf("o numero %i e negativo", n1);
    }
    else
    {
        printf("o numero %i e neutro", n1);
    }

    return 0;
}