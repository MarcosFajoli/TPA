/*
Função: Exercício 9.1 - Calcular o quociente e o resto de 2 inteiros
Nome: Marcos Fajoli de Almeida
Data de Criação: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	int n1 = 0, n2 = 0, res = 0, quo = 0;
	printf("Insira o dividendo: ");
	scanf("%i", &n1);
	printf("Insira o divisor: ");
	scanf("%i", &n2);
	quo = n1 / n2;
	res = n1 - (quo * n2);
	printf("O quociente da divisão é %i e o resto é %i. ", quo, res);
	system("pause");
}
