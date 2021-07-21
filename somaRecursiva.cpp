/*
	Name: somaRecursiva.cpp
	Author: Adilson Luz (Chacal)
	Date: 26/05/20 12:13
	Description: Programa para demonstar uma soma recursiva
*/


#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

//Sessão de prototipação
int somarRec(int);


main()
{	
	setlocale(LC_ALL,"Portuguese");
	
	int total,num;
	total=num=0;
	
	num=0;
	total=somarRec(num);
	printf("O total é: %d", total);
	getch();
	
}


int somarRec(int x)
{
	
	
	if(x==10){
		return x;
	}
	printf("x: %d\n",x);
	getch();
	somarRec(++x);

	
	
}


