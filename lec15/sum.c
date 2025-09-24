#include<stdio.h>
#include<limits.h>
int main()
{
  int a[6]={3,-5,9,-4,6,-3};
  int maxsum= INT_MIN;
  for(int i=0;i<6;i++)
  {
    int currsum=0;
    for(int j=i;j<6; j++)
    {
        currsum=currsum+a[j];
        
    }
  }
    return 0;
}