/*
	Name: Quadrado Mágico
	Author: Chacal
	Date: 22/11/19 08:41
	Description: Programa que identifica se 16 números são um sodoku
*/
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	int i,k,j,mag[3][3];
	i=k=j=0;
	
	setlocale(LC_ALL,"Portuguese");
	
	puts("Digite 9 números");
	do
	{
		while(j<3)
		{
			scanf("%d", &mag[i][j]);
		j++;
		}
		j=0;
		i++;
	}while(i<3);
	
	int resu[8];
		puts("Realizando a soma");
		puts("_________________");
		
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
					soma=soma+mag[i][j];
			}
		
		
		
		
	
	
}//fim do programa

