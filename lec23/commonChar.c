#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Deepanshi";
    char nstr[] = "gupta";
    int ln1 = strlen(str);
    int ln2 = strlen(nstr);
    for (int i = 0; i < ln1; i++)
    {
        for (int j = 0; j < ln2; j++)
        {
            if (str[i] == nstr[j])
            {
                printf("%c\n", str[i]);
                break;
            }
        }
    }
}