/*
Fun��o: Exerc�cio 10 - Verifica se � negativo ou positivo
Nome: Marcos Fajoli de Almeida
Data de Cria��o: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float n = 0;
	printf("Insira um n�mero: ");
	scanf("%f", &n);
	if(n < 0){
		printf("O n�mero %f � negativo. \n", n);
	}else if(n > 0){
		printf("O n�mero %f � positivo. \n", n);
	}else{
		printf("O n�mero %f � zero. \n", n);
	}
	system("pause");
}
