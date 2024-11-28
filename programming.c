// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int a ;
    printf("Enter an integer (positive or negative): ");
    scanf("%d", &a);
    if ((a > 0) && (a %2 == 0))
      printf("The nubmber %d is positive and even", a);
     else if ((a > 0)&& (a %2 == 1))
         printf("\n The nubmber %d is positive and odd", a);
     return 0;
     }

Output
Enter an integer (positive or negative): 2
The nubmber 2 is positive and even

=== Code Execution Successful ===
