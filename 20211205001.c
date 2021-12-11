#include<stdio.h>

int main()
{
    char input[100];
    scanf("%s",&input);
    char *inp = input;
    int inp_size = 0;
    int i =0;
    for ( i = 0; i < 100; i++)
    {
        if (!(*inp>='1'&&*inp<='9'))
        {
            inp_size = i;
            break;
        }
        inp++;
    }
    for (size_t i = 0; i < 4; i++)
    {
        input[i];
    }
    int check = 1;
    char output[inp_size];
    for ( i = 0; i < inp_size; i++)
    {
        if (input[i]!=inp[inp_size-1-i])
        {
            check = 0;
            break;
        }
    }
    for ( i = 0; i <(inp_size)/2; i++)
    {
        char change = input[i];
        input[i] = input[(inp_size-1)-i];
        input[(inp_size-1)-i] =  change;
        
    }
    // I = 0 1 2
    // 0 : input[i] = 1 input[(6)-i] = 7
    // 1 : input[i] = 2 input[(6)-i] = 6
    // 2 : input[i] = 3 input[(6)-i] = 5

    if (check==0)
    {
        printf("%s is not a palindrome",input);
    }
    else
    {
        printf("%s is a palindrome",input);
    }
    int inputindex = 0;
    scanf("%d",&inputindex);
    while (inputindex!=-1)
    {
        int out = (input[inputindex]-'0');
        printf("%d\n",out);
        scanf("%d",&inputindex);
    }
    






}