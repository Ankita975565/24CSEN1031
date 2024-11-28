#include <stdio.h>

int main() 
{
  int number, factorial_number=1;
  printf("Enter a non-negative number: ");
  scanf("%d", &number);
  
  if (number < 0)
     printf("Entered a negative number.  Factorial cannot be determined");
  else 
  {
    for (int i=1; i<=number; i++)
        factorial_number *= i;
    printf("Factorial of %d is %d", number, factorial_number);      
  }
  return 0;
}
OUTPUT:-
Enter a non-negative number: 8
Factorial of 8 is 40320

=== Code Execution Successful ===
