/*
Fun��o: Exerc�cio 1 - Calcular a �rea de um ret�ngulo
Autor: Marcos Fajoli de Almeida
Data de Cria��o: 26/09/2019
Data de Altera��o: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float alt = 0, larg = 0, area = 0;
	printf("Insira a altura do ret�ngulo: \n");
	scanf("%f", &alt);
	printf("Insira a largura do ret�ngulo: \n");
	scanf("%f", &larg);
	area = alt * larg;
	printf("A �rea do ret�ngulo � %f \n", area);
	system("pause"); 
}
