/*
Função: Exercício de fixação 2 - Calcular os graus Celsius em Fahrenheit
Nome: Marcos Fajoli de Almeida
Data de Criação: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	int dNasc = 0, dAtual = 0, idadeA = 0, idadeD = 0;
	printf("Insira o ano de nascimento: ");
	scanf("%i", &dNasc);
	printf("Insira o ano atual: ");
	scanf("%i", &dAtual);
	idadeA = dAtual - dNasc;
	idadeD = idadeA * 365;
	printf("A idade em anos é %i e em dias é %i. \n", idadeA, idadeD);
	system("pause");
}
