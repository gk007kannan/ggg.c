#include<stdio.h>
#include<conio.h>
void main()
{
int a, d, n, i, tn;
int sum = 0;
printf("\nEnter the first term value of the A.P. series: ");
scanf("%d\n", &a);
printf("\nEnter the total numbers in the A.P. series: ");
scanf("%d\n", &n);
printf("\nEnter the common difference of A.P. series: ");
scanf("%d\n", &d);
sum = (n * (2 * a + (n - 1)* d ))/ 2;
tn = a + (n - 1) * d;
printf("Sum of the A.P series is: ");
for (i = a; i <= tn; i = i + d )
{
if (i != tn)
printf("%d + ", i);
else
printf("%d = %d ", i, sum);
}
getch();
}
