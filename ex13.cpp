/*
Função: Exercício 13 - Calcula o maior número entre os três digitados
Nome: Marcos Fajoli de Almeida
Data de Criação: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float a = 0, b = 0, c = 0;
	printf("Insira o primeiro número: ");
	scanf("%f", &a);
	printf("Insira o segundo número: ");
	scanf("%f", &b);
	printf("Insira o terceiro número: ");
	scanf("%f", &c);
	if(a >= b and a >= c){
		printf("O maior número é %f. \n", a);
	}else if(b >= a and b >= c){
		printf("O maior número é %f. \n", b);
	}else{
		printf("O maior número é %f. \n", c);
	}
	system("pause");
}
