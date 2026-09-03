// Created by Aarav Choudhary on 25/08/26.
//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() {
    int n;
    int binary[32];
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    while (n > 0) {
        binary[count] = n % 2;
        n /= 2;
        count++;
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    return 0;
}