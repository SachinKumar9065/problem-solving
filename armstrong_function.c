#include<stdio.h>
#include<math.h>

int isArmstrong(int number) 
{

  // declare variables
  int lastDigit = 0;
  int power = 0;
  int sum = 0;
  int c=0;

  // temporary variable to store number
  int n = number;

  while(n!=0) {

     lastDigit = n % 10;
    c++;
     
     power = pow(lastDigit,c);
     
     sum += power;

     n /= 10;
  }

  if(sum == number) return 0;
  else return 1;
}

int main()
{
  int number;

  printf("Enter number: ");
  scanf("%d",&number);

  if(isArmstrong(number) == 0)
  printf("%d is an Armstrong number.\n", number);
  else
  printf("%d is not an Armstrong number.", number);

  return 0;
}