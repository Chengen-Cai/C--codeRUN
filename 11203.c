#include<stdio.h>
#include<stdlib.h>
void pay_amount(int dollars,int *twenty,int *ten,int *five ,int *one)
{
    int d =0;
    d = dollars;
    int x = 0;
    x = d/20;
    d = d%20;
    *twenty = x;
    x = 0;
    x = d/10;
    d %=10;
    *ten = x;
    x = 0;
    x = d/5;
    d = d%5;
    *five = x;
    x = 0;
    x = d/1;
    d = d%1;
    *one = x;
}

int main()
{
    
int d=0;
while (true)
{
    scanf("%d",&d);
    if (d==-1)
    {
        return 0;
    }
    
    int twenty=0;
    int ten=0;
    int five=0;
    int one=0;
    pay_amount(d,&twenty,&ten,&five,&one);
    printf("%d\n",twenty);
    printf("%d\n",ten);
    printf("%d\n",five);
    printf("%d\n",one);
}

    
}