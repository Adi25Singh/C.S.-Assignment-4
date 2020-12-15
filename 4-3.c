/*3.Program to find sum of all-natural numbers between 1 to n using recursion*/

#include<stdio.h>
int sum_n(int n)  //Recursive function to calculate the sum from 1 till n digits.
{
 if(n==1)
 return 1;
 else
 return n+sum_n(n-1);    //Recursive call to the function sum_n with n decremented by 1, such that it keeps on decreasing till 1.
}
void main()
{
printf("Program to find sum of all-natural numbers between 1 to n using recursion.\n\n");
int n,sum=0;
printf("Enter n: ");
scanf("%d",&n);
sum=sum_n(n);
printf("Sum of natural numbers from 1 to %d = %d",n,sum);
getch();
}
