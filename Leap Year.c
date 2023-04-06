// Is the year is leap year or not?
#include<stdio.h>
int main ()
{
	int year;

	printf("Enter a year: ");
	scanf("%d", &year);

	((year%4==0 && year%100!=0)||(year%400==0))?
	printf("%d is a Leap Year.",year):printf("%d is not a Leap Year.",year);

	return 0;
}
