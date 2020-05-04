//A program to find values greater than 50 in an array.
#include<stdio.h>
int main()
{
    int num[5], i;

    printf("\nEnter Five different values : \n");

    for (i=0; i<5; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i =0; i<5; i++)
    {
        if(num[i]>50)
            printf("Greater than 50 : %d \n", num[i]);
        //else
            //printf("\nLess than 50 : %d \n", num[i]);
    }
}

