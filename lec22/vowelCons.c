#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "deepanshi";
    int count,sum, i,no=0,num=0;
    int ln = strlen(str);
    for (i = 0; i <ln ; i++)   
    {
        count = 0;
        sum=0;
       
            if (str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u')
            
            {
                count++;
                no+=count;
            }
           
            else if(str[i] != 'a'||str[i] != 'e'||str[i] != 'i'||str[i] != 'o'||str[i] != 'u'){
                sum++;
                num+=sum;
            }
       
    }
   
        if (no != 0)
        {

            printf("\nVowel=%d", no);
        }
        if (num!=0)
        {
            printf("\nconsonent=%d", num);
        }
        
}