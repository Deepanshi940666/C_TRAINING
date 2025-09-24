#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int firstvalue = a[0];

    for (int i = 0; i < 5; i++)
    {
        a[i] = a[i + 1];
    }
    a[4]=firstvalue;


    for (int k=0; k<5; k++)
    {
        printf("%d", a[k]);
    }
    return 0;
}