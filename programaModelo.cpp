/*
	Name: 
	Author: Adilson Luz (Chacal)
	Date: 
	Description: 
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define TAM 10			//Define valor 10 na variavel TAM

using namespace std;	//para usar COUT e CIN do C++

//Sessão de Prototipação

void imprimirVetor(int []);




//Variaveis globais



main()
{
	setlocale(LC_ALL,"Portuguese");//incluindo portugues Brasil
	//variaveis locais
	
	
	
}


//Sessão de funções

void imprimirVetor(int vt[TAM]){
		
		puts(" ");
	for(int i=0;i<TAM;i++){
		printf("|%d|",vt[i]);
	}
	puts(" ");
}










