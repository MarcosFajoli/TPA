/*
Fun��o: Exerc�cio 2 - Calcular a �rea de um tri�ngulo ret�ngulo
Autor: Marcos Fajoli de Almeida
Data de Cria��o: 26/09/2019
Data de Altera��o: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float base = 0, alt = 0, area = 0;
	printf("Insira a base do tri�ngulo: ");
	scanf("%f", &base);
	printf("Insira a altura do tri�ngulo: ");
	scanf("%f", &alt);
	area = (base * alt) / 2;
	printf("A �rea do tri�ngulo � %f \n", area);
	system("pause");	
}
