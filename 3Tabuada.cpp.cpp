/*
	Name: tabuada.cpp
	Author: Chacal
	Date: 01/11/19 09:11
	Description: exibir a tabuada de multipli��o exibida pelo usuario
*/

#include<stdio.h>
#include<conio.H>
#include<locale.h>//localidade

main()
{
	
	int numero;
	  setlocale(LC_ALL,"Portuguese");
	printf("Quer fazer tabuada de qual n�mero? \n");
	scanf("%d", &numero);
	for(int i=1;i<=10;i++)
	printf("%d X %d = %d\n", numero, i, i*numero);
	
	
	printf("CONCLU�DO... Parab�ns");
}//fim do programa
