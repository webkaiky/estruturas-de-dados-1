#include<stdio.h>

typedef struct curso{
    char nome [20];
    int cod;
}curso;
typedef struct aluno{
    int mat, idade;
    char nome[20];
    curso c;
}aluno;
int main(void){
    aluno a;
    printf("digite o nome:\n");
    scanf("%[^\n]", &a.nome);
    getchar();
    printf("informe o curso:\n");
    scanf("%[^\n]", &a.c.nome);
    printf("informe o codigo do curso:\n");
    scanf("%d", &a.c.cod);
    return 0;
}