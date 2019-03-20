public class Celsius2Fahrenheit {
    public static void main (String[] args) {
        System.out.println("Celsius 35 is Fahrenheit degree ");

        // Wrap as bracket for making them calculated first.
        // All student have to see what is different between integer and float.
        // (All reasons of value are already explained on C side. check it again.)
        System.out.println( 35 * (9 / 5) + 32 );
        System.out.println( 35 * (9.0 / 5.0) + 32 );
    }
}