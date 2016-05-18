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
