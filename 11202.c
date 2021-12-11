#include<stdio.h>
#include<stdlib.h>

int main()
{
    while (true)
    {
        char input[100];
        int i =0;
    for ( i = 0; i < 100; i++)
    {
        input[i]= 'e';
    }
    scanf("%s",&input);
    if (input[0]=='0')
    {
        return 0;
    }
    int tail;
    for ( i = 0; i < 100; i++)
    {
        if ( !(input[i]>='0'&input[i]<='9'))
        {
           tail = i;
           break;
        }
    }
    int oddnum[10];
    int evennum[10];
    int tail1=0;
    int tail2=0;
    for ( i = 0; i < tail; i++)
    {
        if ((input[i]-'0')%2!=0)
        {
            oddnum[tail1]=i;
            tail1++;
        }
        if ((input[i]-'0')%2==0)
        {
            evennum[tail2]=i;
            tail2++;
        }
    }
    for ( i = 0; i < tail1; i++)
    {
        printf("%c ",input[oddnum[i]]);
    }
    printf("\n");
    for ( i = 0; i < tail2; i++)
    {
        printf("%c ",input[evennum[i]]);
    }
    }
}