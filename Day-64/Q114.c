// Created by Aarav Choudhary on 12/10/26.
/* Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3
*/
#include <stdio.h>

int main() {
    char s[100];
    int len = 0, i, j, k, repeat, maxLen = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    while (s[len] != '\0')
        len++;

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            repeat = 0;
            // check if s[j] is already present between i and j-1
            for (k = i; k < j; k++) {
                if (s[k] == s[j]) {
                    repeat = 1;
                    break;
                }
            }
            if (repeat == 1)
                break;
            if (j - i + 1 > maxLen)
                maxLen = j - i + 1;
        }
    }

    printf("%d", maxLen);

    return 0;
}