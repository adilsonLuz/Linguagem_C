/*
	Name: Exercicio3RecursividadeDireta
	Author: Adilson Luz (Chacal)
	Date: 09/06/20 10:03
	Description: Programa que l� dois n�meros e usa recursividade imprimindo at� o maior chegar no menor
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//Sess�o de Prototipa��o
int reduzirNumeros(int,int);


main()
{
	setlocale(LC_ALL,"Portuguese");//incluindo portugues Brasil
	//variaveis locais
	int primeiro,segundo;
	
	puts("Vamos mostrar uma sequencia de n�meros reduzindo at� o maior chegar no menor?\n");
	printf("Digite o primeiro n�mero inteiro\n");
	scanf("%d",&primeiro);
	printf("Digite um n�mero inteiro maior que o primeiro\n\n");
	scanf("%d",&segundo);
	printf("\nsequencia reduzida �:\n");
	reduzirNumeros(primeiro,segundo);//Invoke
}


//Sess�o de fun��es
int reduzirNumeros(int pri, int sec)
{
	if(pri==sec+1){
		printf("Conclu�do!!!");
	}
		else{
			printf("%d\n",sec);
			return reduzirNumeros(pri,--sec);
		}	
	
}




