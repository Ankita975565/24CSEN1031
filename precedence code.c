#include <stdio.h>

int main() {
    int a = 19, b = 3, c;
    c = a + b * 30;
    printf("Value of c = %d\n", c);
    
    c = a / b * 12;
    printf("Value of c = %d\n", c);
    
    c = 15 % b * a;
    printf("Value of c = %d\n", c);

    return 0;
}

output 
/tmp/VH2XVbrCd2.o
Value of c = 109
Value of c = 72
Value of c = 0


=== Code Execution Successful ===
