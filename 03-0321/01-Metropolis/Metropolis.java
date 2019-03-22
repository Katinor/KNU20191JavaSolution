import java.util.Scanner;
public class Metropolis {
    public static void main (String[] args) {
        boolean isCapital, isMetropolis;
        int citizen;
        int bourgeois;

        Scanner sc = new Scanner(System.in);
        System.out.println("Is the city a capital? (capital:1 non-capital:0) ");
        isCapital = (sc.nextInt() == 1);
        System.out.println("Population? (in thousands) ");
        citizen = sc.nextInt();
        System.out.println("bourgeois? (in thousands) ");
        bourgeois = sc.nextInt();

        isMetropolis = (isCapital && citizen >= 1000) || (bourgeois >= 500);

        System.out.println("Metropolis : "+ isMetropolis);
    }
}