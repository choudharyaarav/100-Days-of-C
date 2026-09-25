// Created by Aarav Choudhary on 23/09/26.
/* Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2
*/
#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Enter character to count: ");
    scanf(" %c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch)
            count++;
        i++;
    }

    printf("Count = %d", count);

    return 0;
}