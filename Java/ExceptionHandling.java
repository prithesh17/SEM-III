import java.util.Scanner;

public class ExceptionHandling {

    public static void main(String args[]) {
        System.out.println("Enter 2 numbers");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        try {
            int s = a / b;
            System.out.println("Result = " + s);
        } catch (Exception e) {
            System.out.println("Exception occured " + e);
        }
    }
}
