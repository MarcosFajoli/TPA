/*
Fun��o: Exerc�cio 12 - Calcula o maior n�mero entre os dois digitados
Nome: Marcos Fajoli de Almeida
Data de Cria��o: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float a = 0, b = 0;
	printf("Insira o primeiro n�mero: ");
	scanf("%f", &a);
	printf("Insira o segundo n�mero: ");
	scanf("%f", &b);
	if(a > b){
		printf("O maior n�mero � %f. \n", a);
	}else if(b > a){
		printf("O maior n�mero � %f. \n", b);
	}else{
		printf("Os n�meros s�o iguais. \n");
	}
	system("pause");
}
