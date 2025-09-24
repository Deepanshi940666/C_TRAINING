#include <stdio.h>
int main()
{


  // prime no.

   int no, i;

    printf("Enter a no.");
    scanf("%d", &no);
    int isPrime = 1;
    if (no <= 1)
    {
      printf("Not Prime No.");
      return 0;
    }
    for (i = 2; i < no; i++)
    {
      if (no % i == 0)
      {
        isPrime=0;
        break;

      }
   }
    if (isPrime){
      printf("Prime");

    }
    else{
       printf(" Not prime");
    }
    // fabbonacci serier by for loop

    int n=5,t1=0,t2=1;
    for (n=0;n<=5;n++)
    {
       printf(" %d",t1);
      int next=t1+t2;
      t1=t2;
      t2=next;

    }

  // fabbonacci serier by for loop

  int num= 5, T1 = 0, T2 = 1;
  num = 0;
  while (num <= 5)
  {
    printf(" %d", T1);
    int nextt = T1+ T2 ;
    T1 = T2 ;
    T2  = nextt;
    num++;
  }

  int countt = 0, value;
    printf("Enter a no.");
    scanf("%d", &value);
    if(value==0)

    {
        countt=1;
    }
    while (value> 0)
    {
        countt ++;
       value =value/ 10;
    }
    printf("count=%d", countt);
  return 0;
}