
#include <stdio.h>

// Função com retorno (int)
int soma(int a, int b)
{
    return a + b;
}

int main()
{
    // Chamando a função e armazenando o valor retornado em uma variável
    int resultado = soma(5, 3);
    printf("Resultado da soma: %d\n", resultado);
    return 0;
}