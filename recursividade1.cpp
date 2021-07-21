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

//Sessão de prototipção
void exibir();

//variavel global
int i=0;

main ()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	exibir();//Invoke
	getch();//parar tela
}

//Sessão de funções
void exibir()
{
	i++;
	printf("\ni: %d   ",i);
	if(i==5){
		return;
	}
	puts("Olá...");
	getch();
	exibir();
	printf("Voltei %dº\n", i);
	getch();
}











