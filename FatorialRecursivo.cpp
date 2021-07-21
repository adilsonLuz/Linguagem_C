/*
	Name: Fatorial recursivo.cpp
	Author: Adilson Luz (Chacal)
	Date: 03/05/20 00:49
	Description: Este programa retorna na tela o fatorial do
	             número escolhido pelo usuario, utilizando modo
	             recursivo
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>
int fatorial(int);

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	printf("Deseja calcular o fatorial de qual número? ");
	scanf("%d",&num);
	printf("O resultado de %d! é: %d",num,fatorial(num));
	return 0;
}//Fim do programa.



int fatorial(int x)
{
	if(x<=1){
		return 1;
	}
		else{
			return x*fatorial(x-1);
		}
}
