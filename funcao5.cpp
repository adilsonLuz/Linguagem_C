/*
	Name: 
	Author: 
	Date: 10/03/20 12:31
	Description: 
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

	//Sessão de prototipação
	int somar(int,int);
	int multiplicar(int,int);
	int subtrair(int,int);
	float dividir(int,int);
	int potencializar(int,int);

main()

{
	int a, b, total, multi, sub, pot;
	float div;
	
	a=b=total=multi=sub=pot=0;
	div=0.0;
	
	printf("Digite o valor de a:");
	scanf("%d",&a);
	printf("Digite o valor de b:");
	scanf("%d",&b);
	total=somar(a,b);
	sub=subtrair(a,b);
	multi=multiplicar(a,b);
	div=dividir(a,b);
	pot=potencializar(a,b);
	printf("\n\nA soma e: %d",total);
	printf("\n\nA subtracao e: %d",sub);
	printf("\n\nA multiplicacao e: %d",multi);
	printf("\n\nA divisao e: %.2f",div);
	printf("\n\nA potencia de %d elevado a %d e %d",a,b,pot);
	
}

	int somar(int a, int b)
{
		return a+b;	
}

	int multiplicar(int a, int b)
{
		return a*b;
}

	int subtrair(int a, int b)
{
		return a-b;
}

	float dividir(int a, int b)
{
		return (float)a/b;// casting
}


	int potencializar(int a, int b)
{
		return pow(a,b);
}
