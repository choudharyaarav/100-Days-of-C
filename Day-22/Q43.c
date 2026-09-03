// Created by Aarav Choudhary on 31/08/26.
//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main() {
    int n, original, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    while (n != 0) {
        digit = n % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++)
            fact *= i;
        sum += fact;
        n /= 10;
    }

    if (sum == original)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}