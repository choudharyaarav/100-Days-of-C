// Created by Aarav Choudhary on 28/09/26.
/* Q100: Print all sub-strings of a string.

Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c
*/
#include <stdio.h>

int main() {
    char str[100];
    int i, j, k, len = 0, first = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0')
        len++;

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (!first)
                printf(",");
            for (k = i; k <= j; k++)
                printf("%c", str[k]);
            first = 0;
        }
    }

    return 0;
}