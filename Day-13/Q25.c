// Created by Aarav Choudhary on 22/08/26.
//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;
    printf("Enter expression (num1 num2 operator): ");
    scanf("%f %f %c", &num1, &num2, &op);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%g", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%g", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%g", result);
            break;
        case '/':
            result = num1 / num2;
            printf("%g", result);
            break;
        case '%':
            printf("%d", (int)num1 % (int)num2);
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}