#include <stdio.h>
#include <stdlib.h>
//exemplo : mundando o tamanho do vetor: 
int main(void){
    int tamanho, novo_tamanho;
    printf("digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int* vetor = (int*)calloc(tamanho, sizeof(int));
     if(vetor==NULL){
        exit(1);
     }

    printf("\nDigite um novo tamanho: ");
    scanf("%d", &novo_tamanho);
    vetor = (int*)realloc(vetor, novo_tamanho*sizeof(int));
    if(vetor==NULL){
        exit(1);
    }

    free(vetor);
    return 0;
}