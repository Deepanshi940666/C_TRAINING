//Recursion: calling of the function again and again by itself
#include<stdio.h>

void sum(int a){
    if(a==0){
        return;
    }
    printf(" %d",a);
    sum(a-1);
    printf(" %d",a);
}
int main(){
    sum(5);
 
}