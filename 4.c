#include <stdio.h>

// Função para verificar se um número é positivo, negativo ou neutro
int verificarNumero(int numero)
{
    if (numero > 0)
    {
        return 1; // Positivo
    }
    else if (numero < 0)
    {
        return -1; // Negativo
    }
    else
    {
        return 0; // Neutro
    }
}

int main()
{
    int numeroInteiro;

    // Obter o número do usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numeroInteiro);

    // Chamar a função para verificar o número
    int resultado = verificarNumero(numeroInteiro);

    // Exibir o resultado
    if (resultado == 1)
    {
        printf("%d é um número positivo.\n", numeroInteiro);
    }
    else if (resultado == -1)
    {
        printf("%d é um número negativo.\n", numeroInteiro);
    }
    else
    {
        printf("%d é um número neutro.\n", numeroInteiro);
    }

    return 0;
}