/*
	Name: Fun��o Pot�ncia.cpp
	Author: Adilson Luz (Chacal)
	Date: 09/05/20 14:26
	Description: Programa que utiliza uma fun��o para calcular
	a pot�ncia a partir de base e expoente digitado pelo usu�rio.
*/



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int Potencia(int,int);//Prototipa��o

main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	int x,y;
	
	puts("\n\n-----------C�lculo de Pot�ncia-----------\n\n");
	puts("De qual n�mero deseja a potencia?\nDigite um n�mero inteiro.\n");
	scanf("%d",&x);//l� base
	puts("\nDeseja elevar este n�mero a qual pot�ncia?\nDigite um numero inteiro n�o negativo.\n");
	scanf("%d",&y);//l� expoente
	
	printf("\nA pot�ncia %d elevado a %d � igual a %d\n",x,y,Potencia(x,y));//INVOKE, imprime resultado da potencia��o.
}

int Potencia(int x, int y)
{
	int i=0,pot=1;
	while(i!=y)
	{
		
		pot=pot*x;
		i++;
	}
	return pot;
}


