//A program to find the elements which are even in an array
#include<stdio.h>
int main()
{
    int num[5], i;
    printf("Enter Five different values : \n");

    for (i=0; i<5; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i =0; i<5; i++)
    {
        if(num[i]%2==0)
            printf("Even number is : %d\n", num[i]);
    }
}
