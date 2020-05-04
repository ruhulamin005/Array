#include<stdio.h>
int main()
{
    int num[10], copy[10];
    printf("Enter five different values : \n");

    for (int i=0; i<5; i++)
    {
        scanf("%d",&num[i]);
        copy[i] = num[i];
    }
    for (int i = 0; i<5; i++)
    {
        printf("value of copy is : %d\n",copy[i]);
    }
}
