/*
	Name: FuncaoVetorInvertido.cpp
	Author: Adilson Luz (Chacal)
	Date: 10/05/20 22:09
	Description: Programa que carrega um vetor com dez posi��es
	e utiliza uma fun��o que imprime o vetor invertido.
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int Inverter(int vet[]);//Prototipa��o

main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	int n=1,vet[10];
	
	puts("\n\n-----------IMPRESS�O INVERTIDA-----------\n\n");
	printf("A seguir digite 10 n�meros.\n\n");
	for(int i=0;i<10;i++)
	{
		printf("%2d� n�mero: ",n);
		scanf("%d",&vet[i]);
		n++;	
	}
	Inverter(vet);
}
	int Inverter(int vet[])
	{
		int n=1;
		puts("\nValores invertido\n");
		for(int i=9;i>=0;i--)
	{
		printf("%2d� n�mero %d\n",n,vet[i]);
		n++;	
	}
	
	}
