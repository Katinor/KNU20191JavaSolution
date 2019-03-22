import java.util.Scanner;

public class mainj {
    public static void main (String[] args) {
        int month;
        int year = 2009;
        int days = 0;
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter your a number: ");
        month = input.nextInt();

        switch ( month ) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                days = 31;
                break;
            case 4: case 6: case 9: case 11:
                days = 30;
                break;
            case 2:
                if ( ((year%4 == 0) && (year%100 != 0)) || (year%400 == 0) ) days = 29;
                else days = 28;
                break;
            default:
                days = 0;
                System.out.println("Wrong month number");
        }
        System.out.println("Number of days in month "+ month +" is "+ days);
    }
}