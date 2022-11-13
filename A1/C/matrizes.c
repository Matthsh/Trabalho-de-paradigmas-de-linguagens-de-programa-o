/* Faça um relatório técnico contendo uma análise dos diferentes tipos
e precisões numéricas com int int, float e double na realização de
operações de multiplicação de matrizes. */

// Relatório da linguagem C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiplicaMatrizesF(float matriz1[3][3], float matriz2[3][3]);
void printaMatrizF(float matriz[3][3]);
float GeradordeImprobabilidadeInfinitaF();

void multiplicaMatrizesD(double matriz1[3][3], double matriz2[3][3]);
void printaMatrizD(double matriz[3][3]);
double GeradordeImprobabilidadeInfinitaD();

void main()
{
    float tempo;
    time_t t_ini, t_fim;

    t_ini = time(NULL);
    for(int n = 0; n < 10; n++){
    int matriz1[3][3] = {
        {GeradordeImprobabilidadeInfinitaS(), GeradordeImprobabilidadeInfinitaS(), GeradordeImprobabilidadeInfinitaS()},
        {GeradordeImprobabilidadeInfinitaS(), GeradordeImprobabilidadeInfinitaS(), GeradordeImprobabilidadeInfinitaS()},
        {GeradordeImprobabilidadeInfinitaS(), GeradordeImprobabilidadeInfinitaS(), GeradordeImprobabilidadeInfinitaS()}};
    int matriz2[3][3] = {
        {GeradordeImprobabilidadeInfinitaS(), GeradordeImprobabilidadeInfinitaS(), GeradordeImprobabilidadeInfinitaS()},
        {GeradordeImprobabilidadeInfinitaS(), GeradordeImprobabilidadeInfinitaS(), GeradordeImprobabilidadeInfinitaS()},
        {GeradordeImprobabilidadeInfinitaS(), GeradordeImprobabilidadeInfinitaS(), GeradordeImprobabilidadeInfinitaS()}};

    float matriz3[3][3] = {
        {GeradordeImprobabilidadeInfinitaF(), GeradordeImprobabilidadeInfinitaF(), GeradordeImprobabilidadeInfinitaF()},
        {GeradordeImprobabilidadeInfinitaF(), GeradordeImprobabilidadeInfinitaF(), GeradordeImprobabilidadeInfinitaF()},
        {GeradordeImprobabilidadeInfinitaF(), GeradordeImprobabilidadeInfinitaF(), GeradordeImprobabilidadeInfinitaF()}};
    float matriz4[3][3] = {
        {GeradordeImprobabilidadeInfinitaF(), GeradordeImprobabilidadeInfinitaF(), GeradordeImprobabilidadeInfinitaF()},
        {GeradordeImprobabilidadeInfinitaF(), GeradordeImprobabilidadeInfinitaF(), GeradordeImprobabilidadeInfinitaF()},
        {GeradordeImprobabilidadeInfinitaF(), GeradordeImprobabilidadeInfinitaF(), GeradordeImprobabilidadeInfinitaF()}};

    double matriz5[3][3] = {
        {GeradordeImprobabilidadeInfinitaD(), GeradordeImprobabilidadeInfinitaD(), GeradordeImprobabilidadeInfinitaD()},
        {GeradordeImprobabilidadeInfinitaD(), GeradordeImprobabilidadeInfinitaD(), GeradordeImprobabilidadeInfinitaD()},
        {GeradordeImprobabilidadeInfinitaD(), GeradordeImprobabilidadeInfinitaD(), GeradordeImprobabilidadeInfinitaD()}};
    double matriz6[3][3] = {
        {GeradordeImprobabilidadeInfinitaD(), GeradordeImprobabilidadeInfinitaD(), GeradordeImprobabilidadeInfinitaD()},
        {GeradordeImprobabilidadeInfinitaD(), GeradordeImprobabilidadeInfinitaD(), GeradordeImprobabilidadeInfinitaD()},
        {GeradordeImprobabilidadeInfinitaD(), GeradordeImprobabilidadeInfinitaD(), GeradordeImprobabilidadeInfinitaD()}};

    

    printf("Matrizes short\n");
    printf("Matriz 1: \n");
    printaMatrizS(matriz1);
    printf("----------------\n");
    printf("Matriz 2: \n");
    printaMatrizS(matriz2);
    printf("----------------\n");
    printf("Matriz resultante: \n");
    multiplicaMatrizesS(matriz1, matriz2);

    printf("\nMatrizes float\n");
    printf("Matriz 1: \n");
    printaMatrizF(matriz3);
    printf("----------------\n");
    printf("Matriz 2: \n");
    printaMatrizF(matriz4);
    printf("----------------\n");
    printf("Matriz resultante: \n");
    multiplicaMatrizesF(matriz3, matriz4);

    printf("\nMatrizes double\n");
    printf("Matriz 1: \n");
    printaMatrizD(matriz5);
    printf("----------------\n");
    printf("Matriz 2: \n");
    printaMatrizD(matriz6);
    printf("----------------\n");
    printf("Matriz resultante: \n");
    multiplicaMatrizesD(matriz5, matriz6);

    }

    t_fim = time(NULL);
    tempo = difftime(t_fim, t_ini);
    float media = tempo / 10;
    printf("O tempo total de execucao da rotina 10x foi de: %f segundos\n", tempo);
    printf("O tempo medio de execucao de cada rotinas foi de: %f millisegundos", media);
}

