/*
	Name: Tabuada invertida
	Author: 
	Date: 01/11/19 10:00
	Description: programa para mostrar tabuada e mostra de forma invertida
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()

{
	
	int num, i;
	num = 0; i = 10;
	setlocale(LC_ALL,"Portuguese");
	printf("Escolha o número que quer fazer a tabuada \n");
	scanf("%d", &num);
	 do {
	 	printf("%d X %d = %d\n", num, i, i*num);
	 	i=i-1;
	 }while(i>0);
	
	printf("CONCLUÍDO... Parabéns");
}//fim do programa
