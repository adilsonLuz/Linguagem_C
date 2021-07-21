/*
	Name: 
	Copyright: 
	Author: 
	Date: 02/06/20 23:11
	Description: 
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int calcularFibonacci(int);

main()
{
int limite=0;
	 
	setlocale(LC_ALL,"Portuguese");
	
	printf("Quantos números da sequencia fibonacci deseja apresentar?\n");
	scanf("%d",&limite);
	printf("\nAs %d sequencias de Fibonacci são:\n",limite);
	for(int i=1;i<limite;i++){
		printf(" %d",calcularFibonacci(i));
	}
	printf("...");
	
}


int calcularFibonacci(int fibo)
{
	if(fibo==1 || fibo==2){
		return 1;
	}
		else{
			return calcularFibonacci(fibo-1)+calcularFibonacci(fibo-2);
		}
	
	
	
}
