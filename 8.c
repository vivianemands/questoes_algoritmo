#include <stdio.h>
int main()
{
    float n1, n2, n3, exa, m, mf;

    m = 0;
    mf = 0;

    printf("informe as 3 notas: \n ");
    scanf("%f %f %f", &n1, &n2, &n3);

    m = (n1 + n2 + n3) / 3;

    if (m >= 7)
    {
        printf("aprovado\n");
    }
    else if (m >= 3 && m < 7)
    {
        printf("voce esta no exame\n");
        printf("informe a nota do exame: ");
        scanf("%f", &exa);
        mf = (exa + m) / 2;

        printf("%f\n", mf);

        if (mf >= 5)
        {
            printf("aprovado no exame\n ");
        }
        else
        {
            printf("reprovado sem direito a exame ");
        }
    }

    return 0;
}