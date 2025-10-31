#include <stdio.h>

int fac(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    return a * fac(a - 1);
}
int main()
{
    int data = fac(3);
    printf("Factorial is %d", data);
}