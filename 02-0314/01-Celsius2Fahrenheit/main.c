#include <stdio.h>

int main() {
    int target_i = 35;
    float target_f = 35.0;

    // Wrap as bracket for making them calculated first.
    // All student have to see what is different between integer and float.
    target_i = target_i * ( 9 / 5 ) + 32; // target * 1 + 32 (because THIS IS INTEGER!)
    target_f = target_f * ( 9 / 5 ) + 32; // target * 1.8 + 31
    
    fprintf(stdout, "Celsius 35 is Fahrenheit degree \n",target_i);
    fprintf(stdout, "%d\n",target_i);
    fprintf(stdout, "%f\n",target_f);
    
    return 0;
}