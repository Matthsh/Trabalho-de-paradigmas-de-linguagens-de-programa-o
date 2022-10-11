/*
Criar um algoritmo que leia o valor de um produto e imprima na console este valor com
30% de acréscimo.
*/
#include <stdio.h>
#include <time.h>

void main(void){
    float tempo;
    time_t t_ini, t_fim;
    int i, j;

    t_ini = time(NULL);
    for(i = 0; i < 50000; i++) {
        for(j = 0; j < 20000; j++);
    }
    t_fim = time(NULL);

    tempo = difftime(t_fim, t_ini);

    printf("Tempo: %f milisegundos\n", tempo);
}