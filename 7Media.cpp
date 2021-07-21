/*
	Name: MediaTurma.cpp
	Author: Chacal
	Date: 02/11/19 17:47
	Description: Este programa calcula a média de três alunos
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()

{
	int i,as, es;
	float nota, soma, media;
	i=0;
	es=1;
	soma=0;
	media=0;
	
		setlocale(LC_ALL, "Portuguese");
	while(es<=3)
	{
		as=1;
		i=0;
		soma=0;
	do{printf("Qual a %dª nota do %dº aluno?\n",as,es);
		scanf("%f",&nota);
		soma=soma+nota;
		i++;
		as++;
	}while(i<=3);
	nota=soma/i;
	printf("A média do %dº aluno é: %f\n",es, nota);
	es++;
	puts("_____________________________________");
}
}//fim do programa

