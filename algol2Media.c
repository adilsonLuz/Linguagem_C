/*
    Name: Programa para calcular a media aritimetica de quatro numeros inteiros
    Author: Chacal
    Date: 16-08-2019
    Description:
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>
main ()

{

float media, x, y, w, z;

x=y=w=z=media=0.0;

setlocale(LC_ALL, "Portuguese");

printf("Digite primeira nota.\n");
scanf(" %f",&x);
printf("Qual segunda nota?\n");
scanf(" %f",&y);
printf("Digite terceira nota\n");
scanf(" %f",&w);
printf("Qual quarta nota?\n");
scanf(" %f",&z);
media=(x+y+w+z)/4;

printf("a media do aluno e: %f", media);

return 0;

}
