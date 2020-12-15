/*4.Program to find sum of all even or odd numbers in given range using recursion.*/

#include<stdio.h>
int sum_oddeven(int n1,int n2) //Recursive function to find sum of even or odd numbers.
{
if(n1>n2)
 return 0;
else
{
 return n1+sum_oddeven(n1+2,n2);   //Calling the function recursively to calculate the sum till the upper limit is reached.
}
}

void main()
{
printf("Program to print sum of all even or odd numbers in given range using recursion.\n\n");
int n1,n2,sum=0;
printf("Enter Lower limit: ");
scanf("%d",&n1);
printf("Enter Upper limit: ");
scanf("%d",&n2);
if(n1%2==0)
printf("\nSum of even numbers from %d to %d= ",n1,n2);
else
printf("\nSum of odd numbers from %d to %d= ",n1,n2);
sum=sum_oddeven(n1,n2);     //Calling the function sum_oddeven with n1 and n2 as the arguments.
printf("%d",sum);
getch();
}
