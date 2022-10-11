package testes;

public class Matrizes {

	public static void main(String[] args) {
		int[][] matriz1 = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
		int[][] matriz2 = { { 9, 8, 7 }, { 6, 5, 4 }, { 3, 2, 1 } };
		int[][] matrizRes = new int[3][3];

		for (int y = 0; y < 3; y++) {
			for (int x = 0; x < 3; x++) {
				matrizRes[x][y] = 0;
				for (int z = 0; z < 3; z++) {
					matrizRes[x][y] += matriz1[x][z] * matriz2[z][y];
				}
				if (x != 2) {
					System.out.printf(" %d ", matrizRes[x][y]);
				} else {
					System.out.printf(" %d \n", matrizRes[x][y]);
				}
			}
		}
	}
}
