/*
	Name: ParImpar.cpp
	Author: Chacal
	Date: 01/11/19 08:41
	Description: Programa para determinar se o numrero � par ou impar
*/

#include<stdio.h> // Standard input output
#include<conio.h> // Console input output
#include<locale.h>
main()

{
	setlocale(LC_ALL, "Portuguese");
	int num,quo, resto;
	num=quo=resto=0;
	printf("Qual n�mero quer descobrir se � par ou impar?\n");
	scanf("%d", & num);
	quo =num/2;
	resto = num - (quo * 2);
	if(resto == 0)
	  puts("N�mero par!");
	  else
	  puts("Impar");
	
	
	
	
}// fim do programa
