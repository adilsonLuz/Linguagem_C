/*
	Name: VetorNUmeroImpar
	Author: Chacal
	Date: 08/11/19 08:51
	Description: Programa em C que carrega um vetor com "n" elementos e imprima apenas os impares.
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()

{
	int i, quo, res, n;
	n=quo=res=0;
	
	setlocale(LC_ALL,"Portuguese");
	
	puts("Quantos números quer armazenar?");
	scanf("%d", &n);
	int vet[i];
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &vet[i]);
	}
	
	for(i=0;i<n;i++)
	{
		quo=vet[i]/2;
		res=vet[i]-quo*2;
		
		printf((res==1)?"%d\n":"nenhum par\n", vet[i]);
		
	}
	
	if(i==0)
	puts("");
	
	
	
	
	
}//fim do programa

