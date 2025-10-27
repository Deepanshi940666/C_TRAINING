#include<stdio.h>

int main(){
    int price[6]={7,1,5,3,6,4},min=price[0],day=0;
    for(int i=1;i<6;i++){
       if(min>price[i]){
         min=price[i];
         day++;
       }

    }
    int max=price[day];
    for(int i=day;i<6;i++){
        if(max<price[i]){
            max=price[i];
        }
    }
    int maxprofit=max-min;
    printf("%d",maxprofit);
}