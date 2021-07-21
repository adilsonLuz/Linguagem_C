/*  Name: BloqueiaLogin.cpp
	Author: Guilherme Melo
	Date: 12/05/20 11:42
	Description: Programa para validar login e senha igual ao Windows e se ao errar 3 vezes a senha o usuario é bloqueado.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//sessão de prototipação
void validarLogin();
void validarSenha();

//Variaveis Globais
char usuario[] = "guilherme";
int senha = 123;
int bloqueia = 2;
int i = 0;
int pwd;

int main(){
	setlocale(LC_ALL,"Portuguese");
	validarLogin();
//	if(i<=2 && pwd == senha )
//			puts("\nSessão iniciada");
//			else
//			puts("\nUsuario Bloqueado");			
}

void validarLogin(){
	char login[10];
	printf("\nLogin: ");
	gets(login); //GETS: para ler uma sequencia de caracters e levar para a matriz
	
	
		if(strcmp(login,usuario) == 0) //STRCMP (STRING COMPARE) para comparar string em matriz. Se for igual a 0 as strings são iguais
			validarSenha();
		else{
			puts("\nUsuario não existe! Tente outra vez.");
			validarLogin();
		}
}
void validarSenha(){
	printf("Senha: ");
	scanf(" %d", &pwd);
	while(i<bloqueia){
	if(pwd == senha){
		puts("\nLogin realizado com sucesso");
		bloqueia=0;
	}
		else{
			puts("\nSenha invalida! Tente outra vez.");
			i++;
			validarLogin();	
		}
   }
}
