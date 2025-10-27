#include <stdio.h>
#include<string.h>
 struct address
{
    int pincode;
};
typedef struct student
{
    char Name[50];
    int age;
    int rollno;
    struct address s2;

}st;   //naming  of structure

int main()
{
   st s1;    //instead of write struct many time "st " is named 
    s1.rollno = 1108;
    s1.age = 18;
     strcpy(s1.Name,"Deepanshi");
     s1.s2.pincode=23;
    printf("your details are:");
    printf("%s\n", s1.Name);
    printf("%d\n", s1.rollno);
    printf("%d\n", s1.age);
    printf("%d\n", s1.s2.pincode);
}