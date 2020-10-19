/************************************************************************************************************************

   Programmer: Kathe

   Purpose:    

************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  int number1; 
  int option; 
  int diff; 
  int sum; 
  int withdrawamount;
  int depositamount;
  char yn, y, n;
  
  printf("Welcome to SMC Banking!\n\nThanks for opening an account with us!\n\nHow much money would you like to start with:");
    scanf("%d", &number1);

  printf("\nPlease select from an option below\n\n\t 1. Withdraw\n\t 2. Deposit\n\t 3. View Balance\n\n");
  while (getchar() != '\n')
  ;
  scanf("%d", &option);

 do{
  if (option==1)
    {
      printf("\nYou currently have\t");
      printf("%d", number1);
      printf("\nEnter amount to withdraw:\t");
      while (getchar() != '\n')
      ;
        scanf("%d", &withdrawamount);
      do{
          if(withdrawamount <= 0)
        {
          printf("\nInvalid Amount\n");
          printf("Your current balance is $\t");
          printf("%d", number1);
          printf("\nEnter amount to withdraw:\t");
          scanf("%d", &withdrawamount);
        }
          else if (withdrawamount>number1)
        {
          printf("\nInsufficient Funds\n");
          printf("Your current balance is $\t");
          printf("%d", number1);
          printf("\nEnter amount to withdraw:\t");
          while (getchar() != '\n');
          scanf("%d", &withdrawamount);
        }
          else
        {
          diff=number1-withdrawamount;
          printf("\nYou withdrew $");
          printf("\t%d", withdrawamount);
          while (1){
          printf("\nWould you like a receipt (y or n)");
          while (getchar() != '\n');
          scanf("%c", &yn);

          if (yn == 'y')
        {
          printf("\nYour current balance is $\t");
          printf("%d", diff);
          printf("\nHave a great day!");
          exit(0);
        }
          else if (yn == 'n')
        {
          printf("\nHave a great day!");
          exit(0);
        }
          else 
        {
        printf("\n Invalid entry");
        }
      }
    }
    } while (withdrawamount !=0);
  }

  else if(option==2)
      {
      printf("\nYour current balance is $\t");
      printf("%d",number1);
      printf("\nEnter amount to deposit $\t");
      while (getchar() != '\n');
      scanf("%d", &depositamount);
      do{
      if (depositamount<=0)
        {
          printf("\nInvalid amount");
          printf ("\nEnter amount to deposit:");
          while (getchar() != '\n');
          scanf("%d", &depositamount);
        }
      else if (depositamount>0)
        {
          sum= number1+depositamount;
        while (1)
        {
          printf("\nWould you like a receipt (y or n)");
          while (getchar() != '\n');
          scanf("%c", &yn);
      
        if (yn == 'y')
        {
          printf("\nYour current balance is $\t");
          printf("%d", sum);
          printf("\nHave a great day!");
          exit(0);
        }
        else if (yn == 'n')
        {
          printf("\nHave a great day!");
          exit(0);
        }
        else 
        {
          printf("\n Invalid entry");   
        }
      }
    }
    }while (depositamount != 0);  
	}

  else if(option==3)
    {
      printf("\nYour current balance is $\t");
      printf("%d", number1);
      printf("\nPlease choose an option below\n\n\t 1. Withdraw\n\t 2. Deposit\n\t 3. End Transaction\n\nEnter option\t");
      while (getchar() != '\n');
      scanf("%d", &option);

      if (option==3)
      {
        printf("\nHave a great day!");
        exit(0);
      }
	} 

  else
    {
      printf("\nInvalid Option Selection");
      printf("\nPlease chose an option below\n\n\t 1. Withdraw\n\t 2. Deposit\n\t 3. View Balance\n\n");
      while (getchar() != '\n');
      scanf("%d", &option);           
    }
 } while (option != 0);

return 0;
}
