#include <stdio.h>
int main()
{
    // 1. taking input from user
    int put;
    printf("Enter a no.:\n");
    scanf("%d\n", &put);
    printf("you have entered %d\n", put);

    // 2. Arithmetic Operators
    int x = 10, y = 3;
    printf("x + y = %d\n", x + y);    // Addition
    printf("x - y = %d\n", x - y);    // Subtraction
    printf("x * y = %d\n", x * y);    // Multiplication
    printf("x / y = %d\n", x / y);    // Division (integer)
    printf("x %% y = %d\n\n", x % y); // Modulus (remainder)

    // 3. Typecasting
    int aanya = 45, ruhi = 30;
    float riya = (float)aanya / ruhi; // "(float)" is manually typecasting
    printf("riya=%.2f\n", riya);      // automatically typecasting means only 2 digits after decimal are taken

    // 4. Increment
    int num = 5;
    printf("num = %d\n", num);
    printf("num++ = %d (post-increment)\n", num++); // print first, then increase
    printf("Now num = %d\n", num);
    printf("++num = %d (pre-increment)\n", ++num); // increase first, then print
    printf("Now num = %d\n\n", num);

    // 5. Decrement
    int numb = 5;
    printf("num = %d\n", numb);
    printf("num-- = %d (post-decrement)\n", numb--); // print first, then decrease
    printf("Now num = %d\n", numb);
    printf("--num = %d (pre-decrement)\n", --numb); // decrease first, then print
    printf("Now num = %d\n\n", numb);

    // 6. sizeof operator
    printf("\nSize of int = %zu bytes\n", sizeof(int));
    printf("Size of float = %zu bytes\n", sizeof(float));
    printf("Size of char = %zu bytes\n\n", sizeof(char));

    //ternary operator
    char a='neha';
    a=='neha'?printf("yess neha"):printf("not neha");

 
    return 0;

}