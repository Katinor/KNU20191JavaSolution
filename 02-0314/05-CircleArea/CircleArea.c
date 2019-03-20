#include <stdio.h>

#define PI 3.14 // you dont have to define this. just write 3.14 at proper area.

int main() {
    double radius;
    double area;
    
    printf("Enter the radius: ");
    scanf("%lf",&radius); // double use %lf! LONG FLOAT XD
    printf("\n");
    printf("Radius = %lf\n", radius);
    
    area = PI * radius * radius;
    
    printf("\n");
    printf("Area = %lf\n", area);
    
    return 0;
}