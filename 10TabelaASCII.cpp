/*
	Name: Tabela ASCII.CPP
	Author: 
	Date: 08/11/19 09:53
	Description: Montagem da tabela ASCII
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>
main()
{
	int num = 0;
	setlocale(LC_ALL,"Portuguese");
	for(int i=0;i<256;i++)
	{
		printf("%d - %c\n", num, num);
		num++;
	}
	
	
	
}//fim do programa
