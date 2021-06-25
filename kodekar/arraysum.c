#include<stdio.h>
int main()
{
    int a[10];
    int sum=0;
    printf("enter elements of an array\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
       
        sum=sum+a[i];
    }
    printf("elements of the array are\n");
    for(int i=0;i<10;i++)
    {
        
       printf("%d\n",a[i]);
       
    }
 
    printf("sum of array elements = %d",sum);
    return 0;
}