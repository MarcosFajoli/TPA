/*
Função: Exercício 17 - Verifica se o número é impar ou par
Nome: Marcos Fajoli de Almeida
Data de Criação: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int num = 0, res = 0;
	printf("Insira um número: ");
	scanf("%i", &num);
	res = num - (num/2)*2;
	if(res == 0){
		printf("O número %i é par. \n", num);
	}else{
		printf("O número %i é impar. \n", num);
	}
	system("pause");
}
