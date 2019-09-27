/*
Função: Exercício 1 - Calcular a área de um retângulo
Autor: Marcos Fajoli de Almeida
Data de Criação: 26/09/2019
Data de Alteração: 26/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float alt = 0, larg = 0, area = 0;
	printf("Insira a altura do retângulo: \n");
	scanf("%f", &alt);
	printf("Insira a largura do retângulo: \n");
	scanf("%f", &larg);
	area = alt * larg;
	printf("A área do retângulo é %f \n", area);
	system("pause"); 
}
