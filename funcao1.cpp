/*
	Name: Programa para exercitar a utiliza��o de fun��es
	Author: Adilson Luz
	Date: 10/03/20 11:00
	Description: 
*/

#include<stdio.h>
#include<conio.h>

	//Sess�o de prototipa��o
	int somar(int,int);

main()

{
	int a, b, total;
	a=b=total=0;
	
	printf("Digite o valor de a:");
	scanf("%d",&a);
	printf("Digite o valor de b:");
	scanf("%d",&b);
	total=somar(a,b);
	printf("A soma e: %d",total);
	
}

int somar(int a, int b)
{
	
	int soma;
	soma=a+b;
	return soma;
	
}
