#include <stdio.h>
#include <stdlib.h>
free
float* cria_vetor(int tamanho){
    //função que cria vetor de numeros reais
    float * vetor = (float*) malloc ( tamanho* sizeof( float));
}
void ler_vetor( float* vetor, int tamanho){
	// função que ler valores para um vetor de numeros reais
	printf("informe os valores para o vetor: \t");
	for ( int index; index<tamanho; index++){
		scanf("%f", &vetor[index]);
	}
}
void imprime_vetor (float * vetor, int * tamanho){
	for(int index=0; index<tamanho; index++){
		printf("%f\t",vetor[index]);
	}
}
int main(void){
	int tamanho = 5;
	float * vetor = (float*) malloc ( tamanho* sizeof( float));
	if (vetor == NULL){
		printf("não há espaço na memoria!");
		exit(1);
	}
	else{
		printf("alocação bem sucedida");
		//chamada das funções ler e imprimir
    ler_vetor(vetor,tamanho);
	imprime_vetor(vetor,tamanho);
	free(vetor)
	}
	return 0;
}