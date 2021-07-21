/*
	Name: 11REspostasimNao.cpp
	Author: Chacal
	Date: 08/11/19 10:07
	Description: Programa em que um usuario responda uma pergunta "N/n" ou "S/s" e da erro se responde algo diferente
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	char resp;
	setlocale(LC_ALL,"Portuguese");
	
printf("você é casado? (S/N).\n");
scanf("%c", &resp);

if(resp=='S'||resp=='s'){
	printf("%c, casado\n", resp);
	printf("%d\n", resp);
}
else if(resp=='N'||resp=='n'){
	printf("%c, solteiro\n", resp);
	printf("%d\n", resp);
}
	else
	printf("Inválido!!!\nDigite (S/N)\n");
	
}//fim do programa
