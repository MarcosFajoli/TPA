/*
Função: Exercício 4 - Calcular o quadrado da soma de 3 números inteiros
Autor: Marcos Fajoli de Almeida
Data de Criação: 26/09/2019
Data de Alteração: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");
	int n1 = 0, n2 = 0, n3 = 0, resul = 0;
	printf("Insira o primeiro número: ");
	scanf("%i", &n1);
	printf("Insira o segundo número: ");
	scanf("%i", &n2);
	printf("Insira o terceiro número: ");
	scanf("%i", &n3);
	resul = (n1 + n2 + n3) * (n1 + n2 + n3);
	printf("O quadrado da soma dos números inseridos é %i \n", resul);
}
