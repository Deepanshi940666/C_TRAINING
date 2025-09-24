#include <stdio.h>
int main()
{

    int att = 78;
    int m = 60;

    if (att > 80 && m >= 80)
    {
        printf(" grade=A");
    }

    else if (m >= 60 && m < 80 && att >= 80)
    {
        printf(" grade=B");
    }

    else if (m >= 60 && m < 80 && att < 80 && att >= 50)
    {
        printf(" grade=C");
    }

    else if (m >= 35 && m < 60 && att < 50 && att >= 35)
    {
        printf(" grade=D");
    }
    else
    {
        printf(" grade=F(fail)");
    }

    // even or odd
    int num = 38;
    if (num % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

    // greater of two no.

    int num1 = 29;
    int num2 = 50;

    if (num1 > num2)
    {
        printf("%d is greater", num1);
    }
    else if (num2 > num1)
    {
        printf("%d is greater", num2);
    }
    else
    {
        printf("%d is equal to %d", num1, num2);
    }

    // simple calculator

    int n1;
    int n2;
    int ch;
    int sum, sub, mul;
    float div;
    printf("\n enter two no.:");
    scanf("%d%d", &n1, &n2);
    printf("enter any symbol: \n (1) for add \n (2) for sub \n (3) for multiply \n (4) for division\n");
    scanf("%d", &ch);
    if (ch == 1)
    {
        int sum = n1 + n2;
        printf("addtion of these no. are %d", sum);
    }

    else if (ch == 2)
    {
        sub = n1 - n2;
        printf("subtraction of these no. are %d", sub);
    }

    else if (ch == 3)
    {
        mul = n1 * n2;
        printf("multiplication of these no. are %d", mul);
    }
    else if (ch == 4)
    {
        if (n2 != 0)
        {
            div = (float)n1 / n2;
            printf(" division of these no. are %f", div);
        }
        else
        {
            printf("not define");
        }
    }

    else
    {
        printf("Not a valid no.");
    }

    // quadrants by angle

    float angle;
    int quad;
    printf("Enter the angle:");
    scanf("%f", &angle);

    if (angle >= 0 && angle <= 90)
        printf("It's first Quadrant angle");

    else if (angle > 90 && angle <= 180)
        printf("It's second Quadrant angle");

    else if (angle > 180 && angle <= 270)
        printf("It's third Quadrant angle");

    else if (angle > 270 && angle <= 360)
        printf("It's fourth Quadrant angle");

    else
        printf("give me positive angle");

    return 0;
}