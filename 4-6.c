/*6.Program to check whether a number is palindrome or not using recursion.*/

#include<stdio.h>
#include<math.h>
int reverse(int n)   //Recursive function to calculate the reverse and return it to check for palindrome
{
int d=0,i,num=n;
while(num!=0)    //Loop to calculate the number of digits in n
{
    num=num/10;
    ++d;
}
if(n==0)
 return 0;
return ((n%10*pow(10,d-1))+reverse(n/10));   //Recursive call to calculate  the reverse.
}
void main()
{
printf("Program to check whether a number is palindrome or not using recursion.");
int n,rev;
printf("\n\nEnter the number: ");
scanf("%d",&n);
rev=reverse(n);
printf("\n%d reversed is: %d\n",n,rev);
if(rev==n)      //Comparing the reverse obtained from reverse function to the original number
printf("%d is a palindrome number.",n);
else
printf("%d is not a palindrome number.",n);
getch();
}
