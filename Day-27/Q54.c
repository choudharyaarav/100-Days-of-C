// Created by Aarav Choudhary on 05/09/26.
/* Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main() {
 int n = 4, i, j, spaces, stars;

 // Upper half
 for (i = 1; i <= n; i++) {
  spaces = n - i;
  stars = 2 * i - 1;

  for (j = 1; j <= spaces; j++)
   printf(" ");
  for (j = 1; j <= stars; j++)
   printf("*");
  printf("\n");
 }

 // Lower half
 for (i = n - 1; i >= 1; i--) {
  spaces = n - i;
  stars = 2 * i - 1;

  for (j = 1; j <= spaces; j++)
   printf(" ");
  for (j = 1; j <= stars; j++)
   printf("*");
  printf("\n");
 }

 return 0;
}
