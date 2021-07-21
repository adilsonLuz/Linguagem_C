/*
	Name: PassagemParametroReferencia.cpp
	Author: Adilson Luz(Chacal)
	Date: 05/05/20 09:58
	Description: programa para demonstrar a utilização de funções com passagem de parâmetros por referência.
*/
#include<stdio.h>
#include<conio.h>
#include<locale.h>

void trocar(int,int);//Portotipação

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int a,b,soma;
	a=5;
	b=10;
	
	printf("A:%d\n", a);
	printf("B:%d\n", b);
	
	trocar(a,b);//INVOKE
	
	printf("A:%d\n", a);
	printf("B:%d\n", b);
	
	
}

void trocar(int a, int b)
{
	puts("Troca de valores dentro da função");
	int aux;
	aux=a;
	a=b;
	b=aux;
	printf("A:%d\n", a);
	printf("B:%d\n", b);
	
}
