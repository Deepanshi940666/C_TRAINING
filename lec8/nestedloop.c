#include <stdio.h>

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            printf("%d", b);
        }
        printf("\n");
    }

    // * square
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("*");
        }
        printf("\n");
    }

    // lower left triangle

    int c, d;
    for (c = 0; c < 3; c++)
    {
        for (d = 0; d <= c; d++)
        {
            printf("%d", d);
        }
        printf("\n");
    }
    
    // upper left triangle

    for (int k = 0; k < 5; k++)
    {
        for (int l = 5; l > k; l--)
        {
            printf("*");
        }
        printf("\n");
    }
    // lower right triangle
    for (int p = 0; p < 5; p++)
    {
        for (int q = 5; q > p; q--)
        {
            printf("-");
        }
        for (int r = 0; r <= p; r++)
        {
            printf("*");
        }
        printf("\n");
    }
     // upper right triangle
    for (int u = 0; u < 5; u++)
    {
        for ( int v = 0; v <= u; v++)
        {
            printf(" ");
        }
        for (int w=5 ; w<u; w--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}