/*
	Name: Ponteiros
	Author: Adilson Luz (Chacal)
	Date: 07/07/2020 16:44
	Description: Programa que troca uma frase de um vetor para outro por meio de ponteiros
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//Sess�o de prototipa��o
void trocarFrase(char *copiar, char *Colar);  //função que trocar conteudo do vetor por referencia

//variavel global
char temFrase[] = "Trocou toda frase de vetor"; // variavel global para ser visto pelo main e função

main(){
	//Variavel local	
	char recebeFrase[30];
	char *pTem = temFrase; // ponteiro recebendo conteudo do vetor 'global'
	char **pTem2 = &pTem; // ponteiro para ponteiro recebendo o endereço do ponteiro pTem
	
	
	
	//Invoke da função que troca as frases de vetor
	trocarFrase(temFrase,recebeFrase);
	
	//Imprimindo a frase recebida no segundo vetor
	printf("\nImprimindo a frase trocada, vetor 'recebeFrase':\n\n\t\t%s\n\n\n\n", recebeFrase);
	
	//testando ponteiros e comparando endere�os de memoria
	printf("Endere�o na memoria do vetor 'temFrase':  %p\n", &temFrase);
	printf("Endere�o na memoria do ponteiro 'pTem':  %p\n", &pTem);
	printf("Endere�o de memoria de 'temFrase' mostrado com ponteiro 'pTem': %p\n", pTem);
	printf("Endere�o de memoria do ponteiro 'pTem' mostrado com ponteiro 'pTem2': %p\n", pTem2);

}


//Sess�o de fun��es

void trocarFrase(char *copiar, char *colar)
{

while(*copiar != '\0'){//condi��o de parada
	*colar = *copiar;//copiando o conteudo de um vetor para o outro
	++copiar;//mudando para proxima posi��o de memoria
	++colar;//mudando para proxima posi��o de memoria
	}

	*colar = '\0';//acrescentando '\0' para indicar fim do vetor
}

	





