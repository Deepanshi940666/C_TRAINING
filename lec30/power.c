#include <stdio.h>

int sum(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    return a * sum(a, b - 1);
}
int main()
{
    int data = sum(3, 3);
    printf("power is %d", data);
}