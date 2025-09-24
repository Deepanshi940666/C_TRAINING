#include<stdio.h>

int main(){
    int a[5]={2,5,3,6,1};
    int *p=a;
    for (int i=0; i<5; i++){
        printf("%d\n",*(p+i));
    }

    for (int j=4; j>=0; j--){
        printf("%d\n",*(p+j));
    }
}