#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}

output 
/tmp/qffOu5m3cz.o
Enter an integer: 3
3 is odd.


=== Code Execution Successful ===
