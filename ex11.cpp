/*
Fun��o: Exerc�cio 11 - Verifica uma condi��o e se esta for v�lida exibe o cubo.
Nome: Marcos Fajoli de Almeida
Data de Cria��o: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float n = 0, cubo = 0;
	printf("Insira um n�mero: ");
	scanf("%f", &n);
	if(n > 5 and n < 20){
		cubo = n*n*n;
		printf("O cubo de %f � %f. \n", n, cubo);
	}
	system("pause");
}
