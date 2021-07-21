/*
	Name: Fibonacci
	Author: Adilson Luz
	Date: 29/04/20 11:01
	Description: Programa que executa a sequencia Fibonacci
*/

#include<stdio.h>
#include<conio.H>
#include<locale.h>

main()
{
	int num, i, ultimo, penultimo, proximo;
	num=i=ultimo=0;penultimo=1;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Deseja executar quantas sequências Fibonacci?\n\n");
	scanf("%d",&num);
	
	
	if(num==0){
		printf("0");		
	}
		else if(num==1){
			printf("1");
		}
			else{
				printf("\n%d, %d",ultimo,penultimo);
				do{
				proximo=penultimo+ultimo;
				ultimo=penultimo;
				penultimo=proximo;
				i++;
				printf(", %d", proximo);
			}
			while(i<num-2);
			}
return 0;
}//Fim do progama
