#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[30][20];
    float av1[30];
    int i, j; //"x" eh a variavel auxiliar
    char y[30];// outra variavel auxiliar
    float x;
    
    printf("Olá, meu nome é Igor de Andrade e este programa pode ser visto no seguinte endereço do github: https://github.com/igorioshi/trabalhoAv2/blob/master/trabalho.c \n");
    
    for(i=0; i<=29; i++)
    {
        //Entrar com o nome e nota do aluno
        printf("\nEntre com o nome do aluno %d: ", i+1);
        scanf("%s", nome[i]);
        printf("Entre com a AV1 do %s: ", nome[i]);
        scanf("%f", &av1[i]);
    }
    
    //ordenaçao em bolha
    for(i=0; i<=29; i++)
    {
        for(j=i+1;j<=29; j++)
        {
            if(av1[j] > av1[i])
            {
                x = av1[j];
                av1[j] = av1[i];
                av1[i] = x;
                
                strcpy(y, nome[j]);
                strcpy(nome[j], nome[i]);
                strcpy(nome[i], y);
            }
        }
    }
    
    
    //Listagem
    printf("\nAluno\t\t\tAV1");
    printf("\n----------------------------");
    
    //Relatorio
    for(i=0; i<=29; i++)
    {
        printf("\n%s \t\t\t%.2f", nome[i], av1[i]);
    }
    
    printf("\n-----------------------------");
    
    return 0;
}