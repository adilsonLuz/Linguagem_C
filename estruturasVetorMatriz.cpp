/*
	Name: EstruturasVetorMatriz
	Author: Adilson Luz (Chacal)
	Date: 19/05/20 09:44
	Description: Manipula��o de vetores e matrizes com fun��es.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void imprimirVetor(int []);
void imprimirMatriz(int [3][3]);

main()
{
	setlocale(LC_ALL,"Portuguese");
		
	int i,j,vet[10],mat[3][3];
	
	for(i=0;i<10;i++){
		scanf("%d", &vet[i]);
	}
	puts("Vetor carregado");
	
	imprimirVetor(vet);
	
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &mat[i][j]);
		}
	}
		printf("Matriz carregado\n");
		
		imprimirMatriz(mat);
	
}



void imprimirVetor(int num[])
{

		for(int i=0;i<10;i++){
				printf("%d", num[i]);
		}	
}



void imprimirMatriz(int matriz[3][3])
{
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d", matriz[i][j]);
			}
	}
}


