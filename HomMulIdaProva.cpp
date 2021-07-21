/*
	Name: HomemMulherIdadeProva.cpp
	Author: Chacal
	Date: 30/11/19 16:26
	Description: Este programa faz pesquisa entre homens e mulheres dando a média da idade de cada genero
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()

{
	
	char sexo;
	int idh,idm,somah,conth,contm,somam,i;
	
	sexo=' ';
	idh=somah=somam=conth=contm=idm=i=0;
	
	setlocale(LC_ALL,"Portuguese");
		
	do{
		puts("Você é homem ou mulher? Digite H para homem ou M para mulher.");
		scanf("\n%c",&sexo);
		puts("Qual a sua idade?");
			if(sexo=='H'||'h'){
				(conth++);
			}
				else (contm++);
				
		if(sexo=='H'||'h'){
				scanf("%d",&idh);
			}
				else if(sexo=='M'||'m'){
				scanf("\n%d",&idm);
				}
					else{
						puts("Digite M ou H");
					}
				
			somah=somah+idh;
			somam=somam+idm;
			
			i++;
		}
		while(i<5);
		printf("%d", conth);
		printf("%d", contm);
	printf("A média da idade dos homens é %d, e a média da idade das mulheres é %d.",somah/conth, somam/contm);
	
		
}//fim do programa

