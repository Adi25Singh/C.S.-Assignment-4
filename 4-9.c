/*9.Program to find HCF of two numbers using Recursion.*/

#include<stdio.h>
int GCD(int n1,int n2) //Recursive function to obtain the hcf of two numbers.
{
if(n2!=0)
 return GCD(n2,n1%n2);  //Suppose two numbers 30 and 12 are entered, which means GCD will call itself with the values 12 and 6(since 30%12=6) , and after that it will again call itself with the values 6 and 0(since 12%6==0), and since here n1=6,n2-0, the function will execute the else part and n2,i.e. 6, which is the lcm of 30 and 12, would be returned.
else
 return n1;
}

void main()
{
 printf("Program to find HCF of two numbers using Recursion\n\n");
 int n1, n2,hcf;
 printf("Enter number 1: ");
 scanf("%d",&n1);
 printf("Enter number 2: ");
 scanf("%d",&n2);
 hcf=GCD(n1,n2);      //Calling function GCD with numbers entered as parameters, to find the hcf.
 printf("HCF of %d and %d = %d", n1, n2, hcf);
 getch();
}
