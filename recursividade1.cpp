/*
	Name: Recursividade1.cpp
	Author: Adilson Luz (Chacal)
	Date: 26/05/20 10:04
	Description: Programa para demonstrar recursividade direta
*/


#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

//Sess�o de prototip��o
void exibir();

//variavel global
int i=0;

main ()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	exibir();//Invoke
	getch();//parar tela
}

//Sess�o de fun��es
void exibir()
{
	i++;
	printf("\ni: %d   ",i);
	if(i==5){
		return;
	}
	puts("Ol�...");
	getch();
	exibir();
	printf("Voltei %d�\n", i);
	getch();
}











