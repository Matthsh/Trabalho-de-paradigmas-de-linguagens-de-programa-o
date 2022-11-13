using System.Diagnostics;
using System.Runtime.InteropServices;

namespace program
{
    public class aplication
    {
        public static void Main(String[] args)
        {
            Stopwatch sw = new Stopwatch();
            Stopwatch sw2 = new Stopwatch();
            int n = 35;

            sw.Start();
            for (int cont = 0; cont < 100; cont++)
            {   
                Console.WriteLine("Fibonacci de " + n);
                sw2.Start();
                Console.WriteLine("Fibonacci iterativo: " + fibonacci(n));
                sw2.Stop();
                Console.WriteLine("Tempo de execução em segundos: " + sw2.ElapsedMilliseconds + " milisegundos");
                sw2.Restart();
                sw2.Start();
                Console.WriteLine("\nFibonacci Recursivo: " + fibonacciRecursivo(n));
                sw2.Stop();
                Console.WriteLine("Tempo de execução em segundos: " + sw2.ElapsedMilliseconds + " milisegundos\n");

            }
            sw.Stop();
            Console.WriteLine("O tempo total de execução de 100 repeticoes da rotina foi de: " + sw.ElapsedMilliseconds + " milisegundos\n");
        }
        static int fibonacci(int n)
        {
            int a = 0, b = 1, c= 0, i = 2;
            if (n <= 1) return a;
            else if (n == 2) return b;
            else
            {
                while (i < n)
                {
                    c = a + b;
                    a = b;
                    b = c;
                    i++;
                }
                return c;
            }
        }

        static int fibonacciRecursivo(int n)
        {
            if (n <= 1) return 0;
            else if (n == 2) return 1;
            else return (fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2));
        }
    }
}