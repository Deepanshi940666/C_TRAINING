#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 2, 1};
    int iscorrect = 1;

    for (int i = 0; i < 5/2; i++)
    {
        if (a[i]!=a[5-i-1]);
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