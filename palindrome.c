#include <stdio.h>

int main() {
    int n,r,t,rev=0;
    printf("\n Enter an integer number:");
    scanf("%d",&n);
    t=n;
    printf("\nThe given number= %d",n);
    while(n!=0)
    {
    r = n%10;
    rev = rev*10+r;
    n = n/10;
    }
    printf("\n The reverse value =%d",rev);
    if(t==rev)
    {
        printf("\n%d is Palindrome",t);
}
else
{
    printf("\n%d is not Palindrome",t);
}
return 0;
}

output 
/tmp/QhsAmH3Jcd.o

 Enter an integer number:2

The given number= 2
 The reverse value =2
2 is Palindrome

=== Code Execution Successful ===
