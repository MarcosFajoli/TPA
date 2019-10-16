/*
Função: Exercício 19 - Apresenta o preço e o nome de um determinado lanche
Nome: Marcos Fajoli de Almeida
Data de Criação: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int cod = 0;
	printf("Insira o código do lanche: ");
	scanf("%i", &cod);
	
	switch(cod){
		case 1:
			printf("Cachorro-Quente, R$3,50");
			break;
		
		case 2:
			printf("X-Salada, R$5,00");
			break;
			
		case 7:
			printf("X-Burguer, R$8,90");
			break;
			
		case 15:
			printf("X-Tudo, R$12,70");
			break;
			
		default:
			printf("Código Inválido");
	}
	printf("\n");
	system("pause");
}
