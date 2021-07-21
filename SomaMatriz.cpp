/*
	Name: soma matriz cpp
	Author: Chacal
	Date: 22/11/19 09:46
	Description: 
*/
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()

{
	setlocale(LC_ALL,"Portuguese");
	int i,j,matA[3][3],matB[3][3],matsoma[3][3];
	i=j=0;
	puts("carga da matriz A");
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d", &matA[i][j]);	
			
				puts("carga da matriz B");
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d", &matB[i][j]);
			
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			matsoma[i][j] = matA[i][j] + matB[i][j];
			
	puts("\n\n\nA soma das matrizes é");
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			printf((i==2&&j==2)?"%d!!!":"%d, ", matsoma[i][j]);
			
	
	
}// fum do programa
