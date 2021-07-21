/*
	Name: vetor.cpp
	Author: Chacal
	Date: 08/11/19 07:53
	Description: Primeiro programa para manipular estruturas do tipo vetor
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()


{
	int i, vet[10];
	i=0;
		setlocale(LC_ALL,"Portuguese");
		
	puts("Digite dez números para carregar um vetor");

	while(i<10)
	{
		scanf("%d", &vet[i]);
		i++;
	}
		
	puts("Vetor carregado!!!");
	
	puts("________________________________");
	
	puts("vetor em ordem");
	i=0;
	do{
		if(i<9)
		printf("%d,", vet[i]);
		else
		printf("%d", vet[i]);
		i++;
	}while(i<10);
	
	puts("________________________________");
	puts("vetor exibido em ordem inversa");
	
	for(i--;i>=0;i--)
	{
	printf((i>0)?"%d,":"%d", vet[i]);	
		}	
}//fim do programa

