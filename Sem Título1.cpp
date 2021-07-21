/*
	Name: Texto.cpp
	Author: Adilson Luz
	Date: 03/03/20 11:05
	Description: Pograma para manipular strings, ou seja um vetor de caracteres.
*/


#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main()
{ 
	char nome[20];
	char sobrenome[20];
	char cifrado[40];
	int i;
	 
	printf("Digite seu nome: ");
	gets(nome);
	
	printf("Digite seu sobrenome: ");
	gets(sobrenome);
	
	int x=0;
	for(i=0;i<40;i++)
	 {
	 	cifrado[x]=nome[i];
	 	cifrado[x+1]=sobrenome[i];
	 	x=x+2;
	 }
	 
	 for(i=0;cifrado[i]!='\0';i++)
	 	printf("%c,", cifrado[x]);
	 
	
}//Fim do programa
