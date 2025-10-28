#include<stdio.h>

int main(){
    int price[6]={7,1,5,3,6,4},min=price[0], maxP=0,i;
    for( i=1;i<6;i++){
       if(min>price[i]){
         min=price[i];
       }
       else{
        int profit=price[i]-min;
        if(profit>maxP){
            maxP=profit;
        }
       }

    }
    printf("maximum profit is %d",maxP);
}