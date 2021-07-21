/*
	Name: Fibonacci
	Author: Adilson Luz (Chacal)
	Date: 07/07/2020 16:55
	Description: Programa que armazena codigo Fibonacci em vetor.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//Sess�o de Prototipa��o
int calcularFibonacci(int);
int mostrarElemento(int);
//Variaveis globais


main()
{
	setlocale(LC_ALL,"Portuguese");//incluindo portugues Brasil
			
	int i, sequencia; //variaveis locais
	
	printf("Quantos elementos da sequencia Fibonacci deseja ver?\n");
	scanf("%d",&i);	//armazena a quantidade de elementos que o usuario digitou
	
	int vet[i];//inicializa o vetor
	
	if(i>40){//define o numero maximo de sequencias a ser exibido
		printf("\nImpossivel exibir, estouro de mem�ria!!!\nEscolha um n�mero menor.\n");//exibe menssaem de erro
		system("color 97");//tela azul
		exit(0);//finaliza o programa
	}
		else{
		for(int x=0;x<i;x++){//carrega o vetor
			vet[x]=calcularFibonacci(x+1);
		}
		printf("\nAs %d sequ�ncias de Fibonacci s�o:\n\n",i);
		
		for(int x=0;x<i;x++){//imprime o vetor com a sequencia Fibonacci
		printf("%d  ",vet[x]);
		}
		}
		printf("\n\nQual elemento da sequencia Fibonacci gostaria de exibir?\n");
		scanf("%d",&sequencia);
	
	if(sequencia>40){//define o numero maximo de sequencias a ser exibido
		printf("Impossivel exibir, estouro de mem�ria!!!\nEscolha um n�mero menor.");//exibe menssaem de erro
		system("color 97");//tela azul
		exit(0);//finaliza o programa
	}
		else{
			printf("O %d� elemento da sequencia Fibonacci �: %d",sequencia,vet[sequencia-1]);//imprime o elemento Fibonacci que o usuario escolheu
		}

}


//Sess�o de fun��es


int calcularFibonacci(int fibo)
{
	
	if(fibo==1 || fibo==2){//determina condi��o de parada
		return 1;
	}
		else{
			return calcularFibonacci(fibo-1)+calcularFibonacci(fibo-2);//Invoke... recursividade direta calculando as sequncias
		}
		
}

