#include <stdio.h>

int main()
{
    // reverse of digit and find pallindrome

    int num, res = 0;
    printf("\nEnter a no.");
    scanf("%d", &num);
    int original = num;
    while (num != 0)
    {
        int lastDigit = num % 10;
        res = res * 10 + lastDigit;
        num = num / 10;
    }
    printf("Reverse of no. is %d\n", res);

    if (original == res)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }

    // factorial

    int fac=1, n;
    printf("Enter a no.");
    scanf("%d",&n);
    int i=n;
    while(i>=1)
    {
        fac=fac*i;
        i--;
    }
    printf("factorial of %d is %d",n,fac);

    
    return 0;
}