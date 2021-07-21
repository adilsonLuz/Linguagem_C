/*
	Name: FunçãoTabuada.cpp
	Author: Adilson Luz (Chacal)
	Date: 11/05/20 15:14
	Description: Programa que usa função para imprimir a tabuada.
*/



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int Tabuada(int);//Prototipação

main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	int x=0;
	
	puts("\n\n-------Tabuada de multiplicação-------\n\n");
	printf("Deseja exibir a tabuada de qual número?\nDigite um número. ");
	scanf("%d",&x);//lê número digitado
	puts("");
	printf("",Tabuada(x));//INVOKE, imprime resultado da potenciação.
	printf("\n\nCONCLUÍDO...\n\n");
}

int Tabuada(int x)
{
	int i=1;
	while(i<=10)
	{	
	printf("%d X %2d = %2d\n",x,i,i*x);
	i++;
	}
	
	
}

