#include <stdio.h>
#include <stdlib.h>
float nota[5], nota2[5], media[5], maiormedia=0;
int i, imaior;
char nome[30][5];

void main()
{
    for(i=0; i<5; i++)
    {
    printf("Insira a nota 1:\n");
    scanf("%f", &nota[i]);
    printf("\nInsira a nota 2:\n");
    scanf("%f", &nota2[i]);
    printf("\n Insira seu nome:\n");
    __fpurge(stdin);
    gets(nome[i]);
    media[i]=(nota[i]+nota2[i])/2;
    if(media[i]>=6)
    {
        printf("\nAprovado");
    }
    else
    {
        printf("\nReprovado");
    }
    if(media[i]>maiormedia)
    {
        maiormedia=media[i];
        imaior=i;
    }
    }
    printf("\n\n A  meior média foi de %.2f pontos", maiormedia);
    printf("A primeira nota do segundo aluno, o/a %s, foi de %.2f pontos", nome[1], nota[1]);
    for(i=0; i<5; i++)
    {
        printf("\nO/A aluno/a %s tirou %.2f pontos na primeira prova, %.2f pontos na segunda prova e ficou com %.2f pontos de média %.2f", nome[i], nota[i], nota2[i], media[i]);
    }
    printf("\nO/A aluno %s foi o que obteve maior média nas duas provas");
    for(i=0; i<5; i++)
    {
        if(strcmp(nome[i],"Tati")==0)
        {
            printf("\nO primeiro aluno se chama Tati");
        }
        else
        {
            printf("\nO primeiro aluno não se chama Tati");
        }
    }
    return 0;
}
