/*
	Name: Exercicio1NumerosParImpar
	Author: Adilson Luz (Chacal)
	Date: 09/06/20 10:09
	Description: Programa que le 10 numeros e mostra pares e impares e maiores que 10 por meio de funções
*/



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//Sessão de Prototipação
int exibirImpares(int [10]);
int exibirPares(int [10]);
int exibirMaiores(int [10]);

//Variaveis globais


main()
{
	setlocale(LC_ALL,"Portuguese");//incluindo portugues Brasil
	//variaveis locais
	int numeros[10];
	
	printf("Digite dez numeros inteiros\n");
	for(int i=0;i<10;i++){
		scanf("%d",&numeros[i]);
	}
	printf("Os números impares são:\n\n");
	exibirImpares(numeros);
	printf("\n\nOs números pares são:\n\n");
	exibirPares(numeros);
	printf("\n\nOs números maiores que 10 são:\n\n");
	exibirMaiores(numeros);
	
	
}


//Sessão de funções

int exibirImpares(int impar[10])
{
	int vetImpar[10];
	memset(vetImpar, 0 , sizeof(vetImpar));
	for(int i=0;i<10;i++){
		if((impar[i] % 2) == 1){
			vetImpar[i]=impar[i];
		}
	}	
	for(int i=0;i<10;i++){
	printf(" %d",vetImpar[i]);
	} 
}


int exibirPares(int par[10])
{

	int vetPar[10];
	memset(vetPar, 0 , sizeof(vetPar));
	for(int i=0;i<10;i++){
		if((par[i] % 2) == 0){
			vetPar[i]=par[i];
		}
	}	
	for(int i=0;i<10;i++){
	printf(" %d",vetPar[i]);
	} 	
	
	
}


int exibirMaiores(int maior[10])
{
	int vetMaior[10];
	memset(vetMaior, 0 , sizeof(vetMaior));
	for(int i=0;i<10;i++){
		if(maior[i]>10){
			vetMaior[i]=maior[i];
		}
	}	
	for(int i=0;i<10;i++){
	printf(" %d",vetMaior[i]);
	} 
	
	
	
	
}



