# include <stdio.h>
int main ()
{
int num1, num2;
float sum, avg;
printf ("Enter the first number: ");
scanf("%d",&num1);
printf("Enter the second number: ");
scanf ("%d", &num2);
sum=num1 + num2;
avg=sum/2;
printf("The summation is %f \n", sum);
printf("The average is %f \n", avg);
}
