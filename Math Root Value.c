#include<stdio.h>
#include<math.h>
int main ()
{
    double a,b,c,x1,x2,rut;
    scanf("%lf%lf%lf",&a,&b,&c);
    rut=b*b-4*a*c;
    if(rut>0)
    {
        x1=(-b+sqrt(rut))/(2*a);
        x2=(-b-sqrt(rut))/(2*a);
        printf("X1 = %.2lf\n",x1);
        printf("X2 = %.2lf\n",x2);

    }
    else if (rut==0)
    {
        x1=(-b)/(2*a);
        printf("X = %.2lf\n",x1);
    }
    else
        printf("Math Error\n");

    return 0;
}
