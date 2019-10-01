/*
Função: Exercício 10 - Verifica se é negativo ou positivo
Nome: Marcos Fajoli de Almeida
Data de Criação: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float n = 0;
	printf("Insira um número: ");
	scanf("%f", &n);
	if(n < 0){
		printf("O número %f é negativo. \n", n);
	}else if(n > 0){
		printf("O número %f é positivo. \n", n);
	}else{
		printf("O número %f é zero. \n", n);
	}
	system("pause");
}
