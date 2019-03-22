#include <stdio.h>

int main() {
    int isCapital, isMetropolis, citizen, bourgeois;

    printf("Is the city a capital? (capital:1 non-capital:0) ");
    scanf("%d",&isCapital);
    printf("\nPopulation? (in thousands) ");
    scanf("%d",&citizen);
    printf("\nPopulation? (in thousands) ");
    scanf("%d",&bourgeois);

    isMetropolis = ( isCapital && citizen >= 1000) || (bourgeois >= 500);

    printf("\nMetropolis : ");
    if (isMetropolis) printf("true");
    else printf("false");

    return 0;
}