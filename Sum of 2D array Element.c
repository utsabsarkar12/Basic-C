#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter the row number: ");
    scanf("%d", &row);
    printf("Enter the colam number: ");
    scanf("%d",&col);
    int i, j, arr[row][col],sum=0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter a number (%d,%d) : ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {

           sum+=arr[i][j];
        }
    }
    printf("Sum = %d",sum);
return 0;
}
