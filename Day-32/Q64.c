// Created by Aarav Choudhary on 10/09/26.
/* Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/
#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}, digit, i, maxCount = 0, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;

    if (num == 0)
        count[0]++;

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for (i = 0; i <= 9; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Most frequent digit = %d", maxDigit);

    return 0;
}