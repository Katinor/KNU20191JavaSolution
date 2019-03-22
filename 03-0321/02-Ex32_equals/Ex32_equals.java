public class Ex32_equals {
    public static void main (String[] args) {
        String string1 = "aardvarks";
        boolean comp1, comp2, comp3, comp3b, comp4;
        
        comp1 = string1.equals("boa constrictors");
        comp2 = string1.equals("aardvarks");
        comp3 = string1.equals("Aardvarks");
        comp3b= string1.equalsIgnoreCase("Aardvarks");
        comp4 = string1.equals("aardvarks are cooler");
        System.out.println(comp1 + " " + comp2 + " " + comp3 + " " + comp3b + " " + comp4);
        
    }
}