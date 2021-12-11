#include<stdio.h>

int main()
{
    int size = 0;
    scanf("%d",&size);
    int input[size];
    int i =0;
    for ( i = 0; i < size; i++)
    {
        printf("%d:",i+1);
        scanf("%d",&input[i]);
        printf("\n");
    }
    for ( i = 0; i < size; i++)
    {
        int j =0;
        for ( j = i; j < size; j++)
        {
            if (input[i]>input[j])
            {
                int change = input[i];
                input[i] = input[j];
                input[j] = change;
            }
        }
    }
    for ( i = 0; i < size; i++)
    {
        printf("%d ",input[i]);
    }
}