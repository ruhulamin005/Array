//A program to find out the max number from 10 different inputed numbers.
#include<stdio.h>
int main()
{
    int num[10], max=0;
    printf("Enter 10 numbers :\n");

    for(int i=0; i<10; i++)
    {
        scanf("%d",&num[i]);
        //printf("numbers are : %d\n",num[i]);
    }

    for(int i = 0; i<10; i++)
    {
        if(num[i]>max)
        {
            max=num[i];
            printf("\n max : %d\n",max);
        }
    }
    printf("\nmax is : %d", max);
}
