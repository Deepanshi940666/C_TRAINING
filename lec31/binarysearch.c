#include <stdio.h>

int bs(int a[], int i, int j,int t)
{
    if (i>j)
    {
        return -1;
    }
    int m=(i+j)/2;
    if(a[m]==t)
    {
        return m;
    }
   else if (a[m] < t)
    {
        return bs(a,i=m+1,j,t);
    }
    else{
   return bs(a,i,j=m-1,t);
    }

    
}
int main()
{
    int a[5] = {1, 2, 3, 4,5};
    int startindex = 0;
    int endindex =4 ;
    int mid=(startindex+endindex)/2;
    int target=4;
    int data = bs(a, startindex,endindex,target);
    printf("%d\n", data);
   
        // printf("%d",data);
   
    // else
    // {
    //     printf("pallindrom");
    // }
}