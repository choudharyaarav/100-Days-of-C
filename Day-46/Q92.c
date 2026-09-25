// Created by Aarav Choudhary on 24/09/26.
/* Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s
*/
#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0};
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            count[str[i] - 'a']++;
        i++;
    }

    i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z' && count[str[i] - 'a'] > 1) {
            printf("%c", str[i]);
            break;
        }
        i++;
    }

    return 0;
}