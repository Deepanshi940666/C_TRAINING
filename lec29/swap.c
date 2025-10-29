//using XOR 
#include<stdio.h>

int main(){
   int a=20;
   int b=30;
   printf("you have entered \n a=%d \n b=%d \n",a,b);
   a=a^b;
   b=a^b;
   a=a^b;
   printf("After swapping \n a=%d \n b=%d",a,b);
   return 0;
}