#include <stdio.h>

int main() {
    char        aByte   = 5; // there is no byte variable on C
    short       aShort  = -9025;
    int         anInt   = 50000;
    long long   aLong   = 809230972398749L; //You have to use long long
    float       aFloat  = 5.0F;
    double      aDouble = 3.1415926535897;
    char        char1   = 'A', char2 = 'B', char3 = 'a';
    
    int longFloatComparison     = (aLong == aFloat),
        byteIntComparison       = (aByte <= anInt),
        doubleShortComparison   = (aDouble != aShort),
        charComparison1         = (char1 == char3),
        charComparison2         = (char3 < char2);
    
    int expr = 15 % 4 * 7 + 15 >= 1 || 7 < 12 || !(-8 != 7 && 7 <= 10 && 5 > 7);

    printf("Compare long   & float  : ");
    if (longFloatComparison) printf("true\n");
    else printf("false\n");

    printf("Compare byte   & int    : ");
    if (byteIntComparison) printf("true\n");
    else printf("false\n");

    printf("Compare double & short  : ");
    if (doubleShortComparison) printf("true\n");
    else printf("false\n");

    printf("Compare char1  & char3  : ");
    if (charComparison1) printf("true\n");
    else printf("false\n");

    printf("Compare char3  & char2  : ");
    if (charComparison2) printf("true\n");
    else printf("false\n");
    
    printf("Value of long expression: ");
    if (expr) printf("true\n");
    else printf("false\n");

    return 0;
}