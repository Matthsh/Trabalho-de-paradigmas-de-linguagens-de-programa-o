package programa;


public class Executavel {

	public static void main(String[] args) {

		long inicioTempoTotal = System.currentTimeMillis();
		for(int cont = 0; cont < 100; cont++) {
			int n = 35;
			System.out.println("\nFibonacci de " + n);
			
			long inicio = System.currentTimeMillis();
			System.out.println("Fibonacci iterativo: " + fibonacci(n));
			long fim = System.currentTimeMillis();
			System.out.printf("O tempo de execução do fibonacci iterativo foi de: %d milisegundos", fim - inicio);
			
			inicio = fim = 0;
	
			inicio = System.currentTimeMillis();
			System.out.println("\n\nFibonacci Recursivo: " + fibonacciRecursivo(n));
			fim = System.currentTimeMillis();
			System.out.printf("O tempo de execução do fibonacci recursivo foi de: %d milisegundos", fim - inicio);
			System.out.println("\n------------------------------------------------------------------");
		}
		long fimTempoTotal = System.currentTimeMillis();
		long tempoTotal = fimTempoTotal - inicioTempoTotal;
		System.out.printf("O tempo total de execução da rotina de 100 repetições foi de: %d milisegundos", tempoTotal);
	}
	
	static int fibonacci(int n){
	    int a = 0, b = 1, c = 0, i = 2;
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

	static int fibonacciRecursivo(int n){
	    if (n <= 1) return 0;
	    else if (n == 2) return 1;
	    else return (fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2));
	}
}
