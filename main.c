#include <stdio.h>

int main()
{
    int i, codigo[40], estoque[40], resp=0, resp2=0, resp3=0, resp4=0;
    float preco[40];
    char nome[15][40];
    printf("*******************CADASTRO*************************\n");
    for(i=0; i<40; i++)
    {
        printf("\nInsira o nome do produto:\n");
        __fpurge(stdin);
        gets(nome[i]);
        printf("\nInsira o código do produto:\n");
        scanf("%i", &codigo[i]);
        printf("\nInsira a quantidade em estoque do produto:\n");
        scanf("%i", &estoque[i]);
        printf("\nInsira o preço de venda do produto:\n");
        scanf("%f", &preco[i]);
    }
    do
    {
        printf("\n\n===============FARMÁCIA DO CEFET==================\n");
        printf("\n\n1. Mostrar preço de venda de um determinado produto;\n2. Efetuar uma venda;\n3. Mostrar todos os dados de todos os programas;\n4. Sair.\nInsira a opção desejada:\n");
        scanf("%i", &resp);
        switch(resp)
        {
            case 1:
            printf("\nInsira o código do produto que você gostaria de ver:\n");
            scanf("%i", &resp2);
            for(i=0; i<40; i++)
            {
                if(resp2==codigo[i])
                {
                    printf("\n\nO produto %s custa R$%.2f", nome[i], preco[i]);
                }
            }
            break;
            case 2:
            printf("\nInsira o código do produto que será vendido:\n");
            scanf("%i", &resp3);
            printf("\nInsira a quantidade que será demandada:\n");
            scanf("%i", &resp4);
            for(i=0;i<40; i++)
            {
                if(resp3==codigo[i])
                {
                    if(estoque[i]<resp4)
                    {
                        printf("\nQUANTIDADE INSUFICIENTE, VENDA CANCELADA.\n");
                    }
                    else
                    {
                        estoque[i]=estoque[i]-resp4;
                        printf("\nA quantidade em estoque do produto %s, após a venda é de %i unidades\n", nome[i], estoque[i]);
                    }
                }
            }
            break;
            case 3:
            printf("\n\nA seguir, temos as informações de todos os produtos:\n");
            for(i=0; i<40; i++)
            {
                printf("\nO produto %s, de código %i custa R$%.2f e temos %i unidades em estoque.", nome[i], codigo[i], preco[i], estoque[i]);
            }
            break;
        }
    }
    while(resp!=4);
    printf("\nSaindo...");
    return 0;
}
