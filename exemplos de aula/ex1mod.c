#include <stdio.h>
#include <stdlib.h>
#define QUANTIDADE_ALUNOS S

typedef struct aluno
{
    int matricula;
    int idade;
    char nome[20];
} Aluno;

void preenche(Aluno *aluno, int tamanho)
{
    int count;
    for (count = 0; count < tamanho; count++)
        ;
    printf("informe o nome: \t");
    scanf("%[\n]", aluno[count].nome);
    printf("informe a matricula: \t");
    scanf("%d", &aluno[count].matricula);
    printf("digite a idade: \t");
    scanf("%d", &aluno[count].idade);
}

int main(void)
{
    Aluno *aluno = (Aluno *)malloc(QUANTIDADE_ALUNOS * sizeof(aluno));
    if (aluno == NULL)
    {
        printf("no memory RAM");
        exit(1);
    }

    int count;
    for (count = 0; count < QUANTIDADE_ALUNOS; count++)
    {
        printf("informe o nome: \t");
        scanf(" %[^\n]", aluno[count].nome);
        printf("informe a matricula: \t");
        scanf("%d", &aluno[count].matricula);
        printf("digite a idade: \t");
        scanf("%d", &aluno[count].idade);
    }
    int novo_tamanho;
    printf("informe o novo tamanho do vetor; \t");
    scanf("%d", &novo_tamanho);
    aluno = (Aluno *)realloc(aluno, novo_tamanho * sizeof(Aluno));
    if (aluno == NULL)
    {
        exit(1);
    }
    else
    {
        printf("vetor realocado: \n");
    }
    preenche(aluno, novo_tamanho);
    return (0);
}
