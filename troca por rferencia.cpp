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

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int a,b;
	a=5;
	b=10;
	
	puts("A e B do main:");
	printf("A:%d", a);
	printf("B:%d", b);
	
	
	puts("Endereço das variaveis A e B");
	printf("A:%p", &a);
	printf("B:%p", &b);
	
	trocar(&a,&b);//INVOKE
	
	puts("A e B do main:");
	printf("A:%d", a);
	printf("B:%d", b);
	
	
}

void trocar(int *a, int *b)
{
	puts("Troca de valores dentro da função");
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
	
	
}
