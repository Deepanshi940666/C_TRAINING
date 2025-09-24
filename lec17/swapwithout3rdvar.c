#include <stdio.h>

int swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    printf("%d\n%d", *a, *b);
}

int main()
{
    int x = 10;
    int y = 20;
    swap(&x, &y);
    return 0;
}
