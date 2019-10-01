/*
Função: Exercício 11 - Verifica uma condição e se esta for válida exibe o cubo.
Nome: Marcos Fajoli de Almeida
Data de Criação: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float n = 0, cubo = 0;
	printf("Insira um número: ");
	scanf("%f", &n);
	if(n > 5 and n < 20){
		cubo = n*n*n;
		printf("O cubo de %f é %f. \n", n, cubo);
	}
	system("pause");
}
