#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

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
			printf("Os números positivos são \n\n");
			if(x > 0) {
    			printf("%d -", a);
			}
			if(x > 0) {
    			printf("%d -", a);
			}
			if(x > 0) {
    			printf("%d ", a);
			}
			
			break;
		case 6:
			printf("Os números negativos são \n\n");
			if(x < 0) {
    			printf("%d -", a);
			}
			if(x < 0) {
    			printf("%d -", a);
			}
			if(x < 0) {
    			printf("%d ", a);
			}
			break;
		case 7:
			if(x > y && x > z) {
        		printf("%d", x);
    		}
			else if(y>x && y>z) {
	        		printf("%d", y);
			} else {
				printf("%d", z);
			}
			break;
		case 8:
			if(x < y && x < z) {
        		printf("%d", x);
    		}
			else if(y < x && y < z) {
	        		printf("%d", y);
			} else {
				printf("%d", z);
			}
			break;
		case 9:
			printf("Teste de triângulo \n\n");
			if (x+y>z && x+z>y && y+z>x ) {
				printf("formar um triangulo");
			} else if(x+y==z && x+z==y && y+z==x) {
				printf("triangulo eqüilátero");
			} else if( x+y==z && x+z==y && y+z!=x ) {
				printf( "triangulo Isóscelos" );
			} else if ( x+y!=z && x+z!=y && y+z!=x ) {
				printf("triangulo Escaleno");
			}			
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

