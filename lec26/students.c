#include<stdio.h>
#include<string.h>
  struct students {
    char name[50];
    int rollno;
    // float marks;
  };
int main(){
    struct students s1[5];
    for(int i=0;i<5;i++){
        printf("\nEnter your name: ");
        scanf(" %s",s1[i].name);
        printf("\nEnter your rollno.:");
        scanf(" %d",s1[i].rollno);
        // printf("\nEnter your marks:");
        // scanf(" %.3f",s1[i].marks);
    }
  return 0;
}