#include <stdio.h>

int main()
{
    int a[5]={5,6,0,3,4}, i,j=0;
     for(i=0; i<5;i++){
        if(a[i]!=0){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
     }
     for(i=0;i<5;i++){
        printf("%d",a[i]);
     }
}