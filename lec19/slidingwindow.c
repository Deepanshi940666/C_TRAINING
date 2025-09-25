#include<stdio.h>

int main(){
    int a[5]={2,5,4,8,1};
    int n=sizeof(a)/sizeof(a[0]);
    int wsum=0;
    int maxsum=0;
    int k=2;
    for (int i=0;i<k;i++){
        wsum= wsum+a[i];
    }
    maxsum = wsum;
    for (int j=k; j<n; j++){
        wsum+=a[j]-a[j-k];
        if (wsum>maxsum){
            maxsum=wsum;
        }
    }
    printf("%d",maxsum);
}
