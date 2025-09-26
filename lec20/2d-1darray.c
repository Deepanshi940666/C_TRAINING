#include <stdio.h>

int main()
{
    
    int a[2][2] = {{2, 4}, {1, 3}};
    int b[4];
    int k = 0;
    for ( int i = 0; i < 2; i++)
        
    {
        for (int j = 0; j < 2; j++)
        {
            b[k] = a[i][j];
            k++;
        }
    }
    for (k = 0; k < 4; k++)
    {
        printf("\n%d", b[k]);
    }
    return 0;
}