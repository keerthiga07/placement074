import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the array size: ");
        int n = scan.nextInt();
        
        System.out.print("Enter the array elements: ");
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = scan.nextInt();
        }
        
        System.out.print("Enter the difference: ");
        int diff = scan.nextInt();
        
        int count = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(Math.abs(arr[i] - arr[j]) == diff) {
                    count++;
                }
            }
        }
        
        System.out.println("Number of pairs with difference " + diff + " is " + count);
    }
}
