/*
	Name: Função Potência.cpp
	Author: Adilson Luz (Chacal)
	Date: 09/05/20 14:26
	Description: Programa que utiliza uma função para calcular
	a potência a partir de base e expoente digitado pelo usuário.
*/



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int Potencia(int,int);//Prototipação

main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	int x,y;
	
	puts("\n\n-----------Cálculo de Potência-----------\n\n");
	puts("De qual número deseja a potencia?\nDigite um número inteiro.\n");
	scanf("%d",&x);//lê base
	puts("\nDeseja elevar este número a qual potência?\nDigite um numero inteiro não negativo.\n");
	scanf("%d",&y);//lê expoente
	
	printf("\nA potência %d elevado a %d é igual a %d\n",x,y,Potencia(x,y));//INVOKE, imprime resultado da potenciação.
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


