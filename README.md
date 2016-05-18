# Seja bem vindo a Labs-C

Este espaço foi reservado para alocar alguns programinhas feitos para a faculdade, tem de exemplificar alguns conceitos e usabilidade da linguagem C. 


### Uso de bibliotecas 

#### Idioma português com acento
```c
//Biblioteca de idiomas
#include <locale.h>

int main() {
	//Setando o idioma
	setLocale(LC_ALL, "Portuguese");

	printf("Você já poderá utilizar acentos");
}
```
>Output> Você já poderá utilizar acentos


### Erros básicos, como corrigir

#### Errado

```c
int main() {	
	System("PAUSE");
	return 0;
}
```

[Error] ld returned 1 exit status //system deve ser escrito todo em minusculo.

#### Certo
```c
int main() {
	system("PAUSE");
	return 0;
}
```
###Operadores Lógicos

#####Menu de Opções com Switch e If

Proposto o desenvolvimento de um programa utilizando apenas Switch e if para realizar as solicitações de um menu de operações com as seguintes regras

1. Apresentar 3 valores em ordem crescente
1. Apresentar 3 valores em ordem descrescente
1. Apresentar apenas os valroes pares
1. Arpesentar aprenas os valores ímpares
1. Apresntar os valores positivos
1. Apresentar os valroes negativos
1. Apresentar o maior
1. Apresentar o menor
1. Teste de triângulo
1. calcular o comprimento de x, a área de y e o volume de z		
1. SAIR



```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

//Programa em desenvolvimento
void main()
{
	setlocale(LC_ALL, "Portuguese");

	int x, y, z, op, menu;
	
	menu = 0;
	while(menu != 11){
		printf(	"\n Código -  Operações \n"
			" =========================================================="
			"\n 1      => Apresentar 3 valores em ordem crescente"
			"\n 2      => Apresentar 3 valores em ordem descrescente "
			"\n 3      => Apresentar apenas os valroes pares "
			"\n 4      => Arpesentar aprenas os valores ímpares "
			"\n 5      => Apresntar os valores positivos "
			"\n 6      => Apresentar os valroes negativos "
			"\n 7      => Apresentar o maior "
			"\n 8      => Apresentar o menor "
			"\n 9      => Teste de triângulo "
			"\n 10     => calcular o comprimento de x, a área de y e o volume de z "			
			"\n 11     => SAIR "			
			"\n\n Qual operação você deseja realizar? ");
			scanf("%d", &op);
			
			//Verifica se a opção solicitada pelo usário está entre 1 e 10
			if((op >= 1) && (op <= 10)) { 
				printf("\n informe o x número: ");
				scanf("%d", &x);
				printf("\n informe o y número: ");
				scanf("%d", &y);
				printf("\n informe o z número: ");
				scanf("%d", &z);
				menu = 11;
			} else if (op == 11) { 
				//Limpo a tela e mostro a mensagem de agradecimento
				system("CLS"); 
				printf("\n\n\n\n Obrigada por participar \n\n\n\n");
				menu = op;
			} else { 
				//Informa que o usuário digitou uma opção invalida
				printf("\n\n Você informou uma opção inválida, tente novamente \n\n\n\n");
				
				//Dar pausa para que ele possa ler a mensagem, pede para coninuar, limpa a tela e retorna as opções do menu
				system("PAUSE");
				system("CLS");
			}
	}
	
	switch(op) {
		case 1:
			//Caso a operção atenda ao caso 1 - Limpa-se e exibe o resultado
			system("CLS");
			if ((x != y ) && (x != z) && (y != z))
				{
					if ((x<= y ) && (x<= z) && (y<= z))
					{				
					printf ("%d e o menor valor.\n", x);
					printf ("%d e o medio valor.\n", y);
					printf ("%d e o maior valor.\n", z);
					}
					if ((x<= y ) && (x<= z) && (z<= y ))
					{
					printf ("%d e o menor valor.\n", x);
					printf ("%d e o medio valor.\n", z);
					printf ("%d e o maior valor.\n", y);		
					}
					if ((y<= x) && (y<= z) && (x <= z))
					{
					printf ("%d e o menor valor.\n", y);
					printf ("%d e o medio valor.\n", x);
					printf ("%d e o maior valor.\n", z);		
					}
					if ((y<= x) && (y<= z) && (z<= x))
					{
					printf ("%d e o menor valor.\n", y);
					printf ("%d e o medio valor.\n", z);
					printf ("%d e o maior valor.\n", x);		
					}
					if ((z<= x) && (z<= y ) && (y<= x))
					{
					printf ("%d e o menor valor.\n", z);
					printf ("%d e o medio valor.\n", y);
					printf ("%d e o maior valor.\n", x);		
					}
					if ((z<= x) && (z<= y ) && (x<= y ))
					{
					printf ("%d e o menor valor.\n", z);
					printf ("%d e o medio valor.\n", x);
					printf ("%d e o maior valor.\n", y);		
					}
				}
			else
				{
				printf ("\n\n Os valores devem ser diferentes um do outro.\n\n\n\n");
				}
			break;
		case 2:
			//Caso a operção atenda ao caso 1 - Limpa-se e exibe o resultado
			system("CLS");
			if ((x != y ) && (x != z) && (y != z))
				{
					if ((x<= y ) && (x<= z) && (y<= z))
					{				
						printf ("%d - %d - %d \n", x, y, z );
					}
					if ((x<= y ) && (x<= z) && (z<= y ))
					{
						printf ("%d - %d - %d \n", x, z, y );		
					}
					if ((y<= x) && (y<= z) && (x <= z))
					{
						printf ("%d - %d - %d \n", y, x, z );		
					}
					if ((y<= x) && (y<= z) && (z<= x))
					{
						printf ("%d - %d - %d \n", y, z, x );		
					}
					if ((z<= x) && (z<= y ) && (y<= x))
					{
						printf ("%d - %d - %d \n", z, y, x );		
					}
					if ((z<= x) && (z<= y ) && (x<= y ))
					{
						printf ("%d - %d - %d \n", z, x, y );		
					}
				}
			else
				{
				printf ("\n\n Os valores devem ser diferentes um do outro.\n\n\n\n");
				}
			break;
		case 3:
			if(x%2==0) {
				printf("%d é um número PAR \n", x);
			} 
			if(y%2==0) {
				printf("%d é um número PAR \n", y);
			} 
			if(z%2==0) {
				printf("%d é um número PAR \n", z);
			} 						
			break;
		case 4:
			if(x%2!= 0) {
				printf("%d é um número IMPAR \n", x);
			}
			if(y%2!=0) {
				printf("%d é um número IMPAR \n", y);
			} 
			if(z%2!=0) {
				printf("%d é um número IMPAR \n", z);
			} 						
			break;
		case 5:
			printf("Apresntar os valores positivos");
			break;
		case 6:
			printf("Apresentar os valroes negativos");
			break;
		case 7:
			printf("Apresentar o maior");
			break;
		case 8:
			printf("Apresentar o menor");
			break;
		case 9:
			printf("Teste de triângulo");
			break;
		case 10:
			printf("calcular o comprimento de x, a área de y e o volume de z");
			break;
		case 11:
			break;																																	
		default:
			break;																																	
	}	
	//system("PAUSE");
}
```


###Falando sobre vetores

#####Vetor - Buscar um valor dentro de um vetor
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

#####Vetor - Achar o Maior e o Menor valor em um vetor utlizando 
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
