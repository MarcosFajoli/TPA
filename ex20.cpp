/*
Fun��o: Exerc�cio 20 - Mostra o m�s
Nome: Marcos Fajoli de Almeida
Data de Cria��o: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int mes = 0;
	printf("Insira um m�s de 1 a 12: ");
	scanf("%i", &mes);
	
	switch(mes){
		case 1:
			printf("Janeiro. ");
			break;
		
		case 2:
			printf("Fevereiro. ");
			break;
			
		case 3:
			printf("Mar�o. ");
			break;
			
		case 4:
			printf("Abril. ");
			break;
			
		case 5:
			printf("Maio. ");
			break;
			
		case 6:
			printf("Junho. ");
			break;
			
		case 7:
			printf("Julho. ");
			break;
			
		case 8:
			printf("Agosto. ");
			break;
			
		case 9:
			printf("Setembro. ");
			break;
			
		case 10:
			printf("Outubro. ");
			break;
			
		case 11:
			printf("Novembro. ");
			break;
			
		case 12:
			printf("Dezembro. ");
			break;	
		
		default:
			printf("Esse m�s n�o existe. ");
	}
	printf("\n");
	system("pause");
}
