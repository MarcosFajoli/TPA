/*
Função: Exercício 12 - Calcula o maior número entre os dois digitados
Nome: Marcos Fajoli de Almeida
Data de Criação: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float a = 0, b = 0;
	printf("Insira o primeiro número: ");
	scanf("%f", &a);
	printf("Insira o segundo número: ");
	scanf("%f", &b);
	if(a > b){
		printf("O maior número é %f. \n", a);
	}else if(b > a){
		printf("O maior número é %f. \n", b);
	}else{
		printf("Os números são iguais. \n");
	}
	system("pause");
}
