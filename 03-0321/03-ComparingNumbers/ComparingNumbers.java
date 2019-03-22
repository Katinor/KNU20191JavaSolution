public class ComparingNumbers {
    public static void main (String[] args) {
        byte    aByte   = 5;
        short   aShort  = -9025;
        int     anInt   = 50000;
        long    aLong   = 809230972398749L;
        float   aFloat  = 5.0F;
        double  aDouble = 3.1415926535897;
        char    char1   = 'A', char2 = 'B', char3 = 'a';

        boolean longFloatComparison     = (aLong == aFloat),
                byteIntComparison       = (aByte <= anInt),
                doubleShortComparison   = (aDouble != aShort),
                charComparison1         = (char1 == char3),
                charComparison2         = (char3 < char2);

        boolean expr = 15 % 4 * 7 + 15 >= 1 || 7 < 12 || !(-8 != 7 && 7 <= 10 && 5 > 7);

        System.out.println("Compare long   & float  : "+ longFloatComparison);
        System.out.println("Compare byte   & int    : "+ byteIntComparison);
        System.out.println("Compare double & short  : "+ doubleShortComparison);
        System.out.println("Compare char1  & char3  : "+ charComparison1);
        System.out.println("Compare char3  & char2  : "+ charComparison2);
        System.out.println("Value of long expression: " + expr);
    }
}