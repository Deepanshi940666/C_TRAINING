#include <stdio.h>

int main()
{
     int i;
      for (i = 0; i < 10; i++)
      {
          printf("hello!\n");
      }

      for (i = 10; i > 0; i--)
      {
          printf("bye.....\n");
      }

      for (i = 5; i > 0; i--)
      {
          printf("%d\n", i);
      }

      for (i = 5; i < 10; i++)
      {
          printf("%d\n", i);
      }

    // int c;
    // for (c= 97; c< 105; c++)
    // {
    //     printf("%c\n");
    // }

    // even no.
    int e, n;
    printf(" Enter a no.:");
    scanf("%d", &n);
    printf("Even no .:");
    for (e = 2; e <= n; e = e + 2)
    {
        printf(" %d\n", e);
    }
    printf("odd no .:");
    for (e = 1; e <= n; e = e + 2)
    {

        printf("%d\n ", e);
    }

    // sum of no.

    int j, sum = 0, n;
    printf("Enter a no.:");
    scanf("%d", &n);
    for (j = 1; j <= n; j++)
    {
        sum += j;
    }
    printf("%d", sum);

    // sum of even no.(wrong)
    int add = 0, k, x;
    printf("Enter a no.:");
    scanf("%d", &x);
    for (k = 2; k <= x; k = k + 2)
    {
        add = add + k;
       
    }
     printf("%d", add);

    // table  of 5

    int numb, itration;
    printf("Enter a no.:");
    scanf("%d", &numb);
    for (itration = 1; itration <= 10; itration++)
    {
        printf("%d", numb * itration);
    }

    // find sum of digits of a no.

    int sum = 0, n;
    printf("Enter a no.");
    scanf("%d", &n);
    while (n!= 0)
    {
        int lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n / 10;
    }
    printf("sum=%d", sum);
    return 0;
}