// Setor dos int

int GeradordeImprobabilidadeInfinitaS()
{
    srand(time(NULL) - rand());
    int resp = rand() % 100;
    return resp;
}

void printaMatrizS(int matriz[3][3])
{
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            if (y != 2)
            {
                printf(" %5d ", matriz[x][y]);
            }
            else
            {
                printf(" %5d \n", matriz[x][y]);
            }
        }
    }
}

void multiplicaMatrizesS(int matriz1[3][3], int matriz2[3][3])
{
    int matrizRes[3][3];
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            matrizRes[x][y] = 0;
            for (int z = 0; z < 3; z++)
            {
                matrizRes[x][y] += matriz1[x][z] * matriz2[z][y];
            }
        }
    }
    printaMatrizS(matrizRes);
}

// Setor dos float

float GeradordeImprobabilidadeInfinitaF()
{
    srand(time(NULL) - rand());
    float resp = (((float)rand()) / ((float)RAND_MAX)) * 100;
    return resp;
}

void printaMatrizF(float matriz[3][3])
{
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            if (y != 2)
            {
                printf(" %5f ", matriz[x][y]);
            }
            else
            {
                printf(" %5f \n", matriz[x][y]);
            }
        }
    }
}

void multiplicaMatrizesF(float matriz1[3][3], float matriz2[3][3])
{
    float matrizRes[3][3];
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            matrizRes[x][y] = 0;
            for (int z = 0; z < 3; z++)
            {
                matrizRes[x][y] += matriz1[x][z] * matriz2[z][y];
            }
        }
    }
    printaMatrizF(matrizRes);
}

// Setor dos double

double GeradordeImprobabilidadeInfinitaD()
{
    srand(time(NULL) - rand());
    double resp = (((double)rand()) / ((double)RAND_MAX)) * 100;
    return resp;
}

void printaMatrizD(double matriz[3][3])
{
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            if (y != 2)
            {
                printf(" %.16lf ", matriz[x][y]);
            }
            else
            {
                printf(" %.16lf \n", matriz[x][y]);
            }
        }
    }
}

void multiplicaMatrizesD(double matriz1[3][3], double matriz2[3][3])
{
    double matrizRes[3][3];
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            matrizRes[x][y] = 0;
            for (int z = 0; z < 3; z++)
            {
                matrizRes[x][y] += matriz1[x][z] * matriz2[z][y];
            }
        }
    }
    printaMatrizD(matrizRes);
}

/* - Realize experimentos comparando os tempos de execução das linguagens
com as operações de multiplicação de matrizes quadradas com diferentes
valores: 𝑁 = {500, 1000, 1500, 2000, 2500, 3000} */