/*
	Name: vetorString.cpp
	Author: Adilson Luz
	Date: 19/05/20 11:36
	Description: Carregar um vetor com string e passar para função.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void imprimirVetorTexto(char [][4]);



main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	char dias[][4]={"seg","Ter","Qua","Qui","Sex","Sab","Dom"};
	
	printf("Vetor carregado");
	imprimirVetorTexto(dias);
	
	
	
}

void imprimirVetorTexto(char semana[][4])
{
	
	for(int i=0;i<7;i++){
		printf("\n%s",semana[i]);
	}
	
	
	
}

