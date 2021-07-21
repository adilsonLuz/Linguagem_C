/*
	Name: Fatorial recursivo.cpp
	Author: Adilson Luz (Chacal)
	Date: 03/05/20 00:49
	Description: Este programa retorna na tela o fatorial do
	             n�mero escolhido pelo usuario, utilizando modo
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
	printf("Deseja calcular o fatorial de qual n�mero? ");
	scanf("%d",&num);
	printf("O resultado de %d! �: %d",num,fatorial(num));
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
