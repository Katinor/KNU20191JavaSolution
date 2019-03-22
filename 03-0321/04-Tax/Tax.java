import java.util.Scanner;

public class Tax {
    public static void main (String[] args) {
        int income, tax;
        Scanner input = new Scanner(System.in);

        System.out.print("Enter your income: ");
        income = input.nextInt();
        
        if ( income <= 1000) tax = (int) (0.09 * income);
        else if ( income <= 4000) tax = (int) (0.18 * income);
        else if ( income < 8000) tax = (int) (0.27 * income);
        else tax = (int) (0.36 * income);
        
        System.out.printf("Total tax is %d\n", tax);
    }
}