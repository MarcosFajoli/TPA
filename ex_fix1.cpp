/*
Fun��o: Exerc�cio de fixa��o 1 - Calcular o IMC
Nome: Marcos Fajoli de Almeida
Data de Cria��o: 30/09/2019
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
	printf("O IMC � igual a %f \n", imc);
	system("pause");
}
