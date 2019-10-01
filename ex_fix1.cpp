/*
Função: Exercício de fixação 1 - Calcular o IMC
Nome: Marcos Fajoli de Almeida
Data de Criação: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float peso = 0, altura = 0, imc = 0;
	printf("Insira a altura, em metros: ");
	scanf("%f", &altura);
	printf("Insira o peso, em quilogramas: ");
	scanf("%f", &peso);
	imc = peso / (altura * altura);
	printf("O IMC é igual a %f \n", imc);
	system("pause");
}
