#include <stdio.h>

int main()
{
    int idade[10], i;
    for(i=0; i<10; i++)
    {
        printf("\nInsira sua idade:\n");
        scanf("%i", &idade[i]);
    }
    for(i=9; i>=0; i--)
    {
        printf("\nIdade %i", idade[i]);
    }
    printf("\nA quarta pessoa tem %i anos", idade[3]);
    idade[6]=18;
    idade[1]=idade[0];
    idade[4]=idade[0]*idade[4];
    printf("\nA seguir a idade de todos:");
    for(i=0; i<10; i++)
    {
        printf("\n%i", idade[i]);
    }
    return 0;
}

