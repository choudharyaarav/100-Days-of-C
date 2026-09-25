// Created by Aarav Choudhary on 25/09/26.
/* Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/
#include <stdio.h>

int main() {
    char str[200], word[100], longest[100];
    int i = 0, j, k, maxLen = 0, len;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    i = 0;
    while (1) {
        j = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            word[j] = str[i];
            j++;
            i++;
        }
        word[j] = '\0';
        len = j;

        if (len > maxLen) {
            maxLen = len;
            for (k = 0; k <= len; k++)
                longest[k] = word[k];
        }

        if (str[i] == '\0')
            break;
        i++;
    }

    printf("Longest word: %s", longest);

    return 0;
}