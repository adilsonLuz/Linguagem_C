/*
	Name: ParImpar.cpp
	Author: Chacal
	Date: 01/11/19 08:41
	Description: Programa para determinar se o numrero é par ou impar
*/

#include<stdio.h> // Standard input output
#include<conio.h> // Console input output
#include<locale.h>
main()

{
	setlocale(LC_ALL, "Portuguese");
	int num,quo, resto;
	num=quo=resto=0;
	printf("Qual número quer descobrir se é par ou impar?\n");
	scanf("%d", & num);
	quo =num/2;
	resto = num - (quo * 2);
	if(resto == 0)
	  puts("Número par!");
	  else
	  puts("Impar");
	
	
	
	
}// fim do programa
