/*
	Name: Tabuada invertida II
	Author: Chacal
	Date: 01/11/19 10:28
	Description: programa que faz a imoressão da tabuada invertida II
	*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()

{
	
	int num, i;
	num = 0; i = 10;
	setlocale(LC_ALL,"Portuguese");
	printf("Você quer tabuada de qual número? \n");
	scanf("%d", &num);
	
while (i>0)
{

printf("%d X %5.2d = %.2d\n", num, i, i*num);

(i--);
}
printf("CONCLUÍDO... Parabéns");
}
