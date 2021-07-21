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

	
	void calcularPercentualVitoria(int [11],float [11][3]);
	void calcularPercentualEmpate(int [11],float [11][3]);
	void calcularPercentualDerrotas(int [11],float [11][3]);		
	void calcularTotalJogos(int [11][3]);
	
	float porcentagens[11][3];				
						
int main()
{
	int totalJogos[11];

	setlocale(LC_ALL,"Portuguese");
	
	char times[11][20]={"Corinthians     ",
					    "Palmeiras       ",
				  	    "São Paulo       ",
					    "Santos          ",
				        "Portuguesa      ",
					    "Guarani         ",
					    "Juventos        ",
					    "Barueri         ",
					    "São Caetano     ",
					    "Oeste           ",
					    "XV de Pìracicaba"};
	float resultados[11][3]={8,3,5,
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
							
	memset(totalJogos, 0 , sizeof(totalJogos));
							
	for(int i=0;i<11;i++){
		for(int j=0;j<3;j++){
		totalJogos[i]+=resultados[i][j];
		}
	}
			
		calcularPercentualVitoria(totalJogos,resultados);
		calcularPercentualEmpate(totalJogos,resultados);
		calcularPercentualDerrotas(totalJogos,resultados);
	
			printf("\n\t\tParciais do campeonato\n\n\tTime\t\t  Total de jogos\t  Vitorias\t\t  Empates\t\t  Derrotas\n\n\n");
		for(int linha=0;linha<11;linha++){
				printf("\t%s\t%d\t\t%.f  | %5.2f %%\t\t%.f  | %5.2f %%\t\t%.f  | %5.2f %%\t\n\n",times[linha],totalJogos[linha],resultados[linha][0],porcentagens[linha][0],
				resultados[linha][1],porcentagens[linha][1],resultados[linha][2],porcentagens[linha][2]);
		}	
	
}

	
void calcularPercentualVitoria(int jogos[11], float vitoria[11] [3])
{
	float percVit[11];
	
		for(int i=0;i<11;i++){
	    	percVit[i]=vitoria[i][0]*100/jogos[i];
     	}
    	for(int i=0;i<11;i++){
	    	porcentagens[i][0]=percVit[i];
    	}
}


void calcularPercentualEmpate(int jogos[11],float empate[11][3])
{
	
	float percEmp[11];
	
		for(int i=0;i<11;i++){
		percEmp[i]=empate[i][1]*100/jogos[i];
	}
	for(int i=0;i<11;i++){
		porcentagens[i][1]=percEmp[i];
	}
	
	
	
}
	


void calcularPercentualDerrotas(int jogos[11],float derrota[11][3])
{
	
	float percDerr[11];
	
		for(int i=0;i<11;i++){
		percDerr[i]=derrota[i][2]*100/jogos[i];
	}
	for(int i=0;i<11;i++){
		porcentagens[i][2]=percDerr[i];
	}
		
}

