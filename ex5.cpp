/*
Função: Exercício 5 - Calcular o preço de um terreno retangular
Nome: Marcos Fajoli de Almeida
Data de Criação: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float larg = 0, comp = 0, valorM2 = 0, valorTer = 0;
	printf("Insira a largura do terreno: ");
	scanf("%f", &larg);
	printf("Insira o comprimento do terreno: ");
	scanf("%f", &comp);
	printf("Insira o valor do metro quadrado: ");
	scanf("%f", &valorM2);
	valorTer = (larg * comp) * valorM2;
	printf("O valor do terreno é de %f reais. \n", valorTer);
	system("pause");
}
