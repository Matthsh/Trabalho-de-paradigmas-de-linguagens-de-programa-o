#include <stdio.h>
#include <time.h>

long long int fibonacci( int n );
long long int fibonacciRecursivo( int n );

void main(){
    int n = 35;
    time_t t_ini, t_fim;

    long inicioTempoTotal = time(NULL);
    for(int cont = 0; cont < 100; cont++) {
        printf("\nFibonacci de %d", n);
        t_ini = time(NULL);
        printf("\nFibonacci iterativo: %lld\n", fibonacci(n));
        t_fim = time(NULL);
        printf("\tTempo de Execucao em segundos: %f\n\n", difftime(t_fim, t_ini));
        t_ini = time(NULL);
        printf("\nFibonacci Recursivo: %lld\n", fibonacciRecursivo(n));
        t_fim = time(NULL);
        printf("\tTempo de Execucao em segundos: %f\n\n", difftime(t_fim, t_ini));
    }
    long fimTempoTotal = time(NULL);
    long tempo = fimTempoTotal - inicioTempoTotal;
    printf("O tempo total de execucao da rotina de 100 repeticoes foi de: %ld milisegundos", tempo);
    return NULL;
}


long long int fibonacci(int n){
    long long int a = 0, b = 1, c, i = 2;
    if (n <= 1) return a;
    else if (n == 2) return b;
    else {
        while (i < n) {
             c = a + b;
             a = b;
             b = c; 
             i++;
        }
        return c;
    }
}

long long int fibonacciRecursivo(int n){
    if (n <= 1) return 0;
    else if (n == 2) return 1;
    else return (fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2));
}