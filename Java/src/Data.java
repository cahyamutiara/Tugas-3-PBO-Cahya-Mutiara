import java.util.Scanner;

public class Data {
    Scanner in = new Scanner(System.in);

    public void array1D() {
        int[] arr = new int[10];
        int i;
        int sum = 0;

        System.out.print("Masukkan 10 elemen array : ");
        for (i=0; i < 10; i++) {
            arr[i] = in.nextInt();
            sum = sum + arr[i];
        }
        System.out.println("Elemen array adalah: ");
        for (i = 0; i < 10; i++) {
            System.out.printf("%d ", arr[i]);
        }
    }

    public void array2D() {
        int i;
        int j;
        int m;
        int n;
        int[][] A = new int[10][10];
        int flag = 0;

        System.out.print("Masukkan jumlah baris : ");
        m = in.nextInt();
        System.out.print("Masukkan jumlah kolom : ");
        n = in.nextInt();

        if (m != n) {
            System.out.println("Bukan matriks bujur sangkar!!");
            System.exit(1);
        }

        System.out.println("nMasukkan nilai array");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                System.out.printf("Nilai array baris ke-%d kolom ke-%d : ", i, j);
                A[i][j] = in.nextInt();
            }
        }

        i = 0;
        do {
            j = 0;
            while ( j < n) {
                if ((A[i][j] != 1) && (A[j][i] != 0)) {
                    flag = 1;
                    break;
                }
                j++;
            }
            i++;
        } while(i < m);

        if (flag == 0) {
            System.out.println("Matriks merupakan matriks identitas");
        } else {
            System.out.println("Matriks bukan termasuk matriks identitas");
        }
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                System.out.printf("%d ", A[i][j]);
            }
            System.out.println();
        }
    }
}
