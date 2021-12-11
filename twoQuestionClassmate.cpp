
#include<stdio.h>
#include<stdlib.h>


int main(){
    int a;
    char input1[255],input2[255];
    for (size_t i = 0; i < 255; i++)
    {
        input1[i] = 0;
        input2[i] = 0;
    }
    int num1[3];
    int num2[3];
    int c=0,d=0,lasti1=-1,lasti2=-1;
    printf("Enter first date:");
    scanf("%s",&input1);
    printf("\nEnter second date:");
    scanf("%s",&input2);
    for (size_t i = 0; i < 20; i++)
    {
        if (input1[i]=='/'|(input1[i]==0&input1[i-1]!=0))
        {
            char uo1[25];
            int run1 = 0;
            
            for (size_t z = lasti1+1; z < i; z++)
            {
                
                uo1[run1] = input1[z];
                run1 ++;
            }
            lasti1 = i;
            num1[c] = atoi(uo1);
            c++;
        }
        if (input2[i]=='/'|(input2[i]==0&input2[i-1]!=0))
        {
            char uo2[25];
            int run2 = 0;
            for (size_t z = lasti2+1; z < i; z++)
            {
                uo2[run2] = input2[z];
                run2++;
            }
            lasti2 = i;
            num2[d] = atoi(uo2);
            d++;
        }
    }
    for (int i = 3 - 1; i >= 0; i--)
    {
        if (num1[i]>num2[i])
        {
            printf("%d/%d/%d is earlier than %d/%d/%d",num2[0],num2[1],num2[2],num1[0],num1[1],num1[2]);
            break;
        }
        else if (num1[i]<num2[i])
        {
            printf("%d/%d/%d is earlier than %d/%d/%d",num1[0],num1[1],num1[2],num2[0],num2[1],num2[2]);
            break;
        }
    }
    
    



}