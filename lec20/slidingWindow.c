#include<stdio.h>

int main(){
    int a[5]={1,-4,6,7,3};
    int wSum=0;
    int k=3,i;
    for( i=0; i<k; i++){
        wSum+=a[i];
    }
    int maxSum= wSum;
    for(int j=k; j<5; j++){
        wSum=wSum+a[j]-a[j-k];
        if(wSum>maxSum){
            maxSum=wSum;
        }
    }
    printf("%d",maxSum);
}