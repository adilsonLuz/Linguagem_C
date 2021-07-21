/*
	Name: Exercicio3RecursividadeDireta
	Author: Adilson Luz (Chacal)
	Date: 09/06/20 10:03
	Description: Programa que lê dois números e usa recursividade imprimindo até o maior chegar no menor
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//Sessão de Prototipação
int reduzirNumeros(int,int);


main()
{
	setlocale(LC_ALL,"Portuguese");//incluindo portugues Brasil
	//variaveis locais
	int primeiro,segundo;
	
	puts("Vamos mostrar uma sequencia de números reduzindo até o maior chegar no menor?\n");
	printf("Digite o primeiro número inteiro\n");
	scanf("%d",&primeiro);
	printf("Digite um número inteiro maior que o primeiro\n\n");
	scanf("%d",&segundo);
	printf("\nsequencia reduzida é:\n");
	reduzirNumeros(primeiro,segundo);//Invoke
}


//Sessão de funções
int reduzirNumeros(int pri, int sec)
{
	if(pri==sec+1){
		printf("Concluído!!!");
	}
		else{
			printf("%d\n",sec);
			return reduzirNumeros(pri,--sec);
		}	
	
}




