package GeradoresdeMatrizes;

import java.util.Random;

public class MatrizD {
	public double[][] matrizD = { 
			{ GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() },
			{ GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() },
			{ GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita(), GeradordeImprobabilidadeInfinita() } 
	};
	
	public double[][] getMatrizD() {
		return matrizD;
	}

	public void setMatrizD(double[][] matrizD) {
		this.matrizD = matrizD;
	}

	static double GeradordeImprobabilidadeInfinita() {
		Random aleatorio = new Random();
		double valor = aleatorio.nextDouble(100);
		return valor;
	}
	
	public static void printaMatriz(double[][] matriz) {
		for (int x = 0; x < 3; x++) {
			for (int y = 0; y < 3; y++) {
				if (y != 2) {
					System.out.print(matriz[x][y]);
					System.out.print("  ");
				} else {
					System.out.print(matriz[x][y]);
					System.out.println("\n");
				}
			}
		}
	}
	
	public static void multiplicaMatrizDOUBLE(double[][] matriz1, double[][] matriz2) {
		double[][] matrizRes = new double[3][3];

		for (int x = 0; x < 3; x++) {
			for (int y = 0; y < 3; y++) {
				matrizRes[x][y] = 0;
				for (int z = 0; z < 3; z++) {
					matrizRes[x][y] += matriz1[x][z] * matriz2[z][y];
				}
			}
		}
		printaMatriz(matrizRes);
	}
}
