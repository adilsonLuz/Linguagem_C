/* Programa para calcular a media aritimetica de quatro numeros inteiros
Autor: Chacal
Data: 16-08-2019 */

#include <stdio.h>
#include <conio.h>

main ()

{

int x, y, w, z;
float media;

x=y=w=z=0;
media=0.0;

printf("digite primeira nota\n");
scanf("%d",&x);
printf("qual segunda nota\n");
scanf("%d",&y);
printf("digite terceira nota\n");
scanf("%d",&w);
printf("qual quarta nota\n");
scanf("%d",&z);
media = x+y+w+z/4;

printf("a media do aluno e: %d", media);

return 0;

}
