/*
Fun��o: Exerc�cio 9.2 - Verifica se � maior que 100, se for, some 150
Nome: Marcos Fajoli de Almeida
Data de Cria��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float n;
	printf("Insira um n�mero: ");
	scanf("%f", &n);
	if(n > 100){
		n = n + 150;
	}
	printf("O valor do n�mero � %f \n", n);
	system("pause");
}
