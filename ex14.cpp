/*
Fun��o: Exerc�cio 14 - Mostra os inteiros em ordem decrescente
Nome: Marcos Fajoli de Almeida
Data de Cria��o: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	int n1 = 0, n2 = 0, n3 = 0;
	printf("Insira o primeiro n�mero: ");
	scanf("%i", &n1);
	printf("Insira o segundo n�mero: ");
	scanf("%i", &n2);
	printf("Insira o terceiro n�mero: ");
	scanf("%i", &n3);
	if(n1 >= n2 and n2 >= n3){
		printf("A sequ�ncia decrescente � %i, %i e %i", n1, n2, n3);
	}else if(n1 >= n3 and n3 >= n2){
		printf("A sequ�ncia decrescente � %i, %i e %i", n1, n3, n2);
	}else if(n2 >= n1 and n1 >= n3){
		printf("A sequ�ncia decrescente � %i, %i e %i", n2, n1, n3);
	}else if(n2 >= n3 and n3 >= n1){
		printf("A sequ�ncia decrescente � %i, %i e %i", n2, n3, n1);
	}else if(n3 >= n1 and n1 >= n2){
		printf("A sequ�ncia decrescente � %i, %i e %i", n3, n1, n2);
	}else{
		printf("A sequ�ncia decrescente � %i, %i e %i", n3, n2, n1);
	}
	system("pause");
}
