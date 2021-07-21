/*
	Name: 
	Copyright: 
	Author: 
	Date: 10/03/20 11:21
	Description: 
*/

#include<stdio.h>
#include<conio.h>

	//Sessão de prototipação
	int somar(int,int);
	int multiplicar(int,int);
	int subtrair(int,int);
	float dividir(int,int);

main()

{
	int a, b, total, multi, sub;
	float div;
	
	a=b=total=multi=sub=0;
	div=0.0;
	
	printf("Digite o valor de a:");
	scanf("%d",&a);
	printf("Digite o valor de b:");
	scanf("%d",&b);
	total=somar(a,b);
	sub=subtrair(a,b);
	multi=multiplicar(a,b);
	div=dividir(a,b);
	printf("\n\nA soma e: %d",total);
	printf("\n\nA subtracao e: %d",sub);
	printf("\n\nA multiplicacao e: %d",multi);
	printf("\n\nA divisao e: %.2f",div);
	
	
}

int somar(int a, int b)
{
	
	int soma;
	soma=a+b;
	return soma;	
}

int multiplicar(int a, int b)
{
	
	int multi;
	multi=a*b;
	return multi;	
}

int subtrair(int a, int b)
{
	
	int sub;
	sub=a-b;
	return sub;	
}

float dividir(int a, int b)
{
	
	float div;
	div=(float)a/b;// casting
	return div;	
}
