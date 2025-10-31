#include <stdio.h>

int sort(int a[], int i, int j)
{
    if (i>=j)
    {
        return 1;
    }
   
    if(a[i]>a[i+1])
    {
        return 0;
        
    }
    return sort(a,i+1,j);
}
int main()
{
    int a[5] = {1, 2, 3, 4,5};
    int i = 0;
    int j = 4 ;
    int data = sort(a, i,j);
    // printf("%d\n", data);
    if(data==0){
        printf("not");
    }
    else{
         printf("sorted");
    }
}