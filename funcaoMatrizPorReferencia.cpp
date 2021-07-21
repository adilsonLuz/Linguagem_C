/*
	Name: funçãoMatrizPorReferencia
	Author: Adilson luz
	Date: 19/05/20 21:12
	Description: Carrega duas matrizes e retorna o percentual de cada valor digitado
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

//Sessão de prototipação
void calcularPercentualVitorias(int[11],float[11][3]);
void calcularPercentualEmpates(int[11],float[11][3]);
void calcularPercentualDerrotas(int[11],float[11][3]);

//Matriz global
float porcentagens[11][3];

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	
	int totalJogos[11];
	float results[11][3];
	char time[11][20];
	
	//Limpando memória do vetor
	memset(totalJogos, 0 , sizeof(totalJogos));
	
	
	//Carregando times e resultados e armazenando em matrizes
	for(int linha=0;linha<11;linha++){
			printf("\n\tDigite o %2dº time: ",linha+1);
		    scanf("%[^\n]s",&time[linha]);//Lendo espaço da string como caractere
		    setbuf(stdin,NULL);//Limpando buffer
		    printf("\tDigite o número de vitorias: ");
		    scanf("%f",&results[linha][0]);
			setbuf(stdin,NULL);//Limpando buffer
		    printf("\tDigite o número de empates: ");
		    scanf("%f",&results[linha][1]);
			setbuf(stdin,NULL);//Limpando buffer
		    printf("\tDigite o número de derrotas: ");
		    scanf("%f",&results[linha][2]);
			setbuf(stdin,NULL);//Limpando buffer
			}
	//Calculando total de partidas de cada time e guardando em vetor
	for(int linha=0;linha<11;linha++){
		for(int coluna=0;coluna<3;coluna++){
		totalJogos[linha]+=results[linha][coluna];
		}
	}
	
	calcularPercentualVitorias(totalJogos,results);//INVOKE
	calcularPercentualEmpates(totalJogos,results);//INVOKE
	calcularPercentualDerrotas(totalJogos,results);//INVOKE
	
	//Imprimindo tabela parcial do campeonato
		printf("\n\tParciais do campeonato\n\nTime\t\t  Vitorias\t\t  Empates\t\t  Derrotas\t  Total de jogos\n\n");
		for(int linha=0;linha<11;linha++){
				printf("%s\t%.f  | %.2f %%\t\t%.f  | %.2f %%\t\t%.f  | %.2f %%\t\t%d\n\n",time[linha],results[linha][0],porcentagens[linha][0],
				results[linha][1],porcentagens[linha][1],results[linha][2],porcentagens[linha][2],totalJogos[linha]);
		}	
}

//Sessão de Funções

void calcularPercentualVitorias(int totalGames[11], float resultados[11][3])
{
	
	float percVit[11];
	
	for(int linha=0;linha<11;linha++){
		percVit[linha]=resultados[linha][0]*100/totalGames[linha];
	}
	for(int linha=0;linha<11;linha++){
		porcentagens[linha][0]=percVit[linha];
	}
}



void calcularPercentualEmpates(int quantosJogos[11], float parciais[11][3])
{
	
		float percEmp[11];
	
	for(int linha=0;linha<11;linha++){
		percEmp[linha]=parciais[linha][1]*100/quantosJogos[linha];
	}
	for(int linha=0;linha<11;linha++){
		porcentagens[linha][1]=percEmp[linha];
	}
}



void calcularPercentualDerrotas(int somaPorTimes[11], float rodada[11][3])
{
	
		float percDerr[11];
	
	for(int linha=0;linha<11;linha++){
		percDerr[linha]=rodada[linha][2]*100/somaPorTimes[linha];
	}
	for(int linha=0;linha<11;linha++){
		porcentagens[linha][2]=percDerr[linha];
	}
}


