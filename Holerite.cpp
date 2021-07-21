/*
	Name: Holerite.cpp
	Author: Chacal
	Date: 18/04/20 15:32
	Description: Holerite para funcion�rios que trabalham em empresa de transporte coletivo. 
	Retorna a quantidade de horas normais, total de horas extras, total de horas do adiocional 
	noturno a partir de informa��es inseridas como hora de entrada e sa�da. Ap�s inserir 
	descontos(se houver) retorna todos os valores em R$ que ir� receber.
 	
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>


main()
{


	float HorNor, HorEx, HorDsr, HorAdcNot, IntDsr, IntDsrAdcNot, Inss, VlHorNor, VlHorEx, 
	VlDsr, VlAdcNot, VlIntDsr, VlIntDsrAdcNot, BaseVal, TotVenc, VlInss, VlAdSal, BaseConOdon, 
	BaseConMed, VlConFar, VlConsItau, VlValeDir, VlCesBasc, DescIrrf, VlConvOdon, VlConMed, 
	VlOutDesc, TotDesc, SalBase, BaseHorEx, VlBaseIrrf, VlBaseFgts, VlFgtsMes, VlUltSalVet[3], 
	VlAuxGov, VlLiqRec, EntrVet[31], SaidaVet[31], JorVet[31], TotJor, HorExVet[31], TotHorEx, 
	AdcNotVet[31], TotAdcNot, MedSal, Sal1=1599.61, Sal2=2666.29, Sal3=1813.03, IndSegDes=1279.69, 
	In1=1659.68, In2=2765.66, In3=5531.31, In4=604.44, BaseFar, BaseItau, BaseDir, BaseCes, BaseOut;
	
	int FolgMes, DiaTrab, Folg, MemFam, Jco, Dia[31], EntrH[31], EntrM[31],o,i,d;
	
	HorNor=HorEx=HorDsr=HorAdcNot=IntDsr=IntDsrAdcNot=Inss=VlHorNor=VlHorEx=VlDsr=VlAdcNot=
	VlIntDsr=VlIntDsrAdcNot=TotVenc=DescIrrf=VlInss=BaseVal=VlAdSal=BaseConOdon=BaseConMed=
	VlConFar=VlConsItau=VlValeDir=VlCesBasc=VlConvOdon=VlConMed=VlOutDesc=TotDesc=SalBase=
	BaseHorEx=VlBaseIrrf=VlBaseFgts=VlFgtsMes=VlAuxGov=VlLiqRec=TotJor=TotHorEx=TotAdcNot=
	MedSal=BaseFar=BaseItau=BaseDir=BaseCes=BaseOut=0.0;
	
	FolgMes=DiaTrab=MemFam=Folg=Jco=i=0,o=d=1;
	
	setlocale(LC_ALL,"portuguese");

	
	printf("Digite o valor de sua hora normal, R$ ");
		scanf("%f",&SalBase);
	printf("Digite Desconto de convenio farm�cia, caso houver. R$ ");
		scanf("%f",&VlConFar);
	printf("Digite Desconto de consignado Ita�, caso houver. R$ ");
		scanf("%f",&VlConsItau);
	printf("Digite Descontos diversos, caso houver. R$ ");
		scanf("%f",&VlValeDir);
	printf("Digite Desconto referente entrega de cesta b�sica, caso haja, sen�o digite 0. R$ ");
		scanf("%f",&VlCesBasc);
	printf("Digite o valor do conv�nio odontol�gico, caso haja, sen�o digite 0. R$ ");
		scanf("%f",&VlConvOdon);
	printf("Digite o valor do conv�nio m�dico, caso haja, sen�o digite 0. R$ ");
		scanf("%f",&VlConMed);
	printf("Quantas pessoas s�o coveniadas?  ");
		scanf("%d",&MemFam);
	printf("Digite o valor de outros descontos, caso haja, sen�o digite 0. R$ ");
		scanf("%f",&VlOutDesc);   //Pede ao usu�rio para inserir as informa��es para os calculos e armazena.
		
		for(i=0;i<3;i++){
			printf("Digite o sal�rio dos ultimos tr�s meses. %d�m�s R$ ",o);
			scanf("%f",&VlUltSalVet[i]);
			o++;
 	   }
 	   
 	   for(i=0;i<12;i++){
			printf("\nDigite a hora de sua entrada, dia %d: ", d);
			scanf("%f",&EntrVet[i]);
			printf("Digite a hora de sua sa�da:          ");
			scanf("%f",&SaidaVet[i]);
			d++;
		}  //Pede ao usu�rio para inserir hor�rio de entrada e sa�da e armazena em vetores.
		for(i=0;i<12;i++){
		printf("Entrada %.2f\nSa�da %.2f\n", EntrVet[i], SaidaVet[i]);
        }
        for(i=0;i<3;i++){
   		 	MedSal=MedSal+VlUltSalVet[i];    	
		}
				MedSal=MedSal/i;  //Calcula m�dia dos tr�s ultimos sal�rios.
    		
    	if(MedSal <= Sal1){
    		VlAuxGov=(MedSal*80/100)/2;
			}
				else if(MedSal<=Sal2){
						VlAuxGov=((MedSal-Sal1)*50/100+IndSegDes)/2;
					}
							else{
								VlAuxGov=Sal3/2;
									}   //Calcula o valor do auxilio do governo com base no seguro desemprego.
	
		
		for(i=0;i<7;i++){
			JorVet[i]=SaidaVet[i]-EntrVet[i]-1.00;
		}   //Calcula Quantidade de horas trabalhada no dia e armazena em um vetor.
		for(i=0;i<7;i++){
		printf("Horas trabalhadas %.2f\n", JorVet[i]);
    	}
		
		for(i=0;i<31;i++){
			HorExVet[i]=JorVet[i]-7.20;
			printf("Horas extras %.2f\n", HorExVet[i]);
		}   //Calcula quantas horas extra no dia e armazena em um vetor.
		
		for(i=0;i<7;i++){
			TotJor=TotJor+JorVet[i];
		}   //Calcula o total de horas normais trabalhado no m�s e armazena.
		
		printf("trabalhadas %.2f\n", TotJor);
    	
	
		for(i=0;i<31;i++){
			TotHorEx=TotHorEx+HorExVet[i];
		}   //Calcula o total de horas extras trabalhado no m�s e armazena.
	
		for(i=0;i<31;i++){
			TotAdcNot=TotAdcNot+AdcNotVet[i];
		}   //Calcula o total de horas de adicional noturno do m�s e armazena.		
		
		BaseHorEx=SalBase*56/100+SalBase;//Calcula o valor em reais de cada Hora extra e armazena.
		VlHorNor=TotJor*SalBase;//Calcula o valor em reais sobre as horas normais.
		VlHorEx=TotHorEx*BaseHorEx;//Calcula o valor em reais sobre as horas extras.
		VlDsr=TotJor/(DiaTrab+Jco)*Folg*SalBase;//Calcula o valor em reais do DSR do m�s.
		VlAdcNot=TotAdcNot*(SalBase*20/100);//Calcula o valor em reais do adicional noturno do m�s.
		VlIntDsr=TotHorEx/DiaTrab*Folg*BaseHorEx;//Calcula o valor em reais da integra��o do DSR do m�s.
		VlIntDsrAdcNot=VlAdcNot/DiaTrab*Folg;//Calcula o valor em reais da integra��o do DSR sobre adicional noturno do m�s.
		TotVenc=VlHorNor+VlAuxGov+VlHorEx+VlDsr+VlAdcNot+VlIntDsr+VlIntDsrAdcNot;//Calcula o valor em reais de todos os vencimentos do m�s.
		HorDsr=VlDsr/SalBase;//Calcula total de horas do DSR.
		HorAdcNot=TotAdcNot;
		
		if(TotVenc<=In1){
			Inss=8/100;
		}
			else if(TotVenc<=In2){
				Inss=9/100;
			}
				else if(TotVenc<=In3){
					Inss=11/100;
				}
					else{
						Inss=In4;
					}   //Determina porcentagem do INSS do m�s.
					
		VlInss=TotVenc*Inss;   //Calcula o valor em reais de INSS.
		VlAdSal=TotVenc*40/100;   //Calcula o valor em reais do adiantamento salarial(vale).
		TotDesc=VlConFar+VlConsItau+VlValeDir+VlCesBasc+VlConvOdon+VlInss+VlAdSal+VlConMed+
				VlOutDesc;   //Calcula o valor em reais dos descontos do m�s.
		BaseConOdon=VlConvOdon/MemFam;
		BaseConMed=VlConMed/MemFam;
		VlBaseIrrf=TotVenc-VlAdSal;   //Valor para calculo do IRRF do m�s.
		VlBaseFgts=TotVenc;   //Valor para calculo do FGTS do m�s.
		VlFgtsMes=VlBaseFgts*8/100;   //Valor em reais do FGTS do m�s.
		DescIrrf=VlBaseIrrf*2,504656/100;   //Valor em reais IRRF do m�s.
		VlLiqRec=TotVenc-TotDesc;   //Valor em reais liquido a receber no m�s.
		
	puts("_______________________________________________________");	
	printf("DESCRI��O                       REF           VALOR\n");	
	puts("_____________________________ ______ __________________");
	printf("---------VENCIMENTOS---------\n");
	printf("HORAS NORMAIS...................%.2f.........R$ %.2f\n",TotJor,VlHorNor);
	printf("HORAS EXTRA.....................%.2f.........R$ %.2f\n",TotHorEx,VlHorEx);
	printf("DSR.............................%.2f.........R$ %.2f\n",HorDsr,VlDsr);
	printf("ADIC NOTURNO....................%.2f.........R$ %.2f\n",HorAdcNot,VlAdcNot);
	printf("INT DSR.........................%.2f.........R$ %.2f\n",IntDsr,VlIntDsr);
	printf("INT DSR ADIC NOTURNO............%.2f.........R$ %.2f\n",IntDsrAdcNot,VlIntDsrAdcNot);
	printf("TOTAL........................................R$ %.2f\n",TotVenc);
	printf("\n--------- DESCONTOS ---------\n");
	printf("INSS............................%.2f.........R$ %.2f\n",Inss,VlInss);
	printf("DESC ADIANTAMENTO SALARIAL......%.2f.........R$ %.2f\n",BaseVal,VlAdSal);
	printf("CONVENIO FARM�CIA...............%.2f.........R$ %.2f\n",BaseFar,VlConFar);
	printf("EMPRESTIMO CONSIGNADO ITA�......%.2f.........R$ %.2f\n",BaseItau,VlConsItau);
	printf("VALES DIVERSOS..................%.2f.........R$ %.2f\n",BaseDir,VlValeDir);
	printf("TAXA ENTREGA CESTA BASICA.......%.2f.........R$ %.2f\n",BaseCes,VlCesBasc);
	printf("CONVENIO ODONTOLOGICO AMIL......%.2f.........R$ %.2f\n",BaseConOdon,VlConvOdon);
	printf("CONVENIO M�DICO AMIL............%.2f.........R$ %.2f\n",BaseConMed,VlConMed);
	printf("OUTROS DESCONTOS................%.2f.........R$ %.2f\n",BaseOut,VlOutDesc);
	printf("TOTAL........................................R$ %.2f\n",TotDesc);
	puts("_______________________________________________________");
	printf("IRRF DESCONTADO NO ADIANTAMENTO..............R$ %.2f\n",DescIrrf);
	puts("_______________________________________________________\n");
	printf("SAL. BASE....................................R$ %.2f\n",SalBase);
	printf("SAL. CONTRIBUI��O............................R$ %.2f\n",TotVenc);
	printf("BASE CALC. DO IRRF...........................R$ %.2f\n",VlBaseIrrf);
	printf("BASE CALC. FGTS..............................R$ %.2f\n",TotVenc);
	printf("FGTS DO M�S..................................R$ %.2f\n",TotVenc*8/100);
	puts("_______________________________________________________");
	printf("TOTAL L�QUIDO A RECEBER......................R$ %.2f\n",VlLiqRec);
	puts("_______________________________________________________");
	puts("\nDEVIDO PANDEMIA DO COVID 19 HOUVE REDU��O NAS JORNADAS\nDE TRABALHO E EM CONSEQU�NCIA O GOVERNO LIBEROU COTAS\nDO SEGURO DESEMPREGO.");
	printf("\nM�DIA DOS ULTIMOS SAL�RIOS...................R$ %.2f\n", MedSal);
	printf("AUXILIO DO GOVERNO...........................R$ %.2f",VlAuxGov);
		
		
		
	
		
	
return 0;	
}//fim do programa

