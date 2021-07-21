/*
	Name: FuncaoLoginSenha.cpp
	Author: Adilson Luz (Chacal)
	Date: 11/05/20 11:00
	Description: Programa que simula login do windows 
	a partir de uma função validando o login.
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

char ValidarLogin(char user[]);//Prototipação
char ValidarSenha(char key[]);//Prototipação


main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	char usuario[20], senha[20];

	puts("\n\n\t\tWINDOWS\n\n");
	printf("\tLogin: ");
	gets(usuario);
	
	ValidarLogin(usuario);
	
		gets(senha);
		
	ValidarSenha(senha);
		
	

}

char ValidarLogin(char usuario[])
{
	char user[20]={'A','d','i','l','s','o','n',' ','L','u','z'};
		if(strcmp(user,usuario)){
		printf("Usuário não Cadastrado");
	}
		else{printf("\nUsuario cadastrado\n\n\tSenha: ");
		
		}
}

char ValidarSenha(char senha[])
{
	char key['C','h','a','c','a','l'];
	if(strcmp(key,senha)){
		printf("\nSenha incorreta");
	}
		else{printf("\nAcesso permitido");
		
		}
}


