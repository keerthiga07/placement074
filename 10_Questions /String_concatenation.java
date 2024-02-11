import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the first String: ");
        String str1 = scan.nextLine();
        
        System.out.print("Enter the second String: ");
        String str2 = scan.nextLine();
        
        if (!str1.isEmpty() && !str2.isEmpty() && str1.charAt(str1.length() - 1) == str2.charAt(0)) {
            String concatenated = str1.substring(0, str1.length() - 1) + str2.substring(1);
            System.out.println("Concatenated string: " + concatenated);
        } else {
            System.out.println("Cannot concatenate the strings.");
        }
    }
}
