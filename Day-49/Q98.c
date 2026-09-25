// Created by Aarav Choudhary on 27/09/26.
/* Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/
#include <stdio.h>

int main() {
    char str[100], words[10][20];
    int i = 0, j = 0, k, wordCount = 0;

    printf("Enter full name: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            words[wordCount][j] = '\0';
            wordCount++;
            j = 0;
        } else {
            words[wordCount][j] = str[i];
            j++;
        }
        i++;
    }
    words[wordCount][j] = '\0';
    wordCount++;

    for (k = 0; k < wordCount - 1; k++)
        printf("%c.", words[k][0]);

    printf(" %s", words[wordCount - 1]);

    return 0;
}