/*
Fun��o: Exerc�cio 4 - Calcular o quadrado da soma de 3 n�meros inteiros
Autor: Marcos Fajoli de Almeida
Data de Cria��o: 26/09/2019
Data de Altera��o: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");
	int n1 = 0, n2 = 0, n3 = 0, resul = 0;
	printf("Insira o primeiro n�mero: ");
	scanf("%i", &n1);
	printf("Insira o segundo n�mero: ");
	scanf("%i", &n2);
	printf("Insira o terceiro n�mero: ");
	scanf("%i", &n3);
	resul = (n1 + n2 + n3) * (n1 + n2 + n3);
	printf("O quadrado da soma dos n�meros inseridos � %i \n", resul);
}
