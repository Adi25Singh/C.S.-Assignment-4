/*8.Program to generate nth Fibonacci term using recursion.*/

#include<stdio.h>
int fibonacci(int n)  //Recursive function to calculate the nth fibonacci term
{
 if(n==1)
  return 0;
 else if(n==2)
  return 1;
 else
  return fibonacci(n-1)+fibonacci(n-2);  //Since a fibonacci number is obtained by adding two previous numbers, so making a recursive call to the function to calculate the nth fibonacci term.

}
void main()
{
int n,fibo;
printf("Program to generate nth Fibonacci term using recursion.\n\n");
printf("Enter the term no(>0): ");
scanf("%d",&n);
fibo=fibonacci(n);      //Calling function with term as the argument
printf("Term %d in fibonacci sequence 0 1 1 2....  is: %d",n,fibo);
getch();
}
