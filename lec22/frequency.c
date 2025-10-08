#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello";
    int freq[256]={0};
    int ln = strlen(str);
    for (int i = 0; i <= ln ; i++)   //for(int i=0;i<ln;i++){
    {
        freq[str[i]]++;
    }
        for (int i = 0; i <256 ; i++) // for(int j=0;j<i;j++){
        {
            if (freq[i]>0)
            {
                  printf("%c:%d\n",i,freq[i]);
            }
          
        }
      
    
}
