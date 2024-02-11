import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the array size: ");
        int n = scan.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = scan.nextInt();
        }

        Arrays.sort(arr);
        int minProduct = arr[0] * arr[1] * arr[2];
        int min1 = arr[0];
        int min2 = arr[1];
        int min3 = arr[2];

        for(int i = 0; i <= n - 3; i++) {
            int product = arr[i] * arr[i + 1] * arr[i + 2];
            if(product < minProduct) {
                minProduct = product;
                min1 = arr[i];
                min2 = arr[i + 1];
                min3 = arr[i + 2];
            }
        }

        System.out.println("Minimum product of 3 elements: " + minProduct);
        System.out.println("Elements: " + min1 + " " + min2 + " " + min3);
    }
}
