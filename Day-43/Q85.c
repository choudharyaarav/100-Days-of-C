// Created by Aarav Choudhary on 21/09/26.
/* Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba
*/
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, len = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[len] != '\0')
        len++;

    printf("Reversed: ");
    for (i = len - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}