/*
	Name: Caixa Eletronico
	Author: Adilson Luz (Chacal)
	Date: 07/07/2020 16:52
	Description: Programa que simula interação de um caixa eletronico de banco.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//Sessão de Prototipação
void iniciar();
void sacar();
void depositar();
void consultarSaldo();
void trocarSenha();
void finalizar();


//Variaveis globais
int cont=0;
int limite;
int numeroContas[10] = {111100,                     //   1ª conta: 111100  Senha: 1110  Saldo: 2654.35
						110011,                     //   2ª conta: 110011  Senha: 1111  Saldo: 564.22
						220022,                     //   3ª conta: 220022  Senha: 1112  Saldo: 987.99
						330033,                     //   4ª conta: 330033  Senha: 1113  Saldo: 5687.66
						440044,                     //   5ª conta: 440044  Senha: 1114  Saldo: 999.54
						550055,                     //   6ª conta: 550055  Senha: 1115  Saldo: 158.99
						660066,                     //   7ª conta: 660066  Senha: 1116  Saldo: 1587.66
						770077,                     //   8ª conta: 770077  Senha: 1117  Saldo: 2148.98
						880088,                     //   9ª conta: 880088  Senha: 1118  Saldo: 1.99
						990099};                    //  10ª conta: 990099  Senha: 1119  Saldo: 66.69
						
int senhas[10] = {1110,     
				  1111,
				  1112,
				  1113,
				  1114,
				  1115,
				  1116,
				  1117,
				  1118,
				  1119};
				  
float saldo[10] = {2654.35,
				    564.22,
					987.99,
				   5687.66,
					999.54,
					158.99,
			       1587.66,
				   2148.98,
				      1.99,
					 66.69};
				  


main()
{
	setlocale(LC_ALL,"Portuguese");//incluindo portugues Brasil
		
	iniciar();//Invoke
}

	//Sessão de funções
	
	// função "iniciar" abre o menu do caixa.
	void iniciar(){
	int acao;
	acao=0;
	limite=2;
	printf("\n\t******BEM VINDO AO BANCO DAS GALAXIAS******");
	printf("\n\t\t     ***MENU INICIAL***\n");
	printf("\nQual movimentação deseja realizar?\n\t1 - Saques\n\t2 - Deposito\n\t3 - Consulta de Saldo\n\t4 - Trocar senha\n\t5 - Encerrar a sessão\n");
	scanf("%d",&acao);
		
	if(acao==1){
		sacar();//Invoke
	}
	else if(acao==2){
		depositar();//Invoke
	}
	else if(acao==3){
		consultarSaldo();//Invoke
	}
	else if(acao==4){
		trocarSenha();//Invoke
	}
	else if(acao==5){
		finalizar();//Invoke
	}
	else{
		printf("\nDigite uma das opções de 1 a 5.\n\n");
		for(int i=0;i<2;i++){
				system("color 71");
				system("color 07");
		}	
	iniciar();//Invoke, recursividade direta
	}
}


//função "sacar" realiza operações saques
void sacar(){
	//variaveis locais da função
	float saque;
	int conta,senha;
	conta=senha=0;
	saque=0.0;
	
	printf("\n\t\t***SAQUE***\n");
	//incersão de dados(cliente)
    printf("\nInsira o cartão e digite o número de sua conta com 6 digitos:\n\t");
	scanf("%d",&conta);
	printf("\nDigite sua senha numerica de quatro digitos\n\t");
	scanf("%d",&senha);
	
	while(cont<limite){// laços para determinar o bloqueio de senha
	if(numeroContas[0] == conta && senhas[0] == senha){//fazer verificação de conta e senha para liberar saque
		printf("Qual valor do saque\nR$ ");
		scanf("%f",&saque);
		if(saldo[0] < saque){//verificando se há limite para o saque solicitado
			printf("Limite indisponivel");
		}
			else{saldo[0] -= saque;//debitando valor do saque do saldo da conta
			printf("\nRetire o dinheiro\n");
			}
			limite=0;//zerando contador após senha aceita
			iniciar();//Invoke do menu
		}
	else if(numeroContas[1] == conta && senhas[1] == senha){//fazer verificação de conta e senha para liberar saque
		printf("Qual valor do saque\nR$ ");
		scanf("%f",&saque);
		if(saldo[1] < saque){//verificando se há limite para o saque solicitado
			printf("\nLimite indisponivel\n");
		}
			else{saldo[1] -= saque;//debitando valor do saque do saldo da conta
			printf("\nRetire o dinheiro\n");
			}
			limite=0;
			iniciar();
	}
	else if(numeroContas[2] == conta && senhas[2] == senha){//fazer verificação de conta e senha para liberar saque
		printf("Qual valor do saque\nR$ ");
		scanf("%f",&saque);
		if(saldo[2] < saque){//verificando se há limite para o saque solicitado
			printf("Limite indisponivel");
		}
			else{saldo[2] -= saque;//debitando valor do saque do saldo da conta
			printf("\nRetire o dinheiro\n");
			}
			limite=0;
			iniciar();
	}
	else if(numeroContas[3] == conta && senhas[3] == senha){//fazer verificação de conta e senha para liberar saque
		printf("Qual valor do saque\nR$ ");
		scanf("%f",&saque);
		if(saldo[3] < saque){//verificando se há limite para o saque solicitado
			printf("\nLimite indisponivel\n");
		}
			else{saldo[3] -= saque;//debitando valor do saque do saldo da conta
			printf("\nRetire o dinheiro\n");
			}
			limite=0;
			iniciar();
	}
	else if(numeroContas[4] == conta && senhas[4] == senha){//fazer verificação de conta e senha para liberar saque
		printf("Qual valor do saque\nR$ ");
		scanf("%f",&saque);
		if(saldo[4] < saque){//verificando se há limite para o saque solicitado
			printf("Limite indisponivel");
		}
			else{saldo[4] -= saque;//debitando valor do saque do saldo da conta
			printf("\nRetire o dinheiro\n");
			}
			limite=0;
			iniciar();
	}
	else if(numeroContas[5] == conta && senhas[5] == senha){//fazer verificação de conta e senha para liberar saque
		printf("Qual valor do saque\nR$ ");
		scanf("%f",&saque);
		if(saldo[5] < saque){//verificando se há limite para o saque solicitado
			printf("Limite indisponivel");
		}
			else{saldo[5] -= saque;//debitando valor do saque do saldo da conta
			printf("\nRetire o dinheiro\n");
			}
			limite=0;
			iniciar();
	}
	else if(numeroContas[6] == conta && senhas[6] == senha){//fazer verificação de conta e senha para liberar saque
		printf("Qual valor do saque\nR$ ");
		scanf("%f",&saque);
		if(saldo[6] < saque){//verificando se há limite para o saque solicitado
			printf("Limite indisponivel");
		}
			else{saldo[6] -= saque;//debitando valor do saque do saldo da conta
			printf("\nRetire o dinheiro\n");
			}
			limite=0;
			iniciar();
	}
	else if(numeroContas[7] == conta && senhas[7] == senha){//fazer verificação de conta e senha para liberar saque
		printf("Qual valor do saque\nR$ ");
		scanf("%f",&saque);
		if(saldo[7] < saque){//verificando se há limite para o saque solicitado
			printf("Limite indisponivel");
		}
			else{saldo[7] -= saque;//debitando valor do saque do saldo da conta
			printf("\nRetire o dinheiro\n");
			}
			limite=0;
			iniciar();
	}
	else if(numeroContas[8] == conta && senhas[8] == senha){//fazer verificação de conta e senha para liberar saque
		printf("Qual valor do saque\nR$ ");
		scanf("%f",&saque);
		if(saldo[8] < saque){//verificando se há limite para o saque solicitado
			printf("Limite indisponivel");
		}
			else{saldo[8] -= saque;//debitando valor do saque do saldo da conta
			printf("\nRetire o dinheiro\n");
			}
			limite=0;
			iniciar();
	}
	else if(numeroContas[9] == conta && senhas[9] == senha){//fazer verificação de conta e senha para liberar saque
		printf("Qual valor do saque\nR$ ");
		scanf("%f",&saque);
		if(saldo[9] < saque){//verificando se há limite para o saque solicitado
			printf("Limite indisponivel");
		}
			else{saldo[9] -= saque;//debitando valor do saque do saldo da conta
			printf("\nRetire o dinheiro\n");
			}
			limite=0;
			iniciar();
	}
	else{puts("\nCONTA E/OU SENHA INVALIDA\n");
			for(int i=0;i<2;i++){  //piscar tela indicando erro
				system("color 70");
				system("color 07");
			}
		cont++;
		sacar();
		}	
		system("color 47"); //muda cor de fundo da tela
		printf("\nConta bloqueada, procure seu gerente!!!");
	}
	
}



//função "depositar" realiza operações de deposito
void depositar(){
	//variaveis locais da função
	int conta=0;
	float valor=0.0;
	char resp=' ';
	
	printf("\n\t\t***DEPÓSITO***\n");
	printf("Digite a conta para realizar o depósito\n\t");
	scanf("%d",&conta);
	
	if(numeroContas[0]==conta){//confirma numero da conta que recebe o deposito
		printf("Qual o valor do depósito\nR$ ");
		scanf("%f",&valor);//recebe o valor que será creditado na conta
		saldo[0]+=valor;//soma o valor do deposito ao saldo da conta
		printf("\nCreditado na conta %d o valor de R$ %.2f\n",numeroContas[0],valor);//confirmação do deposito
	iniciar();
	}
	else if(numeroContas[1]==conta){//confirma numero da conta que recebe o deposito
		printf("Qual o valor do depósito\nR$ ");
		scanf("%f",&valor);//recebe o valor que será creditado na conta
		saldo[1]+=valor;//soma o valor do deposito ao saldo da conta
		printf("\nCreditado na conta %d o valor de R$ %.2f\n",numeroContas[1],valor);//confirmação do deposito
	iniciar();
	}
	else if(numeroContas[2]==conta){//confirma numero da conta que recebe o deposito
		printf("Qual o valor do depósito\nR$ ");
		scanf("%f",&valor);//recebe o valor que será creditado na conta
		saldo[2]+=valor;	//soma o valor do deposito ao saldo da conta
		printf("\nCreditado na conta %d o valor de R$ %.2f\n",numeroContas[2],valor);//confirmação do deposito
	iniciar();
	}
	else if(numeroContas[3]==conta){//confirma numero da conta que recebe o deposito
		printf("Qual o valor do depósito\nR$ ");
		scanf("%f",&valor);//recebe o valor que será creditado na conta
		saldo[3]+=valor;	//soma o valor do deposito ao saldo da conta
		printf("\nCreditado na conta %d o valor de R$ %.2f\n",numeroContas[3],valor);//confirmação do deposito
	iniciar();
	}
	else if(numeroContas[4]==conta){//confirma numero da conta que recebe o deposito
		printf("Qual o valor do depósito\nR$ ");
		scanf("%f",&valor);//recebe o valor que será creditado na conta
		saldo[4]+=valor;	//soma o valor do deposito ao saldo da conta
		printf("\nCreditado na conta %d o valor de R$ %.2f\n",numeroContas[4],valor);//confirmação do deposito
	iniciar();
	}
	else if(numeroContas[5]==conta){//confirma numero da conta que recebe o deposito
		printf("Qual o valor do depósito\nR$ ");
		scanf("%f",&valor);//recebe o valor que será creditado na conta
		saldo[5]+=valor;	//soma o valor do deposito ao saldo da conta
		printf("\nCreditado na conta %d o valor de R$ %.2f\n",numeroContas[5],valor);//confirmação do deposito
	iniciar();
	}
	else if(numeroContas[6]==conta){//confirma numero da conta que recebe o deposito
		printf("Qual o valor do depósito\nR$ ");
		scanf("%f",&valor);//recebe o valor que será creditado na conta
		saldo[6]+=valor;	//soma o valor do deposito ao saldo da conta
		printf("\nCreditado na conta %d o valor de R$ %.2f\n",numeroContas[6],valor);//confirmação do deposito
	iniciar();
	}
	else if(numeroContas[7]==conta){//confirma numero da conta que recebe o deposito
		printf("Qual o valor do depósito\nR$ ");
		scanf("%f",&valor);//recebe o valor que será creditado na conta
		saldo[7]+=valor;	//soma o valor do deposito ao saldo da conta
		printf("\nCreditado na conta %d o valor de R$ %.2f\n",numeroContas[7],valor);//confirmação do deposito
	iniciar();
	}
	else if(numeroContas[8]==conta){//confirma numero da conta que recebe o deposito
		printf("Qual o valor do depósito\nR$ ");
		scanf("%f",&valor);//recebe o valor que será creditado na conta
		saldo[8]+=valor;	//soma o valor do deposito ao saldo da conta
		printf("\nCreditado na conta %d o valor de R$ %.2f\n",numeroContas[8],valor);//confirmação do deposito
	iniciar();
	}
	else if(numeroContas[9]==conta){//confirma numero da conta que recebe o deposito
		printf("Qual o valor do depósito\nR$ ");
		scanf("%f",&valor);//recebe o valor que será creditado na conta
		saldo[9]+=valor;	//soma o valor do deposito ao saldo da conta
		printf("\nCreditado na conta %d o valor de R$ %.2f\n",numeroContas[9],valor);//confirmação do deposito
	iniciar();
	}
	
}
	
	




void consultarSaldo(){
//variaveis locais da função
	int conta,senha;
	conta=senha=0;
	
	printf("\n\t\t***CONSULTA DE SALDO***\n");
	printf("\nInsira o cartão e digite o número de sua conta com 6 digitos:\n\t");
	scanf("%d",&conta);
	printf("\nDigite sua senha numerica de quatro digitos\n\t");
	scanf("%d",&senha);
	
	while(cont<limite){// laços para determinar o bloqueio de senha
		if(numeroContas[0] == conta && senhas[0] == senha){//fazer verificação de conta e senha para mostra o saldo
		printf("\nSaldo da conta\nR$ %.2f\n",saldo[0]);//mostra o saldo
		limite=0;
		iniciar();//Invoke retorna ao menu
	}
	else if(numeroContas[1] == conta && senhas[1] == senha){//fazer verificação de conta e senha para mostra o saldo
		printf("\nSaldo da conta\nR$ %.2f\n",saldo[1]);//mostra o saldo
		limite=0;
		iniciar();//Invoke retorna ao menu
	}
	else if(numeroContas[2] == conta && senhas[2] == senha){//fazer verificação de conta e senha para mostra o saldo
		printf("\nSaldo da conta\nR$ %.2f\n",saldo[2]);//mostra o saldo
		limite=0;
		iniciar();//Invoke retorna ao menu
	}
	else if(numeroContas[3] == conta && senhas[3] == senha){//fazer verificação de conta e senha para mostra o saldo
		printf("\nSaldo da conta\nR$ %.2f\n",saldo[3]);//mostra o saldo
		limite=0;
		iniciar();//Invoke retorna ao menu
	}
	else if(numeroContas[4] == conta && senhas[4] == senha){//fazer verificação de conta e senha para mostra o saldo
		printf("\nSaldo da conta\nR$ %.2f\n",saldo[4]);//mostra o saldo
		limite=0;
		iniciar();//Invoke retorna ao menu
	}
	else if(numeroContas[5] == conta && senhas[5] == senha){//fazer verificação de conta e senha para mostra o saldo
		printf("\nSaldo da conta\nR$ %.2f\n",saldo[5]);//mostra o saldo
		limite=0;
		iniciar();//Invoke retorna ao menu
	}
	else if(numeroContas[6] == conta && senhas[6] == senha){//fazer verificação de conta e senha para mostra o saldo
		printf("\nSaldo da conta\nR$ %.2f\n",saldo[6]);//mostra o saldo
		limite=0;
		iniciar();//Invoke retorna ao menu
	}
	else if(numeroContas[7] == conta && senhas[7] == senha){//fazer verificação de conta e senha para mostra o saldo
		printf("\nSaldo da conta\nR$ %.2f\n",saldo[7]);//mostra o saldo
		limite=0;
		iniciar();//Invoke retorna ao menu
	}
	else if(numeroContas[8] == conta && senhas[8] == senha){//fazer verificação de conta e senha para mostra o saldo
		printf("\nSaldo da conta\nR$ %.2f\n",saldo[8]);//mostra o saldo
		limite=0;
		iniciar();//Invoke retorna ao menu
	}
	else if(numeroContas[9] == conta && senhas[9] == senha){//fazer verificação de conta e senha para mostra o saldo
		printf("\nSaldo da conta\nR$ %.2f\n",saldo[9]);//mostra o saldo
		limite=0;
		iniciar();//Invoke retorna ao menu
	}
	else{puts("\nCONTA E/OU SENHA INVALIDA\n");
			for(int i=0;i<2;i++){  //piscar tela indicando erro
				system("color 70");
				system("color 07");
			}
		cont++;
		consultarSaldo();
		}
		system("color 47"); //muda cor de fundo da tela
		printf("\nConta bloqueada, procure seu gerente!!!");
	}
}



void trocarSenha(){
	
	int conta, senha, nsenha, nsenha2, *p;
	conta=senha=nsenha=nsenha2=0;
	
	printf("\n\t\t***TROCA DE SENHA***\n");
	printf("\nQual a conta deseja mudar a senha:\n\t");
	scanf("%d",&conta);
	printf("\nDigite sua senha atual:\n\t");
	scanf("%d",&senha);
	
	while(cont<limite){
	if(numeroContas[0] == conta && senhas[0] == senha){//verifica conta e senha
		printf("Digite a nova senha numerica de 4 digitos\n");
		scanf("%d",&nsenha);//le a nova senha
		printf("Repita a nova senha\n");
		scanf("%d",&nsenha2);//le a nova senha em outra variavel
		if(nsenha == nsenha2){//compara as duas novas senhas
			senhas[0]=nsenha;//troca a senha	
		}
			else{;
			printf("\nSenhas digitada não conferem\n");//menssagem de aviso que as novas senhas são diferentes
			}
			limite=0;
			iniciar();//Invoke retorna ao menu inicial
		}
		else if(numeroContas[1] == conta && senhas[1] == senha){
		printf("Digite a nova senha numerica de 4 digitos\n");
		scanf("%d",&nsenha);
		printf("Repita a nova senha\n");
		scanf("%d",&nsenha2);
		if(nsenha == nsenha2){
			senhas[1]=nsenha;					
		}
			else{;
			printf("\nSenhas digitada não conferem\n");
			}
			limite=0;
			iniciar();			
		}
		else if(numeroContas[2] == conta && senhas[2] == senha){
		printf("Digite a nova senha numerica de 4 digitos\n");
		scanf("%d",&nsenha);
		printf("Repita a nova senha\n");
		scanf("%d",&nsenha2);
		if(nsenha == nsenha2){
			senhas[2]=nsenha;					
		}
			else{;
			printf("\nSenhas digitada não conferem\n");
			}
			limite=0;
			iniciar();			
		}
		else if(numeroContas[3] == conta && senhas[3] == senha){
		printf("Digite a nova senha numerica de 4 digitos\n");
		scanf("%d",&nsenha);
		printf("Repita a nova senha\n");
		scanf("%d",&nsenha2);
		if(nsenha == nsenha2){
			senhas[3]=nsenha;					
		}
			else{;
			printf("\nSenhas digitada não conferem\n");
			}
			limite=0;
			iniciar();			
		}
		else if(numeroContas[4] == conta && senhas[4] == senha){
		printf("Digite a nova senha numerica de 4 digitos\n");
		scanf("%d",&nsenha);
		printf("Repita a nova senha\n");
		scanf("%d",&nsenha2);
		if(nsenha == nsenha2){
			senhas[4]=nsenha;					
		}
			else{;
			printf("\nSenhas digitada não conferem\n");
			}
			limite=0;
			iniciar();			
		}
		else if(numeroContas[5] == conta && senhas[5] == senha){
		printf("Digite a nova senha numerica de 4 digitos\n");
		scanf("%d",&nsenha);
		printf("Repita a nova senha\n");
		scanf("%d",&nsenha2);
		if(nsenha == nsenha2){
			senhas[5]=nsenha;					
		}
			else{;
			printf("\nSenhas digitada não conferem\n");
			}
			limite=0;
			iniciar();			
		}
		else if(numeroContas[6] == conta && senhas[6] == senha){
		printf("Digite a nova senha numerica de 4 digitos\n");
		scanf("%d",&nsenha);
		printf("Repita a nova senha\n");
		scanf("%d",&nsenha2);
		if(nsenha == nsenha2){
			senhas[6]=nsenha;					
		}
			else{;
			printf("\nSenhas digitada não conferem\n");
			}
			limite=0;
			iniciar();			
		}
		else if(numeroContas[7] == conta && senhas[7] == senha){
		printf("Digite a nova senha numerica de 4 digitos\n");
		scanf("%d",&nsenha);
		printf("Repita a nova senha\n");
		scanf("%d",&nsenha2);
		if(nsenha == nsenha2){
			senhas[7]=nsenha;					
		}
			else{;
			printf("\nSenhas digitada não conferem\n");
			}
			limite=0;
			iniciar();			
		}
		else if(numeroContas[8] == conta && senhas[8] == senha){
		printf("Digite a nova senha numerica de 4 digitos\n");
		scanf("%d",&nsenha);
		printf("Repita a nova senha\n");
		scanf("%d",&nsenha2);
		if(nsenha == nsenha2){
			senhas[8]=nsenha;					
		}
			else{;
			printf("\nSenhas digitada não conferem\n");
			}
			limite=0;
			iniciar();			
		}
		else if(numeroContas[9] == conta && senhas[9] == senha){
		printf("Digite a nova senha numerica de 4 digitos\n");
		scanf("%d",&nsenha);
		printf("Repita a nova senha\n");
		scanf("%d",&nsenha2);
		if(nsenha == nsenha2){
			senhas[9]=nsenha;					
		}
			else{;
			printf("\nSenhas digitada não conferem\n");
			}
			iniciar();			
		}
		
		else{puts("\nCONTA E/OU SENHA INVALIDA\n");
			for(int i=0;i<2;i++){  
				system("color 70");
				system("color 07");
			}
		cont++;
		trocarSenha();
		}	
		system("color 47"); 
		printf("\nConta bloqueada, procure seu gerente!!!");
	}
		
}



void finalizar(){
	
	printf("\n\t\t***SESSÃO FINALIZADA***\n");
	
exit(0);	
	
}



