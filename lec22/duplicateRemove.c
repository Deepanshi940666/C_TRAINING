#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello";
    int count, i, j;
    int ln = strlen(str);
    for (i = 0; i <= ln - 1; i++)   //for(int i=0;i<ln;i++){
    {
        count = 0;
        for (j = i + 1; j < ln; j++) // for(int j=0;j<i;j++){
        {
            if (str[i] == str[j])
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {

            printf("%c", str[i]);
        }
    }
}
