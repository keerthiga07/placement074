import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the array size: ");
        int n = scan.nextInt();
        System.out.print("Enter the elements of the array: ");
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scan.nextInt();
        }
        Arrays.sort(arr);
        System.out.print("Enter a number to find the next big number: ");
        int num = scan.nextInt();
        
        int nextBigNumber = findNextBigNumber(arr, num);
        if (nextBigNumber != -1) {
            System.out.println("The next big number of " + num + " is " + nextBigNumber);
        } else {
            System.out.println("No bigger number found after " + num);
        }
    }

    public static int findNextBigNumber(int[] arr, int num) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > num) {
                return arr[i];
            }
        }
        return -1; // If no bigger number found
    }
}
