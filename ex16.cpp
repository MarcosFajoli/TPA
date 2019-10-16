/*
Função: Exercício 16 - Verifica se o aluno reprova ou não
Nome: Marcos Fajoli de Almeida
Data de Criação: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float nota = 0;
	char nome[30] = "";
	printf("Digite o nome do aluno: ");
	gets(nome);
	fflush(stdin);
	printf("Digite a nota do aluno: ");
	scanf("%f", &nota);
	if(nota < 7){
		printf("O aluno %s foi reprovado. ", nome);
	}else{
		printf("O aluno %s foi aprovado. ", nome);
	}
	system("pause");
}
