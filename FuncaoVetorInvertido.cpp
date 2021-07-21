/*
	Name: FuncaoVetorInvertido.cpp
	Author: Adilson Luz (Chacal)
	Date: 10/05/20 22:09
	Description: Programa que carrega um vetor com dez posições
	e utiliza uma função que imprime o vetor invertido.
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int Inverter(int vet[]);//Prototipação

main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	int n=1,vet[10];
	
	puts("\n\n-----------IMPRESSÃO INVERTIDA-----------\n\n");
	printf("A seguir digite 10 números.\n\n");
	for(int i=0;i<10;i++)
	{
		printf("%2dº número: ",n);
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
		printf("%2dº número %d\n",n,vet[i]);
		n++;	
	}
	
	}
