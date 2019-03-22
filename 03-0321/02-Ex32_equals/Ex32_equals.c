#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define STRICT 0
#define IGNORE 1

/**
 * @brief Function to check two string is same or different. (ctype.h needed)
 * 
 * @param str1 : (const char *) First string
 * @param str2 : (const chat *) Second string
 * @param swt : (int) 0 as Strict (standard), 1 as Ignore (ignore capitals)
 * @return int : 1 when same, 0 when different
 */
int str_equalto( const char * str1, const char * str2 , int swt) {
    int d = 0;
    if (swt == STRICT) {
        d = strcmp(str1, str2);
    }
    else {
        for (;; str1++, str2++) {
            // Can you imagine what will be done when you use ++ on pointer!
            // you know, str1 and str2 are pointer, and they store address!
            // ++ on pointer, it change address stored in pointer!
            // There is no initial state and conditional state. because, str1 and str2 are already initialized!
            // They are called as pointer so they are pointing entry address of array!
            d = tolower((unsigned char) *str1) - tolower((unsigned char) *str2);
            if (d != 0 || !*str1) break; 
        }
    }
    if (d) return 0; // Because, d is 0 when two is same. so if d != 0, that means they are different.
    else return 1;
}

int main() {
    char * string1 = "aardvarks";
    int comp[5] = {0, 0, 0, 0, 0};
    int a;
    comp[0] = str_equalto(string1, "boa constrictors", STRICT);
    comp[1] = str_equalto(string1, "aardvarks", STRICT);
    comp[2] = str_equalto(string1, "Aardvarks", STRICT);
    comp[3] = str_equalto(string1, "Aardvarks", IGNORE);
    comp[4] = str_equalto(string1, "aardvarks are cooler", STRICT);

    for(a = 0; a < 5; a++) {
        if (comp[a]) printf("true ");
        else printf("false ");
    }

    return 0;
}