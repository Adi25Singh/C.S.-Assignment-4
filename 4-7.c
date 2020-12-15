/*7.Program to find the sum of digits in a number using recursion.*/

#include<stdio.h>
int sum_d(int n)  //Recursive function to calculate the sum of digits.
{
if(n==0)
 return 0;
return(n%10+sum_d(n/10));   //cslling sum_d again and again i.e. recursively,along with dividing n by 10, and adding the remainder obtained from n%10

}
void main()
{
int n,sum;
printf("Program to find the sum of digits in a number using recursion.\n\n");
printf("Enter the number: ");
scanf("%d",&n);
sum=sum_d(n);        //storing the sum obtained from sum_d function in sum
printf("Sum of digits in %d = %d",n,sum);
getch();
}
