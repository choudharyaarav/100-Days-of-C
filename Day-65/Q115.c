// Created by Aarav Choudhary on 13/10/26.
/* Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram
*/
#include <stdio.h>

int main() {
    char s[100], t[100];
    int count[26] = {0};
    int i, lenS = 0, lenT = 0, isAnagram = 1;

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    while (s[lenS] != '\0')
        lenS++;
    while (t[lenT] != '\0')
        lenT++;

    if (lenS != lenT) {
        isAnagram = 0;
    } else {
        for (i = 0; i < lenS; i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for (i = 0; i < 26; i++) {
            if (count[i] != 0) {
                isAnagram = 0;
                break;
            }
        }
    }

    if (isAnagram == 1)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}