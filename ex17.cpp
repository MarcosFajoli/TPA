/*
Fun��o: Exerc�cio 17 - Verifica se o n�mero � impar ou par
Nome: Marcos Fajoli de Almeida
Data de Cria��o: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int num = 0, res = 0;
	printf("Insira um n�mero: ");
	scanf("%i", &num);
	res = num - (num/2)*2;
	if(res == 0){
		printf("O n�mero %i � par. \n", num);
	}else{
		printf("O n�mero %i � impar. \n", num);
	}
	system("pause");
}
