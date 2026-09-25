// Created by Aarav Choudhary on 26/09/26.
/* Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], combined[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation");
        return 0;
    }

    strcpy(combined, str1);
    strcat(combined, str1);

    if (strstr(combined, str2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}