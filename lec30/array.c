#include <stdio.h>

void array(int a[],int ln,int index)
{
    if(index == ln) return ;
    printf("%d",a[index]);
    array(a,ln, index+=1);
}
int main()
{
   int a[5]={1,2,3,4,5};
   int ln=5;
   array(a,ln, 0);
//    printf("%d",data);
}