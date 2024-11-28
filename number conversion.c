// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num, base, temp, i=-1, length;
    int new_number[77];
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num; //make a copy of the original num
    printf("Enter the base: ");
    scanf("%d", &base);
    while (temp > 0) {
        new_number[++i] = temp % base;
        temp = temp/base;
    }
    length=i;
    printf("The number %d in base %d is: ", num, base);
    for(i=length; i>=0; i--)
        printf("%d", new_number[i]);
    printf("\n");
      return 0;
}

output
/tmp/h9kem1jtZR.o
Enter a number: 66
Enter the base: 2
The number 66 in base 2 is: 1000010


=== Code Execution Successful ===
