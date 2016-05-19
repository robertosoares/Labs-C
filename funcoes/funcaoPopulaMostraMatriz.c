#include <stdio.h>
#include <stdlib.h>

//Objetivo desta função é popular uma matriz e mostrar seu resultado através de fuções

//Função Popularizar Matriz
void popularMatriz(int linha, int coluna, int matriz[][0]){
	int l, c;
	
	for (l=0; l < linha; l++) {
		for(c=0;c <coluna;c++) {
			printf("matriz L[%d]C[%d] ", l, c);
			scanf("%d", &matriz[l][c]);
		}
	}
}

//Função Mostrar Matriz
void imprimeMatriz(int linha, int coluna, int matriz[][0]){
	int l, c;
	
	for (l=0; l < linha; l++) {
		for(c=0;c <coluna;c++) {
			printf("L[%d]C[%d] \n ", l, c);
		}
	}
}


int main(){
	//declaração das matrizes vazias
	int m1[0][0];
	int m2[0][0];
	
	
	//Popularizar a matriz M1 com 2 Linhas e 3 Colunas
	popularMatriz(2,3,m1);
	printf(" \n\n ");
	
	//Popularizar a matriz M2 com 5 Linhas e 2 Colunas
	popularMatriz(5,2,m2);
	printf(" \n\n ");
	
	//Mostrar a Matriz m1 populada
	imprimeMatriz(2,3,m1);
	

	system("PAUSE");
	
}



