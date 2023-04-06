#include<stdio.h>
int main ()
{
    int arr[100], n, i;
    printf("Number of input: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter %d no. element: ",(i+1));
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(i=1; i<n; i++)
    {
        if(max<arr[i])
            max = arr[i];
    }
    printf("Maximum number is %d.\n",max);

    int min = arr[0];
    for(i=1; i<n; i++)
    {
        if(min>arr[i])
            min = arr[i];
    }
    printf("Minimum number is %d.\n",min);

    return 0;
}
