#include <stdio.h>

int main()
{
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<=i; j++)
        {
            printf("#");
        }
        for (int k=3; k>i; k--)
        {
           printf(" "); 
        }
         for (int k=3; k>i; k--)
        {
           printf(" "); 
        }
        for (int l=0;l<=i;l++)
        {
              printf("#");
        }
        printf("\n");
    }




   for (int i=0; i<4; i++)
   {
    for (int j=3; j>i; j--)
        {
            printf("#");
        }
        for (int k=0; k<=i; k++)
        {
           printf(" "); 
        }
         for (int k=0; k<=i; k++)
        {
           printf(" "); 
        }
        for (int l=3;l>i;l--)
        {
              printf("#");
        }
        printf("\n");
   }
/* & & &
   &   &
   & & & */

   for (int a=1;a<=3; a++)
   {
    for (int b=1; b<=3;b++)
    {
        if (a==1||a==3||b==1||b==3)
        printf(" & ");
        else
        printf("   ");
    }
    printf("\n");
   }
   


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j || j == (3 - i + 1))
                printf("#");
            else if (i == 2 && j == 0)
                printf("#");
            else if (i == 0 && j == 2)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}