## Seja bem vindo a Labs-C

Este espaço foi reservado para alocar alguns programinhas feitos para a faculdade, tem de exemplificar alguns conceitos e usabilidade da linguagem C. 


## Erros básicos, como corrigir

### Errado

```c
int main() {	
	System("PAUSE");
	return 0;
}
```

[Error] ld returned 1 exit status //system deve ser escrito todo em minusculo.

### Certo
```c
int main() {
	system("PAUSE");
	return 0;
}
```


#Falando sobre vetores

####Vetor - Buscar um valor dentro de um vetor
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

####Vetor - Achar o Maior e o Menor valor em um vetor utlizando 
```c
#include <stdio.h>
#include <conio.h>

int main() {
	//variáveis de trabalho
    int vetor[5], i = 0, iMaior = 0, iMenor = 0, vMaior = 0, vMenor = 0;
	
	//receber os valores informados pelo usuário
    for(i =0; i < 5; i++)
    {
    	printf("Insira um valor para vetor[%d]", i);
    	scanf("%d", &vetor[i]);
	}

	i = 0;
    do {
        // descobrir o maior índice
        if (vetor[i] > vetor[iMaior]) {
            iMaior = i;
            vMaior = vetor[i];
        }

        // descobrir o menor índice
        if (vetor[i] < vetor[iMenor]) {
            iMenor = i;
            vMenor = vetor[i];
        }
        i++;
    } while (i < 5);

    // Mostra o maior índice
    printf(" \n\n O maior vetor[%d] é %d", iMaior, vMaior);

    // Mostra o menor índice
    printf(" \n\n O menor vetor[%d] é %d", iMenor, vMenor);

    return 0;
}
```