 /*
	Name: IMCprova.cpp
	Author: Chacal
	Date: 30/11/19 11:21
	Description: Programa que lê peso e altura de 5000 pessoas
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()

{
	int i;
	float alt,peso,imc[5000];
	alt=peso=0.0;
	
	setlocale(LC_ALL,"Portuguese");
	
	for(i=0;i<5;i++){
		puts("Digite sua altura");
		scanf("%f",&alt);
		puts("Digite seu peso");
		scanf("%f",&peso);
		imc[i]=peso/(alt*alt);
	}

	for(i=0;i<5;i++){
		printf("Seu IMC é: %f\n", imc[i]);
	}
		
	
}//fim do Programa




