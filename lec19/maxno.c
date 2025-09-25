#include<stdio.h>

int main(){
    int a[7]={2,-5,-4,-8,1,-6,5};
    int n=sizeof(a)/sizeof(a[0]);
    int k=2;
    for (int i=0;i<=n-k;i++){
        int max=a[i];
        for (int j=i; j<k; j++){
          if (a[i+j]>max){
       int max = a[i+j];
            
          }
       }
    
        printf(" %d",max);
       }
    }
