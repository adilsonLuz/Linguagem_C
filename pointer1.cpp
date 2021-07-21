/*
	Name: Pointer1.cpp
	Author: Adilson Luz (Chacal)
	Date: 27/06/20 11:06
	Description: Programa para demonstrar ponteiros e seus endereços
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
	
	int valor,*pointer1, w;
	char vet[4]={'D','A','V','I'};
	float preco,*pointer2;
	
	//inteiros
	valor=7;
	pointer1=&valor;
	w=*pointer1;//recebe o conteúdo apontado por pointer1 quando usa asteristico
	
	//reias
	preco=13.79;
	pointer2=&preco;
	
	//vetor

	
	puts("Variaveis int:\n\n");
	printf("Endereço na memoria da variavel comum VALOR: %p",&valor);
	printf("\nMostrando o conteudo do ponteiro POINTER1: %p",pointer1);
	
	printf("\nEndereço na memoria da variavel ponteiro POINTER1:%p",&pointer1);
	printf("\nConteudo da variavel apontada por POINTER1: %d",*pointer1);
	printf("\nConteudo da variavel comum W: %d",w);
	
	puts("\n\nVariaveis float:\n\n");
	
	printf("Endereço na memoria da variavel comum PRECO: %p",&preco);
	printf("\nMostrando o conteudo do ponteiro POINTER2: %p",pointer2);
	printf("\nConteudo da variavel apontada por POINTER2: %.2f",*pointer2);
	
	puts("\n\nVariaveis tipo VETOR:\n\n");
	printf("\nEndereço na memoria da variavel comum VET: %p",&vet);
	printf("\nEndereço na memoria da variavel VET: %s",vet);
	
}


//Sessão de funções






