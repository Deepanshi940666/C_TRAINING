#include<stdio.h>
 int main() {

    //first staement to print hello world

    printf("HELLO WORLD");


    //variables and datatype as well as formate specifier

    int a=5;
    float pi=3.14;
    char ch='D';

    printf("\nAge = %d\n", a);       // %d (formate specifier)integer ke liye
    printf("pi = %f\n", pi);         // %f float ke liye
    printf("character = %c\n", ch);   // %c character ke liye

    char alphabet='z';
     printf("\n z=%d",alphabet);         // get the value of that character
     printf("\nz has = %zu size in bit", sizeof(char));  //sizeof is use know its value of size in bits


    int g=98;
    printf("\n98=%c",g);                 // we can also print the character by its value
    
    float f= 3.5764;
    printf("\nf=%.2f",f);             //only 2  value after decimal are shown


    return 0;
} 