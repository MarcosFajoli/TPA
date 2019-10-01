/*
Função: Exercício 7 - Calcular o valor de um salário com aumento
Nome: Marcos Fajoli de Almeida
Data de Criação: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float salario = 0, aumento = 0, salarioF = 0;
	printf("Insira o atual salário: ");
	scanf("%f", &salario);
	printf("Insira a porcentagem de aumento: ");
	scanf("%f", &aumento);
	salarioF = salario + salario * (aumento/100);
	printf("O novo salário é %f \n", salarioF);
	system("pause");
}
