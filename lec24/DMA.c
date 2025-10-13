// DMA (dynamic memory allocation )
#include <stdio.h>
#include <stdlib.h>
int main()

{
    //malloc function
    int n;
    printf("Enter a size:");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));  //default value is garbage value

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", arr[i]);
    }

    // rearrange array using malloc

    // int no;
    // printf("Enter a size:");
    // scanf("%d", &no);
    // int *a = (int *)malloc(no * sizeof(int));

    // printf("Enter %d elements:\n", no);
    // for (int i = 0; i < no; i++)
    // {
    //     scanf("%d", &a[i]);
    // }
    // int j=0;
    // for(int i=0;i<no;i++){

    //     if(a[i]==0){
    //         a[j]=a[i];
    //         j++;
    //          printf("\n%d",a[j]);
    //     }
    //     if(a[i]<0){
    //         a[j]=a[i];
    //         j++;
    //          printf("\n%d",a[j]);
    //     }
    //     if(a[i]>0){
    //         a[j]=a[i];
    //         j++;
    //          printf("\n%d",a[j]);
    //     }
         
    // }

    // relloc function

    printf("\n Enter new size :");
    int newSize;
    scanf("%d", &newSize);
    arr = (int *)realloc(arr, newSize * sizeof(int));

    printf("Enter %d new elements:\n", newSize);
    for (int i = 0; i < newSize; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < newSize; i++)
    {
        printf("\n%d", arr[i]);
    }

    //calloc function (bydefault values are 0)

    int num;
    printf("Enter a size:");
    scanf("%d", &num);
    int *arr1 = (int *)calloc(num ,  sizeof(int));  //bydefault value is zero
    free(arr1);                                     //free all remaining space 
    printf("Enter %d elements:\n", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < num; i++)
    {
        printf("\n%d", arr1[i]);
    }
    return 0;
}