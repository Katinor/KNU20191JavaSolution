#include <stdio.h>
#include <string.h>

int main() {
    int x = 100;
    int y = 200;
    int sum = x + y;
    printf("%d\n",sum);
    
    const char str_x[] = "100";
    const char str_y[] = "200";
    char str_sum[10];

    strcpy(str_sum, str_x); // str_sum = str_x
    strcat(str_sum, str_y); // str_sum = str_sum + str_y
    printf("%s\n",str_sum);

    /*
        I saw many students are confused on using strcpy and strcat.

        > c = strcpy(char[] a, char[] b)
            copy b and paste on a. c is just a pointer refer the address of a!
        > c = strcat(char[] a, char[] b)
            assign a+b to a. NOT c! c is just a pointer! I said twice because this is important.

        So you dont have to get return value from them. because, char[] a itself is changed.		
    */

    return 0;
}