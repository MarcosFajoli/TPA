/*
Função: Exercício 3 - Calcular a área de um círculo
Autor: Marcos Fajoli de Almeida
Data de Criação: 26/09/2019
Data de Alteração: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");
	float raio, area;
	printf("Insira o raio do círculo: ");
	scanf("%f", &raio);
	area = raio * raio * 3.14;
	printf("A área do circulo é %f \n", area);
	system("pause");
}
