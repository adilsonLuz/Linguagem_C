/*
	Name: Sexo Casado
	Author: Chacal
	Date: 01/11/19 10:35
	Description: Programa que l� duas perguntas e imprime a menssagem correta na tela 
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{

setlocale(LC_ALL,"Portuguese");
char sexo, casado;
sexo=' ', casado=' ';

printf("Voc� � homem ou mulher? Digite (M) para Masculino ou (F) para Feminino.\n");
scanf(" %c", &sexo);

printf("Qual seu estado civil? Digite (S) para solteiro ou (C) para Casado.\n");
scanf(" %c", &casado);

if(sexo == 'M'||sexo =='m')
  printf("Voc� � Homem e ");
  else
  if(sexo == 'F'||sexo =='f')
  printf("Voc� � Mulher e ");
  else
  printf("INV�LIDO. Digite (M) para Masculino ou (F) para Feminino.\n");
  
if(casado == 'S'||casado == 's')
  printf("voc� � Solteiro");
  else
  if(casado=='C'|| casado=='c')
  printf("voc� � Casado");
else
 printf("INV�LIDO. Digite (S) para solteiro ou (C) para Casado.\n");
 
}//fim do programa
