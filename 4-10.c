/*10.Program to find LCM of two numbers using recursion using function.*/

#include<stdio.h>
int leastcommonmulti(int a,int b)  //Recursive function to calculate the lcm of two numbers.
{
static int temp=0;     //to retain the value of temp after every recursion,it is declared static.
temp+=b;               //Since b is the greater of the two number, then incrementing temp by it after every recursion
 if((temp%a==0)&&(temp%b==0))  //checking if temp is lcm is divisible completely by both
 {
  return temp;
 }
 else
 {
  return leastcommonmulti(a,b);  //Recursive call till lcm is obtained
 }
}
void main()
{
 int a,b,n1,n2,lcm;
 printf("Program to find LCM of two numbers using recursion using function.\n\n");
 printf("Enter number 1: ");
 scanf("%d",&n1);
 printf("Enter number 2: ");
 scanf("%d",&n2);
 a=(n1<n2)?n1:n2; //Conditional operator to find the smaller of two numbers and store it in a
 b=(n1>n2)?n1:n2; //Conditional operator to find the larger of the two numbers and store it in b
 lcm=leastcommonmulti(a,b); //Calling lcm function with a and b as arguments
 printf("LCM of %d and %d = %d",a,b,lcm);
 getch();
}
