import java.util.Scanner;

public class mainj {
    public static void main (String[] args) {
        double radius;
        double area;
        final double PI = 3.14;
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the radius: ");
        radius = input.nextDouble();
        
        area = PI * radius * radius;
        
        System.out.println("");
        System.out.print("Area = ");
        System.out.println(area);
        System.out.printf("Area = %f\n",area);
        System.out.println("Area = "+ area);
    }
}