#include <stdio.h>
#include <stdlib.h>

struct parte{
	int n1;
	int n2;
	int n3;
};

int conta(struct parte vet[], int n2);
void recebe(struct parte vet[], int n2);
void mostra(struct parte vet[], int n2);

int main(){
	struct parte*vetor;
	int n1, soma2 = 0;
	printf("digite a quantida de numeros que serao alocados dinamicamente: ");
		scanf("%d", &n1);

	vetor = (struct parte*)malloc(sizeof(struct parte)*n1); 
	recebe(vetor, n1);
	soma2 = conta(vetor, n1);
	printf("\na soma dos terceiros campos dos impares eh : %d\n", soma2);
		mostra(vetor, n1);
}

void recebe(struct parte vet[], int n2){ 
	int i;
	for(i = 0; i < n2; i++){
		printf("digite o valor do primeiro campo da estrutura: ");
			scanf("%d", &vet[i].n1);
		printf("digite o valor do segundo campo da estrutura: ");
			scanf("%d", &vet[i].n2); 
		vet[i].n3 = (vet[i].n1 * 2) + (vet[i].n2 *2);
			printf("o valor do terceiro eh: %d\n", vet[i].n3); 

	}
}
int conta(struct parte vet[], int n2){
	int i, soma=0;
	for(i = 0; i<n2;i++){
		if((i +1) %2 != 0){ 
			soma += vet[i].n3; 
			}
		}
	return soma;
}

void mostra(struct parte vet[], int n2){
	int i;
	for(i = 0; i < n2; i++){
		printf("campo 1 da posicao %d estrutura %d\n", i, vet[i].n1);
		printf("campo 2 da posicao %d estrutura %d\n", i, vet[i].n2);
		printf("campo 3 da posicao %d estrutura %d\n", i, vet[i].n3);
	}
}