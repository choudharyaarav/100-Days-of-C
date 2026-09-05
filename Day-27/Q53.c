// Created by Aarav Choudhary on 05/09/26.
/* Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main() {
    int n = 5, i, j, stars;

    // Upper half (including middle row)
    for (i = 1; i <= n; i++) {
        stars = 2 * i - 1;
        for (j = 1; j <= stars; j++)
            printf("*");
        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {
        stars = 2 * i - 1;
        for (j = 1; j <= stars; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}