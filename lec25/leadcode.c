#include <stdio.h>

int main()
{
    int a[5] = {1, 9, 4, 5, 8};
    int i = 0, j = 4;
    int maxArea = 0;
    while (i < j)
    {
        int h;
        if (a[i] < a[j])
        {
            h = a[i];
        }
        else
        {
            h = a[j];
        }
        int w = j - i;
        int area = h * w;
        if (area > maxArea)
        {
            maxArea = area;
        }

        if (a[i] < a[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    printf("%d", maxArea);
}