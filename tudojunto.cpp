/*
	Name: trocar 3
	Author: 
	Date: 05/05/20 10:40
	Description: 
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

void trocar(int*,int*);//Portotipação
void linha(int);
int somar(int,int);
int leia();


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int a,b,soma;
	a=5;
	b=10;
	soma=somar(a,b);
	
	linha(10);
	printf("A soma de A + B = %d\n", soma);
	printf("A soma de H + Q = %d", somar(a,b));//invoke dentro de outra função
	linha(6);
	printf("A soma de Y + Z é: %d", somar(leia(),leia()));
	
	linha(5);
	puts("A e B do main:");
	printf("A:%d\n", a);
	printf("B:%d", b);
	linha(10);
	
	puts("Endereço das variaveis A e B");
	printf("A:%p\n", &a);
	printf("B:%p\n\n", &b);
	linha(30);
	trocar(&a,&b);//INVOKE
	
	linha(40);
	puts("A e B do main:");
	printf("A:%d\n", a);
	printf("B:%d\n", b);
	
	
}

void trocar(int *a, int *b)
{
	puts("Troca de valores dentro da função");
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
}

void linha(int x)
{
	printf("\n");
	for(int i=0;i<x;i++){
		printf("_");
	}
	printf("\n");
}

int somar(int w,int m)
{
return w + m;
}

int leia()
{
	
	int x;
	printf("Digite o número: ");
	scanf(" %d",&x);
	return x;
}


