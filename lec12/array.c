#include <stdio.h>
int main()
{
    // int a[5]={2,4,6,8,10};
    // printf("%d",a[2]);
    // for (int i=0; i<5 ; i++)
    // {
    //     printf("\n%d",a[i]);
    // }

    // //reverse
    // int b[5]={2,4,6,8,10};
    // for (int i=4; i>=0 ; i--)
    // {
    //     printf("\n%d",b[i]);
    // }
    // return 0;
    // find sum of array
    // int c[5] = {2, 3, 4, 5, 6};
    // int sum = 0;
    // for (int i = 0; i < 5; i++)
    // {
    //     sum = sum + c[i];
    // }
    // printf("\n%d", sum);

    // max no
    //  int c[5] = {8,5,9,3,0};

    // int max=c[0];
    // for (int i = 0; i < 5; i++)
    // {
    //     if (c[i] > max)

    //         max = c[i];

    // }
    // printf("\n%d", max);

    // min
    // int c[5] = {-8, -5, -9, -3, 0};

    // int min = c[0];
    // for (int i = 0; i < 5; i++)
    // {
    //     if (c[i] < min)

    //         min = c[i];
    // }
    // printf("\n%d", min);

    // even or odd no

    int no[5] = {1,2,3,4,5};
    int even=0;
    int odd=0;
    for (int i = 0; i < 5; i++)
    {
        if (no[i] % 2 == 0){

            even = no[i];
            printf("\n even: %d",even);
            }
        else {
            odd = no[i];
           printf("\n odd:%d",odd); 
        }
    }

    return 0;
}