#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");

	int x[10], i=0, vBuscado=0,busca=0;
	x[0] = 1;
	x[1] = 3431;
	x[2] = 431;
	x[3] = 14;
	x[4] = 156;
	x[5] = 771;
	x[6] = 21;
	x[7] = 61;
	x[8] = 51;
	x[9] = 133;
	

	printf("\n Que valor deseja buscar no vetor? ");
	scanf("%d", &vBuscado);	
	
	do {
		busca = x[i];
		if(busca == vBuscado) {
			printf("\n\n\n\n este valor encontra-se na posição x[%d] \n\n\n\n", i);
		} 
		i++;
	} while(i <= 9);

}
