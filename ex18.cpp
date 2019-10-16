/*
Função: Exercício 18 - Mostra o dia da semana
Nome: Marcos Fajoli de Almeida
Data de Criação: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int dia = 0;
	printf("Insira um dia de 1 a 7: ");
	scanf("%i", &dia);
	
	switch(dia){
		case 1:
			printf("\nDomingo\n");
			break;
		
		case 2:
			printf("\nSegunda-Feira\n");
			break;
			
		case 3:
			printf("\nTerça-Feira\n");
			break;
			
		case 4:
			printf("\nQuarta-Feira\n");
			break;
			
		case 5:
			printf("\nQuinta-Feira\n");
			break;
			
		case 6:
			printf("\nSexta-Feira\n");
			break;
			
		case 7:
			printf("\nSábado\n");
			break;
			
		default:
			printf("\nEsse dia não existe. \n");
	}
	system("pause");
}
