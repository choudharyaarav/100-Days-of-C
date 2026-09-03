// Created by Aarav Choudhary on 23/08/26.
//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main() {
    int n, sum = 0, num = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum += num;
        num += 2;
    }

    printf("%d", sum);

    return 0;
}