/*
Função: Exercício 2 - Calcular a área de um triângulo retângulo
Autor: Marcos Fajoli de Almeida
Data de Criação: 26/09/2019
Data de Alteração: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float base = 0, alt = 0, area = 0;
	printf("Insira a base do triângulo: ");
	scanf("%f", &base);
	printf("Insira a altura do triângulo: ");
	scanf("%f", &alt);
	area = (base * alt) / 2;
	printf("A área do triângulo é %f \n", area);
	system("pause");	
}
