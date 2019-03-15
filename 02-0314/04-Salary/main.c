#include <stdio.h>

int main() {
    int monthly_salary;
    int annual_income;
    
    printf("Enter your monthly salary: ");
    scanf("%d",&monthly_salary);
    
    annual_income = 12 * monthly_salary;
    
    printf("\n");
    printf("Your annual income is %d\n", annual_income);
    
    return 0;
}