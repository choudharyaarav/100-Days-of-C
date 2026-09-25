// Created by Aarav Choudhary on 27/09/26.
/* Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.
*/
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter full name: ");
    scanf("%[^\n]", str);

    printf("%c.", str[0]);

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != '\0')
            printf("%c.", str[i + 1]);
        i++;
    }

    return 0;
}