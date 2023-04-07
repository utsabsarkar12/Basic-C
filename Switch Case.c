#include <stdio.h>
int main()
{
    int op, num, i=1, count=0;
    int t1 =0,t2=1, next=0, n;
    int reverse=0, temp;

    for(;;)
    {

        printf("1. Prime or Not Prime.\n");
        printf("2. Fibonacci Series.\n");
        printf("3. Palindrome Number.\n");

        printf("What you want to do : ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            {


            printf("Enter integer number:");
            scanf("%d",&num);

           while (i <= num)
	{
		if(num%i==0)
		count++;
		i++;
	}
	if (count==2)
	{
		printf("%d is a prime number.\n",num);
	}
	else
	{
		printf("%d is not a prime number.\n",num);
	}
            break; }
        case 2:
            {printf("Enter a positive number: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", t1, t2);
  next = t1 + t2;

  while (next <= n)
  {
    printf("%d ",next);
    t1 = t2;
    t2 = next;
    next = t1 + t2;
    printf("\n");
  }
  break;
  }
        case 3:
           {printf("Enter integer number: ");
  scanf("%d", &n);

  while (n != 0) {
    temp = n % 10;
    reverse = reverse * 10 + temp;
    n /= 10;
  }

  printf("Reversed number = %d. \n", reverse);
            break;}
        default: {
            printf("Wrong Input.\n");
        }
        }

    }

    return 0;
}
