/*
	Name: PassagemParametroReferencia.cpp
	Author: Adilson Luz(Chacal)
	Date: 05/05/20 09:58
	Description: programa para demonstrar a utilização de funções com passagem de parâmetros por referência.
*/
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int somar(int,int);//Portotipação

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int a,b,soma;
	a=5;
	b=10;
	soma=somar(a,b);//INVOKE
	printf("Valor da soma %d", soma);
	
}

int somar(int a, int b)
{
	return a+b;
}
