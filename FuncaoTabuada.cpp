/*
	Name: Fun��oTabuada.cpp
	Author: Adilson Luz (Chacal)
	Date: 11/05/20 15:14
	Description: Programa que usa fun��o para imprimir a tabuada.
*/



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int Tabuada(int);//Prototipa��o

main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	int x=0;
	
	puts("\n\n-------Tabuada de multiplica��o-------\n\n");
	printf("Deseja exibir a tabuada de qual n�mero?\nDigite um n�mero. ");
	scanf("%d",&x);//l� n�mero digitado
	puts("");
	printf("",Tabuada(x));//INVOKE, imprime resultado da potencia��o.
	printf("\n\nCONCLU�DO...\n\n");
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

