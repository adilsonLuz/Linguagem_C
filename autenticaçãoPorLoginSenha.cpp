/*
	Name: autenticaçãoComBloqueioDeSenha
	Author: Adilson Luz (Chacal)
	Date: 12/05/20 11:43
	Description: Programa para validar usuario e senha com bloqueio.
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//Sessão de Prototipação
void validarLogin(char []);
void validarSenha();
void fazerLogin();
void bloquear();

//Variaveis globais
char usuario[]= "Adilson";
int senha=123;
int limite=2;
int cont=0;
int pwd;

main()
{
	setlocale(LC_ALL,"Portuguese");
	printf("\n\n\t\tWINDOWS\n\n");
	fazerLogin();// Invoke
	bloquear();//Invoke
	
}

//Sessão de funções.

void fazerLogin()
{
	char login[10];	
	printf("\tLogin: ");
	gets(login);//Lendo a string digitada
	puts(" ");
	validarLogin(login);
}



void validarLogin(char login[])
{	
	
		if(strcmp(login,usuario)==0){
			validarSenha();
		}
			else{
				puts("Não cadastrado.\n");
				fazerLogin();
			}
}
void validarSenha()
{
	
	printf("\tSenha: ");
	scanf(" %d",&pwd);
	
	while(cont<limite){
	if(pwd == senha){
		puts("\nLogin realizado - Seja bem Vindo!!!");
		limite=0;
	}
		else{
			puts("\nSenha incorreta!!!\nDigite a senha.\n");
			for(int i=0;i<2;i++){
				system("color 47");
				system("color 04");
			}
			cont++;
			system("color 7");
			validarSenha();	
		}
   }
}

void bloquear(){
	
	if(cont<=2 && pwd == senha ){
		for(int i=0;i<2;i++){
			system("color f2");
			system("color 02");
			}
		puts("\nAcesso concedido");
		}
			else{
				system("color 9f");
			puts("\nBloqueado");
			}
}


