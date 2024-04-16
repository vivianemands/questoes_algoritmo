#include <stdio.h>
int soma(int a, int b)
{
    return (a + b);
}

int main()
{
    int n1, n2, s = 0;

    printf("informe dois numeros:\n");
    scanf("%i%i", &n1, &n2);

    s = soma(n1, n2);

    printf("a soma dos números e: %i ", s);
    return 0;
}