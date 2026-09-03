// Created by Aarav Choudhary on 30/08/26.
//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int digits = 0, temp = n;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    int firstDigit = n / (int)pow(10, digits - 1);
    int lastDigit = n % 10;

    int result = n - firstDigit * (int)pow(10, digits - 1) - lastDigit;
    result = result + lastDigit * (int)pow(10, digits - 1) + firstDigit;

    printf("%d", result);

    return 0;
}