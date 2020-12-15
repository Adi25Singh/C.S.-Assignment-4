/*5.Program to find reverse of any number using recursion.*/

#include<stdio.h>
#include<math.h>
int reverse(int n) //Recursive function to calculate the reverse.
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
printf("Program to find reverse of any number using recursion.");
int n,rev;
printf("\n\nEnter the number to be reversed: ");
scanf("%d",&n);
rev=reverse(n);
printf("%d reversed is: %d",n,rev);
getch();
}
