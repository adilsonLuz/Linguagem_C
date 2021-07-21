/*
	Name: Matriz.cpp
	Author: Chacal
	Date: 22/11/19 07:55
	Description: Programa que manipula dadods em memoria do tipo matriz
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()

{
	int i,j,ordem,mat[4][4];
	i=j=0,ordem=4;
	setlocale(LC_ALL,"Portuguese");
	
	puts("Digite 16 números para carga da matriz");
	do
	{ 
		while(j<4)
		{
			scanf("%d", &mat[i][j]);
			j++;
		
		}
	j=0;
	i++;	
	}while(i<4);
	
	
	puts("__________________________________");
	puts("Elementos da diagonal principal DP");
		for(i=0;i<4;i++)
			for(j=0;j<4;j++)
			if(i==j)
				printf("%d \n", mat[i][j]);
	puts("___________________________________");		
	puts("Elementos da diagonal secundaria DS");			
			for(i=0;i<4;i++)
				for(j=0;j<4;j++)		
				if(i+j==ordem-1)
					printf("%d \n", mat[i][j]);
}// fim do programa

