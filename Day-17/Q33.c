// Created by Aarav Choudhary on 26/08/26.
//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digit, digits = 0;
    long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    while (n != 0) {
        n /= 10;
        digits++;
    }

    n = original;
    while (n != 0) {
        digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }

    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}