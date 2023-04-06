// Avarage of three number (input given by user)
#include<stdio.h>
int main ()
{
	int num1, num2, num3, avg;

	printf("Enter three number: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	avg=(num1 + num2 + num3)/3;

	printf("Avarage of three number is %d",avg);

	return 0;
}
