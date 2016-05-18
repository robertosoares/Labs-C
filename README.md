# Labs-C
Labs em C - Faculdade

#Falando sobre vetores

###Vetor
1. Criar um vetor de 10 posições
1. Solicitar ao usuário que povoe o vetor
1. Solicitar ao usuário que busque um valor no vetor
1. Verificar se o valor existe no vetor e informar ao usuário sua posição

```c
#include <stdio.h>
#include <conio.h>

int main() {

	int vetor[10], i = 0, vBusca;
	
	//Solicitando a entrada de dados para o vetor
	for(i=0; i < 10; i++) {
		printf("Informe um valor para o vetor na posição v[%d] ", i);
		scanf("%d", &vetor[i]);
	}
	
	
	//Perguntando ao usuário qual valor deseja buscar
	system("CLS"); //Utilizando para limpar a tela
	
	printf("\n\n Qual valor deseja pesquisar no vetor: ");
	scanf("%d", &vBusca);
	
	
	//Verificando se o valoer existe no vetor
	system("CLS"); //Utilizando para limpar a tela
	
	for(i=0; i <= 10; i++){
		if(vBusca == vetor[i]) {
			printf("==> O valor %d existe no vetor na posição v[%d] \n", vBusca, i);
		} else {
			printf("O valor %d não existe na posição v[%d] do vetor \n", vBusca, i);
		}
	}
		
	system("PAUSE");
	return 0;
}
```
