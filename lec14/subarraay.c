#include <stdio.h>

// int main()
// {
    // int a[5] = {2, -5, 8, -4, 2}, i;
    // int sum1 = 0, sum2 = 0, sum3 = 0;
    // for (i = 0; i < 3; i++)
    // {
    //     sum1 = sum1 + a[i];
    //     // printf("%d", sum1);
    // }

    // for (i = 1; i < 4; i++)
    // {
    //     sum2 = sum2 + a[i];
    // }
    // // printf("%d\n", sum2);

    // for (i = 2; i < 5; i++)
    // {
    //     sum3 = sum3 + a[i];
    // }
    // // printf("%d\n", sum3);
    // if (sum1 > sum2 && sum1 > sum3)
    //     printf("%d", sum1);
    // else if (sum2 > sum1 && sum2 > sum3)
    //     printf("%d", sum2);
    // else if (sum1 == sum2)
    //     printf("%d=%d", sum2 = sum1);
    // else if (sum1 == sum3)
    //     printf("%d=%d", sum1 = sum3);
    // else if (sum2 == sum3)
    //     printf("%d=%d", sum2 = sum3);
    // else
    //     printf("%d", sum3);
    // }

    int maxArraySum(int arr[], int n, int k){
        int maxSum=0;        //int maxSum=INT_MIN
        for(int i=0; i<=n-k; i++)
        {
            int currsum=0;
            for(int j=i; j<i+k;j++ ){
            currsum=currsum+ arr[j];
            }
            if (currsum>maxSum){
                maxSum=currsum;
            }
        }
    }

    int main()
    {
        int arr[7] = {3, 5, 7, 2, 8, 9, 5};
        int k = 3;
        int n = sizeof(arr) / sizeof(arr[0]);
        int data = maxArraySum(arr, n, k);
        printf("%d", data);
        return 0;
    }

