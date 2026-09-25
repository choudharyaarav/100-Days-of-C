// Created by Aarav Choudhary on 21/09/26.
/* Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome
*/
#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[len] != '\0')
        len++;

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}