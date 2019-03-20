import java.util.Scanner;

public class Salary {
    public static void main (String[] args) {
        int monthly_salary;
        int annual_income;
        Scanner input = new Scanner(System.in);

        System.out.print("Enter your monthly salary: ");
        monthly_salary = input.nextInt();
        
        annual_income = 12 * monthly_salary;
        
        System.out.println("");
        System.out.printf("Your annual income is %d\n", annual_income);
    }
}