/*
	Name: ParametroVetorMatriz.cpp
	Author: Adilson Luz (Chacal)
	Date: 12/05/20 09:51
	Description: 
*/

//Sessão de prototipação
int exibirTabuada(int);
void inverterVetor(int []);
void calcular(int);

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int vet[5],i,c=1;

	//carga no vetor
	puts("\n\n\tDigite cinco valores\n\n");
	for(i=0;i<5;i++){
		printf("\t%dº Num: ",c);
		scanf("%d", &vet[i]);
		c++;
	}
	puts(" ");
	
		inverterVetor(vet);	
		
		puts("\nConteudo do vetor vet\n");
		for(i=0;i<5;i++){
			printf("%d ", vet[i]);
		}
}


int soma=3;



//Sessão de funções
void inverterVetor(int array[])
{
	int c=1;
	for(int i=4;i>=0;i--){
		printf("\t%dº número %d \n",c, array[i]);
		c++;
		array[i]=15;
	}
	printf("\nSoma: %d\n", soma);
	calcular(soma);
}

void calcular(int som)
{
	printf("\nVariável soma adiconada de 100: %d\n", som+100);
}




