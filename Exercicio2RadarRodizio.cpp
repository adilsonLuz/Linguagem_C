/*
	Name: Exercicio2RadarRodizio
	Author: Adilson Luz (Chacal)
	Date: 09/06/20 10:07
	Description: Programa que carrega placa do carro e faz verificação do rodizio
*/



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//Sessão de Prototipação
int verificarPlaca(char[10], int, char[8]);
int verificarHora(int);

//Variaveis globais
char semana[5][8]={"segunda",
				   "terça",
				   "quarta",
				   "quinta",
			   	   "sexta"};

main()
{
	setlocale(LC_ALL,"Portuguese");//incluindo portugues Brasil
	
	//variaveis locais
	char diaSemana[10];
	char placa[8];
	int horas;
	
	printf("Qual dia da semana?\n");
	gets(diaSemana);
	printf("Que horas são?\n");
	scanf("%d",&horas);	
	printf("Digite a placa do carro com 3 letras e 4 números. EX. XXX-XXXX\n");
	for(int i=0;i<=8;i++){
		scanf("%c",&placa[i]);
	}
 
 
 	verificarPlaca(diaSemana, horas, placa);
	
	
}


//Sessão de funções

int verificarPlaca(char diaSemana[], int horas, char placa[])
{
	
	if(placa[8]=='1' || placa[8]=='2' && (strcmp(diaSemana,semana[0])==0)){
		verificarHora(horas);
	}
		else if(placa[8]=='3' || placa[8]=='4' && (strcmp(diaSemana,semana[1])==0)){
			verificarHora(horas);
		}
			else if(placa[8]=='5' || placa[8]=='6' && (strcmp(diaSemana,semana[2])==0)){
				verificarHora(horas);
			}
				else if(placa[8]=='7' || placa[8]=='8' && (strcmp(diaSemana,semana[3])==0)){
					verificarHora(horas);
				}
					else if(placa[7]=='9' || placa[7]=='0' && (strcmp(diaSemana,semana[4])==0)){
						verificarHora(horas);
					}
					else{
					    printf("\n Liberado do rodizio municipal.");
					}	
}


int verificarHora(int hora)
{
 
 	if(hora > 6 && hora < 10 || hora > 16 && hora < 21){
 		printf("\n\nVocê foi autuado por trafegar na faixa horária de rodizio.\nInfração leve.\nPontuação da CNH: 04\nValor da multa: R$ 139,16");
	 }	
	 	else{
		 }
}




