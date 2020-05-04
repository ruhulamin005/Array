//A program to calculate the summation of values of an array whose size is 10.
#include<stdio.h>
main()
{
    int num[10], sum=0, i;
    printf("Enter Ten different numbers to calculate sum : \n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("Sum is : %d",sum);
}
