package Programa;

import GeradoresdeMatrizes.MatrizD;
import GeradoresdeMatrizes.MatrizF;
import GeradoresdeMatrizes.MatrizS;

public class Executor {

	public static void main(String[] args) {
		
		long inicio = System.currentTimeMillis();
		
		//Matrices short
		System.out.println("\nmatrizes short: ");
		
		System.out.println("matriz 1: ");
		MatrizS matrizs1 = new MatrizS();
		matrizs1.getMatrizS();
		MatrizS.printaMatriz(matrizs1.getMatrizS());
		
		System.out.println("matriz 2: ");
		MatrizS matrizs2 = new MatrizS();
		matrizs2.getMatrizS();
		MatrizS.printaMatriz(matrizs2.getMatrizS());
		
		System.out.println("matriz resultante short: ");
		MatrizS.multiplicaMatrizSHORT(matrizs1.getMatrizS(), matrizs2.getMatrizS());
		
		
		//Matrices float
		System.out.println("\nmatrizes float: ");
		
		System.out.println("matriz 1: ");
		MatrizF matrizf1 = new MatrizF();
		matrizf1.getMatrizF();
		MatrizF.printaMatriz(matrizf1.getMatrizF());
		
		System.out.println("matriz 2: ");
		MatrizF matrizf2 = new MatrizF();
		matrizf2.getMatrizF();
		MatrizF.printaMatriz(matrizf2.getMatrizF());
		System.out.println("matriz resultante float: ");
		MatrizF.multiplicaMatrizFLOAT(matrizf1.getMatrizF(), matrizf2.getMatrizF());
		
		//Matrices double
		System.out.println("\nmatrizes double: ");
		
		System.out.println("matriz 1: ");
		MatrizD matrizd1 = new MatrizD();
		matrizd1.getMatrizD();
		MatrizD.printaMatriz(matrizd1.getMatrizD());
		
		System.out.println("matriz 2: ");
		MatrizD matrizd2 = new MatrizD();
		matrizd2.getMatrizD();
		MatrizD.printaMatriz(matrizd2.getMatrizD());
		System.out.println("matriz resultante double: ");
		MatrizD.multiplicaMatrizDOUBLE(matrizd1.getMatrizD(), matrizd2.getMatrizD());
		
		long fim = System.currentTimeMillis();
		
		System.out.printf("\nO tempo de execução foi %d milisegundos", fim - inicio);

	}

}

