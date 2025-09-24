#include <stdio.h>

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("%d\n%d",*a,*b);
}

int main()
{
    int x = 10;
    int y = 20;
    swap(&x, &y);
    return 0; 
}