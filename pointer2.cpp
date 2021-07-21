/*
	Name: pointer2
	Author: Adilson Luz (Chacal)
	Date: 30/06/20 10:25
	Description: programa para demonstrar ponteiros e seus endereços
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//Sessão de Prototipação


//Variaveis globais


main()
{
	setlocale(LC_ALL,"Portuguese");//incluindo portugues Brasil
	//variaveis locais
	int a=33;
	int *p1;
	int **p2;//ponteiro para ponteiro - operador de indireção ou de dereferência
	int ***p3;
	
	p1=&a;
	p2=&p1;
	p3=&p2;
	
	//p1 - conteudo do ponteiro p1
	//*p1 - conteudo da variavel apontado por p1
	//&p1 - endereço de memoria do ponteiro p1(sempre em hexadecimal)
	
	printf("\nO endereço da variavel A é: %p",&a); 
	printf("\nO endereço na memória do ponteiro P1 é: %p",&p1);
	printf("\nO endereço de P2 na memória é: %p",&p2);
	printf("\nO endereço apontado por P1: %p",p1);
	printf("\nO endereço apontado por P2: %p",p2);
	printf("\nO conteudo armazenado em A(p1): %d",*p1);
	printf("\nO conteudo armazenado em A(p2): %d",**p2);
	printf("\nO conteudo armazenado em A(p3): %d",***p3);
	
	
	
	printf("\n\n\n\n");
}


//Sessão de funções





