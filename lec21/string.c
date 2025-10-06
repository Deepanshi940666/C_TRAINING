#include<stdio.h>
int main(){
    char name[]="Hello!";
    printf("%s",name);
    printf("\n%c", name[4]);
    printf("\n%d",name[4]);

    // for loop in it
    for(int i=0; name[i]!='\0'; i++){
        
    printf("\n %s",name[i]);
    }


    int i;
    name[i]='\0';
    while(i!=0){
        printf("%c\n",name[i]);
        i--;
    }
char string[]="Deepanshi";
int ln= strlen(string);
printf("%d",ln);


 char s[]="ohh";
 char data[10];
 for(int j=0;s[j]!='\0';j++)
{
data[j]=s[j];
}
printf("%s",data);

    return 0;
}