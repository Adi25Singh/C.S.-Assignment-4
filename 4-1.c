/*1.Program to print all natural numbers from 1 to n using functions.*/

#include<stdio.h>
void print_n(int n) //function to print numbers from 1 till n, taking n as the parameter
{
	int i;
	for(i=1;i<=n;i++)
	printf("%d ",i);
}
void main()
{
  printf("Program to print all natural numbers from 1 to n using functions.\n ");
	 int i,n;
  printf("\nEnter n: ");
  scanf("%d",&n);
  printf("\nNatural numbers from 1 to %d are: \n",n);
  print_n(n);  //calling function print_n with n as the argument
  getch();
}
