#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "aabbasefn";
    int freq[256]={0};
    int ln = strlen(str);
    for (int i = 0; i < ln ; i++) 
    {
        freq[str[i]]++;
    }
    for (int j = 0; j <ln; j++){

            if (freq [str[j]]==1)
            {
                  printf("%c",str[j]);
                  break;
            }
          
        }
    
}