/*
Fun��o: Exerc�cio 15 - Identifica um nadador pela sua idade
Nome: Marcos Fajoli de Almeida
Data de Cria��o: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int idade = 0;
	printf("Digite a idade: ");
	scanf("%i", &idade);
	if(idade >= 18){
		printf("A categoria dessa idade � a Adultos. \n");
	}else if(idade >= 12){
		printf("A categoria dessa idade � a Juvenil. \n");
	}else if(idade >= 5){
		printf("A categoria dessa idade � a Infantil. \n");
	}else{
		printf("Voc� n�o est� em nenhuma categoria. \n");
	}
	system("pause");
}
