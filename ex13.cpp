/*
Fun��o: Exerc�cio 13 - Calcula o maior n�mero entre os tr�s digitados
Nome: Marcos Fajoli de Almeida
Data de Cria��o: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float a = 0, b = 0, c = 0;
	printf("Insira o primeiro n�mero: ");
	scanf("%f", &a);
	printf("Insira o segundo n�mero: ");
	scanf("%f", &b);
	printf("Insira o terceiro n�mero: ");
	scanf("%f", &c);
	if(a >= b and a >= c){
		printf("O maior n�mero � %f. \n", a);
	}else if(b >= a and b >= c){
		printf("O maior n�mero � %f. \n", b);
	}else{
		printf("O maior n�mero � %f. \n", c);
	}
	system("pause");
}
