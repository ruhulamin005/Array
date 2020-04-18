//A program to find out the sum and average of five numbers inputed by the user.
#include<stdio.h>
int main()
{
    int num[5], sum=0;
    float average;

    printf("Enter the five numbers : \n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("Sum is : %d",sum);
    average=sum/5;
    printf("\nAverage of these five inputed numbers is : %.2f",average);

}
