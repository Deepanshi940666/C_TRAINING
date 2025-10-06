#include <stdio.h>
#include <string.h>
int main()
{

    char name[] = "madam";
    int ln = strlen(name);
    int isTrue = 1;
    int i;
    for (i = 0; i <= ln / 2; i++)
    {
        if (name[i] != name[ln - i - 1])
        {
            isTrue = 0;
            break;
        }
    }
        if (isTrue)
        {
            printf("hai bhai hai");
        //    for(i=0;name[i]<=ln;i++){
        //     if (name[i] != name[ln - i - 1]){
        //         printf("%c",name[ln/2]);
        //     }
        //    }
        }
        else
        {
            printf("nhi h");
        }
    
    
    
}