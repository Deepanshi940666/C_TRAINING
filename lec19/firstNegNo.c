#include<stdio.h>

int main(){
    int a[7]={2,-5,-4,-8,1,-6,5};
    int n=sizeof(a)/sizeof(a[0]);
    int k=2;
    for (int i=0;i<=n-k;i++){
        int found=0;
        for (int j=i; j<i+k; j++){
          if (a[j]<0){
            printf("\n%d",a[j] );
            found=1;
            break;
          }
       }
       if (found){
        printf("\n0");
       }
    }
}