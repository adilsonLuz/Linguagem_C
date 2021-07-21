#include <stdio.h>
#include <time.h>
#include <string.h>
// pega o dia em ingles
char tempo(){
    char data[32];
    struct tm *ts;
    ssize_t last;
    time_t timestamp = time(NULL);

    ts   = localtime(&timestamp);
    last = strftime(data, 32, "%A", ts);
    data[last] = '\0';

    return data;
}
//pega a hora apenas
int hora() {
    time_t now;
    struct tm *now_tm;
    int hour;

    now = time(NULL);
    now_tm = localtime(&now);
    hour = now_tm->tm_hour;
    return  hour;
}
void Chek() {
//verifica tudo com base nos parametros atribuidos
    char pLlaca[7];
    char* Dia = (char *) tempo();
    int horas = hora();
    printf("Digite a placa que deseja consultar");
    scanf("%7s", pLlaca);
    if (pLlaca[6] == 1 || pLlaca[6] == 2 && strcmp(Dia,"Monday")==0 || horas >=7 && horas <= 10 || horas >=17 && horas <= 20 ) {
        printf("Sua placa nao pode percorrer sp hoje, é segunda e sua multa é 139.16 reais");
    } else if((pLlaca[6] == 3 || pLlaca[6] == 4) && strcmp(Dia,"Tuesday")==0 || horas >=7 && horas <= 10 || horas >=17 && horas <= 20) {
        printf("Sua placa nao pode percorrer sp hoje, é terça e sua multa é 139.16 reais");
    } else if ((pLlaca[6] == 5 || pLlaca[6] == 6) && strcmp(Dia,"Wednesday")==0 || horas >=7 && horas <= 10 || horas >=17 && horas <= 20) {
        printf("Sua placa nao pode percorrer sp hoje, é quarta e sua multa é 139.16 reais");
    }else if ((pLlaca[6] == 7 || pLlaca[6] == 8) && strcmp(Dia,"Thursday")==0 || horas >=7 && horas <= 10 || horas >=17 && horas <= 20) {
        printf("Sua placa nao pode percorrer sp hoje, é quinta e sua multa é 139.16 reais");
    }else if ((pLlaca[6] == 9 || pLlaca[6] == 0) && strcmp(Dia,"Friday")==0 || horas >=7 && horas <= 10 || horas >=17 && horas <= 20) {
        printf("Sua placa nao pode percorrer sp hoje, é sexta e sua multa é 139.16 reais");
    } else {
        printf("Sua placa pode percorrer");
    }
}
//inicio
int main() {
    Chek();
    return 0;
}
