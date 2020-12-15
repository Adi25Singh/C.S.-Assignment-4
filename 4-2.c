/*2.Program to print all even or odd numbers in given range using recursion.*/

#include<stdio.h>
void odd_even(int n1,int n2) //Recursive function to print even or odd no.s in the given range.
{
if(n1>n2)
 return;
else
{
 printf("%d ",n1);
 odd_even(n1+2,n2);   //Calling the function recursively to print the lower limit+2 till the upper limit is reached.
}
}

void main()
{
printf("Program to print all even or odd numbers in given range using recursion.\n\n");
int n1,n2,i;
printf("Enter Lower limit: ");
scanf("%d",&n1);
printf("Enter Upper limit: ");
scanf("%d",&n2);
if(n1%2==0)
printf("\nEven numbers from %d to %d are: \n",n1,n2);
else
printf("\nOdd numbers from %d to %d are: \n",n1,n2);
odd_even(n1,n2);     //Calling the function odd_even with n1 and n2 as the arguments.
getch();
}
