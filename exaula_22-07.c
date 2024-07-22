#include<stdio.h>

typedef union Documentos{
    char CPF[11];
    long int RG;
}Documentos;

typedef struct pessoa{
    char nome[20];
    Documentos documento;
}Pessoa;

void preenche_pessoa( Pessoa*pessoa){
    int opcao_documento;
    printf("informe o nome: \t");
    scanf(" %[^\n]", pessoa->nome);
    printf("informe o 1- CPF ou 2- RG: \t");
    scanf("%d", &opcao_documento);
    switch (opcao_documento){
    case 1 :
        scanf(" %[^\n]", pessoa->documento.CPF);
        break;
    case 2 :
        scanf("%ld[^\n]", pessoa->documento.RG);
        default:
        printf("valor invalido! \n");
        break;

    }
}
void imprime_pessoa(Pessoa*pessoa){
    printf("nome: %s\nDocumento:%s\n",pessoa -> nome, pessoa ->documento.CPF);
}

int main(void){
    Pessoa pessoa;
    preenche_pessoa(&pessoa);
    imprime_pessoa(&pessoa);
    return 0;
}
