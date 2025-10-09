#include<stdio.h>
#include<string.h>


int main()
{
    char str[] = "Hello";
    int  i, j=0;
    char target='e';
    char nstr[100];
    int ln = strlen(str);
    for (i = 0; i <ln; i++)  
    {
            if (str[i]!=target)
            {
               nstr[j]=str[i];
               j++;
            }
            nstr[j]='\0';
    }
    printf("%s", nstr);
   
}
