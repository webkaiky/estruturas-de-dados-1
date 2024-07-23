#include<stdio.h>

typedef enum dias_semana{
    SEGUNDA=2
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO,
    DOMINGO
}DiaSemana;

int main(){
    DiaSemana dias_semana;
    printf("infomre o dia da semana: 2-8\t");
    scanf("%d", &dia);
    switch(dia){
        case SEGUNDA:
        printf("segunda-feira\n");
    break;
     case TERCA:
        printf("terça-feira\n");
    break;
     case QUARTA:
        printf("quarta-feira\n");
    break;
     case QUINTA:
        printf("quinta-feira\n");
    break;
     case SEXTA:
        printf("sexta-feira\n");
    break;
     case SABADO:
        printf("sabado\n");
    break;
     case DOMINGO:
        printf("domingo\n");
    break;
    default:
        printf("dia nao cadastrado\n");
    break;
    }
    return 0;
}
