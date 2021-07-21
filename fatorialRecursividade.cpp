/*
	Name: fatorial.cpp
	Author: Adilson Luz (chacal)
	Date: 02/06/20 09:35
	Description: Programa recursivo para calculo fatorial
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//Prototipação da função
int fat(int);


main()
{
	setlocale(LC_ALL,"Portuguese");
	int num,fatorial;
	num=fatorial=0;
	
	printf("Digite um número para calcular seu fatorial ");
	scanf("%d",&num);
	fatorial=fat(num);
	printf("O fatorial de %d! = %d",num,fatorial);
}


int fat(int num)
{
	if((num==1)||(num==0)){
		return 1;
	}
		else{
			return num*fat(num-1);
		}
}

