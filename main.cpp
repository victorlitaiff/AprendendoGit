#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30];
	char endereco[100];
	char telefone[11];		
	
	printf("Insira seu nome aqui: \n");
	fgets(nome, 30, stdin);

	printf("Insira seu endere�o aqui: \n");
	fgets(endereco, 100, stdin);
	
	printf("Insira seu telefone aqui com DDD: (Somente numeros) \n");
	fgets(telefone, 11, stdin);
	
	printf("Seus dados ser�o exibidos na tela \n");
	system("PAUSE");	
			
	printf("Seu nome � %s. \n", &nome);
	printf("Voc� mora no endere�o de %s. \n", &endereco);
	printf("Seu n�mero de telefone � %s. \n", &telefone);
	
	return 0;

}
