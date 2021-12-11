#include<stdio.h>

int main()
{
    int n=0;
    printf("Enter a Height");
    scanf("%d",&n);
    int spacenum = n/2;
    for (int i = spacenum; i >= 0; i--)
    {
        for (size_t z = 0; z < i; z++)
        {
            printf(" ");
        }
        for (size_t x = 0; x <(spacenum - i)*2+1;x++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <=spacenum; i++)
    {
        for (size_t z = 0; z <i; z++)
        {
            printf(" ");
        }
        for (size_t x = 0; x <(spacenum - i)*2+1;x++)
        {
            printf("*");
        }
        printf("\n");
    }
    





}