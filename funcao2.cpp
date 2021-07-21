/*
	Name: 
	Copyright: 
	Author: 
	Date: 10/03/20 11:19
	Description: 
*/


#include<stdio.h>
#include<conio.h>

	//Sessão de prototipação
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

int somar(int x, int y)
{
	
	int soma;
	soma=x+y;
	return soma;
	
}
