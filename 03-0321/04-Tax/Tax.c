#include <stdio.h>

int main() {
    int income, tax;
    
    printf("Enter your income: ");
    scanf("%d",&income);

    if ( income <= 1000) tax = (int) (0.09 * income);
    else if ( income <= 4000) tax = (int) (0.18 * income);
    else if ( income < 8000) tax = (int) (0.27 * income);
    else tax = (int) (0.36 * income);

    printf("\nTotal tax is %d", tax);

    return 0;
}