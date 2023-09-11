# include <stdio.h>
int main ()
{
int a, b;
float sum, avg;
printf ("Enter the first number: ");
scanf("%d",& a);
printf("Enter the second number: ");
scanf ("%d", &b);
sum=a + b;
avg=sum/2;
printf("The summation is %f \n", sum);
printf("The average is %f \n", avg);
}
