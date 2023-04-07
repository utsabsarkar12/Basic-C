#include <stdio.h>
#include <math.h>
int main()
{
 int a, b, c, d;
 double x1, x2;
 printf("Enter the value of a, b and c for the quadratic equation ax^2+bx+c\n");
 scanf("%d %d %d", &a, &b, &c);
 d = b * b - 4 * a * c;
 if (d < 0)
 {
  printf("x1= -%d + %di\n", b, d * -1);
  printf("x2= -%d - %di\n", b, d * -1);
 }
 else
 {
  x1 = -b + sqrt(d);
  x2 = -b - sqrt(d);
  printf("x1 = %.2lf\n", x1);
  printf("x2 = %.2lf\n", x2);
 }
 return 0;
}
