/*
Fun��o: Exerc�cio 7 - Calcular o valor de um sal�rio com aumento
Nome: Marcos Fajoli de Almeida
Data de Cria��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float salario = 0, aumento = 0, salarioF = 0;
	printf("Insira o atual sal�rio: ");
	scanf("%f", &salario);
	printf("Insira a porcentagem de aumento: ");
	scanf("%f", &aumento);
	salarioF = salario + salario * (aumento/100);
	printf("O novo sal�rio � %f \n", salarioF);
	system("pause");
}
