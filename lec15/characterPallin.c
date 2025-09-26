#include <stdio.h>

int main()
{
    char a[50] ;
    int i;
    printf("Enter a name:");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        continue;
    }
    int n=i;
    int iscorrect = 1;

    for (i = 0; i < n/2; i++)
    {
        if (a[i]!=a[n-1-i])   //5-1-i
         iscorrect=0;
    }
    if (iscorrect==1){
        printf("hai bhai hai");
    }
    else {
         printf("nhi hai bhai nhi hai");
    }
    return 0;
}