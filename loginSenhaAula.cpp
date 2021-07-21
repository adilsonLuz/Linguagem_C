/*
	Name: loginSenhaAula
	Author: Adilson Luz (Chacal)
	Date: 12/05/20 11:43
	Description: Programa para validar login e senha igual ao windows.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void validarLogin(char []);
void validarSenha();
void fazerLogin();

char usuario[]= "Afonso";
int senha=123;
int limite=2;
int cont=0;


main()
{
	setlocale(LC_ALL,"Portuguese");
	printf("\n\n\t\tWINDOWS\n\n");
	fazerLogin();
	puts("\nSua sessão foi iniciada.");
}



void fazerLogin()
{
	char login[10];
	printf("\tLogin: ");
	gets(login);
	puts(" ");
	validarLogin(login);
}



void validarLogin(char login[])
{	
	
		if(strcmp(login,usuario)==0){
			validarSenha();
		}
			else{
				puts("Usuario não cadastrado\n");
				fazerLogin();
			}
}
void validarSenha()
{
	int pwd;
	
	printf("Senha: ");
	scanf(" %d",&pwd);
	
	while(cont<limite){
	if(pwd == senha){
		puts("\nLogin realizado - Seja bem Vindo");
		limite=0;
	}
		else{
			puts("\nSenha incorreta!!!");
			cont++;
			validarSenha();	
		}
   }
}


