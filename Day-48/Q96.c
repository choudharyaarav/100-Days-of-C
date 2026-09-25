// Created by Aarav Choudhary on 26/09/26.
/* Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start = 0, end;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i + 1] == '\0') {
            end = (str[i] == ' ') ? i - 1 : i;
            while (end >= start) {
                printf("%c", str[end]);
                end--;
            }
            if (str[i] == ' ')
                printf(" ");
            start = i + 1;
        }
        i++;
    }

    return 0;
}