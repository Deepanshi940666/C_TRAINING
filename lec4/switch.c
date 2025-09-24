// ternary operator
#include <stdio.h>
#include <math.h>

int main()
{

  //use of if-else without {}

   int a=2;
   if (a==2)
   printf("she is neha");
   else
   printf("she is not neha");

  // switch case

  int d=3;
   switch(d)
   {
       case 1:
       printf("d=1");
       break;

       case 2:
       printf("d=2");
       break;

       case 3:
       printf("d=3");
       break;

       default :
       printf("not have any value");
       break;

   }

   // days of a week

   int choicee;
   printf("Enter a no :");
   scanf("%d",&choicee);

   switch(choicee)
   {
       case 1:
         printf("Monday");
         break;

       case 2:
         printf("Tuesday");
         break;

       case 3:
         printf("Wednesday");
         break;

       case 4:
         printf("Thursday");
         break;

       case 5:
         printf("Friday");
         break;

       case 6:
         printf("Saturday");
         break;

       case 7:
         printf("Sunday");
         break;

       default:
         printf(" Not a valid day");
   }


   // simple calculator


  int as,bs,choice,sum,sub,mul,div, power;
   printf("Enter two no :");
   scanf("%d%d",&as,&bs);
   printf("\n Enter your choice: \n 1. addition \n 2. subtraction \n 3. multiplication \n 4. divide\n 5. power \n");
   scanf("%d",&choice);

   switch(choice)
   {
       case 1:
         sum=as+bs;
         printf("addition=%d",sum);
         break;

       case 2:
         sub =as-bs;
         printf("subtraction=%d",sub);
         break;

       case 3:
          mul= as*bs;
         printf("multiplication=%d",mul);
         break;

       case 4:
         if (bs!=0)
         {
         div=(float)as/bs;
         printf("division=%f",div);
         }
         else
         printf("not define");
         break;


       case 5:
         power = pow(as,bs);
         printf("power=%d",power);
         break;

       default:
         printf(" Not a valid number");
       }



       //traffic light

       char choice;

        printf("\n Enter your choice: \n R: Red \n Y:Yellow\nG: Green\n ");
        printf("%c",choice);
        scanf("%c",&choice);

        switch(choice)
       {
        case 'R':
         printf("stop");
         break;

        case 'Y':
         printf("wait");
         break;

        case 'G':
         printf("go");
         break;

       default:
         printf(" Not a valid color");
       }

  // currency convertorount ;

  char put;
  int amount;
  printf("Enter amount in rupees:");
  scanf("%d", &amount);
  printf("\nEnter your choice to convert rupees into: \n A: Dollar(USD) \n B: Euro(EUR) \n C: Japanese Yen(JPY) \n D: canadian Dollar(CAD)\n");

  printf("Enter here");
  scanf(" %c", &put);
  switch (put)
  {
  case 'A':
    printf("dollar=%.2f", amount* 0.012);
    break;

  case 'B':
    printf("Euro=%.2f", amount * 0.011);
    break;

  case 'C':
    printf("Japanese Yen=%.2f", amount  * 1.89);
    break;

  case 'D':
    printf("Canadian Dollar=%.2f", amount * 0.016);
    break;

  default:
    printf(" Ohhh no !Not a valid character");
    break;
  }

  // Mini  ATM

  float amt, balance = 1000;
  int want;
  printf("--WELCOME TO ATM--\n");
  printf("Choose what do you want from this ATM:\n 1:CHECK BANK BALANCE \n 2:DEPOSITE \n 3:WITHDRAW \n 4:EXIT\n ");
  printf("Enter please:");
  scanf("%d", &want);

  switch (want)
  {
  case 1:
    printf("your Balance is %.3f", balance);
    break;

  case 2:
    printf("Enter amount that you want to deposite:");
    scanf("%.3f", &amt);
    balance += amt; // balance= balance + amt;
    printf("Your Amount is deposited successfully", balance);
    break;

  case 3:
    printf("Enter amount that you want to withdraw:");
    scanf("%f", &amt);

    if (amt <= balance)
    {
      balance -= amt; // balance= balance - amt;
      printf("Your Amount is withdrawed successfully", balance);
    }
    else
    {
      printf("you have less money in your account ");
    }
    break;

  case 4:
    printf("Thankyou for visiting");
    break;

  default:
    printf("you have Entered Invalid no.");
  }

  return 0;
}
