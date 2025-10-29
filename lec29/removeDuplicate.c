//using XOR 
#include<stdio.h>

int main(){
    int a[5]={4,6,3,4,6};
    int xor=0;
    for(int i=0;i<5;i++){
        xor=xor^a[i];
    }
    printf("%d",xor);
}