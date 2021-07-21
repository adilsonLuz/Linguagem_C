/*
	Name: MatrizPorRefarencia.cpp
	Author: Adilson Luz (Chacal)
	Date: 17/05/20 12:11
	Description: Programa que carrega matrizes com 
	resultado de partidas de futebol e retorna matriz 
	com percentual de vitoria derrotas e empates.
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>


	void calcularPercentualVitoria(int [11][3]);
	void calcularPercentualEmpate(int [11][3]);
	void calcularPercentualDerrotas(int [11][3]);		
	void calcularJogos(int [11][3]);
						
						
int main()
{
int i,j;

	setlocale(LC_ALL,"Portuguese");
	
	char times[11][20]={"Corinthians",
					    "Palmeiras",
				  	    "São Paulo",
					    "Santos",
				        "Portuguesa",
					    "Guarani",
					    "Juventos",
					    "Barueri",
					    "São Caetano",
					    "Oeste",
					    "XV de Pìracicaba"};
	int resultados[11] [3]={8,3,5,
				        	3,7,5,
							9,3,4,
							6,3,9,
							2,8,7,
							4,2,6,
							5,7,8,
							6,3,4,
							7,2,9,
							1,9,3,
							7,2,5};
	
/*	for(i=0;i<11;i++){
		for(j=0;j<3;j++){
			printf("%s\t\t%d\t\t%d\t\t%d",times,calcularPercentualVitoria(resultados),
			calcularPercentualEmpate(resultados),calcularPercentualDerrotas(resultados));
		}
	}	
}
*/


void calcularPercentualVitoria(int vitoria[11][3])
{
	int i,j;
	float somaResultados[11];
	float percVit[11];
	
	printf("\n\t\tResultados:\n\nTime\t\tVitorias\tEmpates\t\tDerrotas\tTotal de jogos\n");
	
	memset(somaResultados, 0, sizeof(somaResultados));
	
	for(i=0;i<11;i++){
		for(j=0;j<3;j++){
		somaResultados[i]+=vitoria[i][j];
		}
	}	
	
	for(int i=0;i<11;i++){
		percVit[i]=vitoria[i][0]*100/somaResultados[i];
		}
}



void calcularPercentualEmpate(int empate[11][3])
{
	int i,j;
	float somaResultados[11];
	float percVit[11];
	
	memset(somaResultados, 0, sizeof(somaResultados));
	
	for(i=0;i<11;i++){
		for(j=0;j<3;j++){
		somaResultados[i]+=empate[i][j];
		}
	}
	
	for(int i=0;i<11;i++){
		percVit[i]=empate[i][1]*100/somaResultados[i];
		}
}
	
	


void calcularPercentualDerrotas(int derrota[11][3])
{
	int i,j;
	float somaResultados[11];
	float percVit[11];
	
	memset(somaResultados, 0, sizeof(somaResultados));
	
	for(i=0;i<11;i++){
		for(j=0;j<3;j++){
		somaResultados[i]+=derrota[i][j];
		}
	}
	
	for(int i=0;i<11;i++){
		percVit[i]=derrota[i][2]*100/somaResultados[i];
		}
}
