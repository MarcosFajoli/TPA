/*
Função: Exercício 6 - Calcular o valor de uma prestação em atraso
Nome: Marcos Fajoli de Almeida
Data de Criação: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	int tempo = 0;
	float valor = 0, taxa = 0, prestacao = 0;
	printf("Insira o valor da conta a se pagar: ");
	scanf("%f", &valor);
	printf("Insira a taxa por dia de atraso: ");
	scanf("%f", &taxa);
	printf("Insira o tempo de atraso em dias: ");
	scanf("%i", &tempo);
	prestacao = valor + (valor * (taxa / 100) * tempo);
	printf("O valor final da prestação é %f \n", prestacao);
	system("pause");
}
