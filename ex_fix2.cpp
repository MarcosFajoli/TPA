/*
Fun��o: Exerc�cio de fixa��o 2 - Calcular os graus Celsius em Fahrenheit
Nome: Marcos Fajoli de Almeida
Data de Cria��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float cels = 0, fahr = 0;
	printf("Insira os graus Celsius: ");
	scanf("%f", &cels);
	fahr = (cels * 1.8) + 32;
	printf("A convers�o em Fahrenheit � %f \n", fahr);
	system("pause");
}
