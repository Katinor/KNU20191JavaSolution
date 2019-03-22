#include <stdio.h>

#define PI 3.14 // you dont have to define this. just write 3.14 at proper area.

int main() {
    int month;
    int year = 2009;
    int days = 0;
    
    printf("Enter your a number: ");
    scanf("%d",&month);

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
            printf("\nWrong month number");
    }

    printf("\nNumber of days in month %d is %d", month, days);

    return 0;
}