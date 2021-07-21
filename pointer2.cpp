/*
	Name: pointer2
	Author: Adilson Luz (Chacal)
	Date: 30/06/20 10:25
	Description: programa para demonstrar ponteiros e seus endere�os
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//Sess�o de Prototipa��o


//Variaveis globais


main()
{
	setlocale(LC_ALL,"Portuguese");//incluindo portugues Brasil
	//variaveis locais
	int a=33;
	int *p1;
	int **p2;//ponteiro para ponteiro - operador de indire��o ou de derefer�ncia
	int ***p3;
	
	p1=&a;
	p2=&p1;
	p3=&p2;
	
	//p1 - conteudo do ponteiro p1
	//*p1 - conteudo da variavel apontado por p1
	//&p1 - endere�o de memoria do ponteiro p1(sempre em hexadecimal)
	
	printf("\nO endere�o da variavel A �: %p",&a); 
	printf("\nO endere�o na mem�ria do ponteiro P1 �: %p",&p1);
	printf("\nO endere�o de P2 na mem�ria �: %p",&p2);
	printf("\nO endere�o apontado por P1: %p",p1);
	printf("\nO endere�o apontado por P2: %p",p2);
	printf("\nO conteudo armazenado em A(p1): %d",*p1);
	printf("\nO conteudo armazenado em A(p2): %d",**p2);
	printf("\nO conteudo armazenado em A(p3): %d",***p3);
	
	
	
	printf("\n\n\n\n");
}


//Sess�o de fun��es





