#include <stdio.h>

int main() {
    int target; // there is no boolean object in C
    
    target = 1;
    
    if ( target != 0 ) printf("b = true\n");
    else printf("b = false\n");
    
    /*
        You dont have to make this part equal to me.
        just write and use "if (1>2)" is okay. this is just for explaning. (Just skip it when youre bored on here)

        In other language, there are values that refers true or false. (Java have true / false. Python have True / False.)
        In C, there is no value named true or false. (from C99 standard, there is stdbool.h to refer them however)

        See below. I assign "1>2" on target. then computer will check that is true or false.
        C also calculate logical sentence, but I said there is no value named true or false.
        So when you calculate them, it returns 0 or 1.
        When false, return 0. when true, return 1.

        And you can also put integer only on If statement. When you do this, If statement is run unless that value is zero.
        Yeah, this means, In C, All values except 0 is checked as true.
    */
    target = ( 1 > 2 ); // C also calculate logical sentence. 1 isnt larger then 2, so it returns 0.
    
    if ( target ) printf("b = true\n"); // Even target is just integer, it can be compiled!
    else printf("b = false\n");
    
    return 0;
}