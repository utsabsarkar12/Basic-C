#include <stdio.h>
int main() {
    int i;
    double number,n, sum = 0.0,multi=1;
    scanf("%if",&n);
    for (i = 1; i <= n; ++i) {
        printf("Enter a n%d: ", i);
    	scanf("%lf", &number);
    	char ch;
    	scanf("%c",&ch);
        if (number<0.0){
            break;
        }
        if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        	continue;
		}
        sum += number;
        multi *= number;
    }
    printf("Sum = %.2lf\n", sum);
    printf("Multi = %.2lf", multi);
    return 0;
}

