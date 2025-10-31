#include <stdio.h>

int pallindrom(int a[], int i, int j)
{
    if (i >= j)
    {
        return 1;
    }
    if (a[i] != a[j])
    {
        return 0;
    }
    return pallindrom(a, ++i, --j);
}
int main()
{
    int a[5] = {1, 2, 3, 2, 1};
    int startindex = 0;
    int endindex =4 ;
    int data = pallindrom(a, startindex, endindex);
    printf("%d\n", data);
    if (data == 0)
    {
        printf("not pallindrom");
    }
    else
    {
        printf("pallindrom");
    }
}