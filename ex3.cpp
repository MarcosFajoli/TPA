/*
Fun��o: Exerc�cio 3 - Calcular a �rea de um c�rculo
Autor: Marcos Fajoli de Almeida
Data de Cria��o: 26/09/2019
Data de Altera��o: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");
	float raio, area;
	printf("Insira o raio do c�rculo: ");
	scanf("%f", &raio);
	area = raio * raio * 3.14;
	printf("A �rea do circulo � %f \n", area);
	system("pause");
}
