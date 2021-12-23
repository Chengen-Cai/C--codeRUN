#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<cmath>
using namespace std;
int stoi(char b[],int si)
{
    int o = 0;
    int i;
    int max = si;
    
    for ( i = 0; i <max ; i++)
    {
        o+=(b[i]-'0')*pow(10,max-i-1);
    }
    return o;
}

int main(int argc, char *argv[]) {
    FILE *fin,*fout; 

    fin = fopen("D:\\C++codeRUN\\evaluation.txt","r");
    char save[32][20];//32是每個空格切開，20是每個可以存多少//
    int i;
    char a[20];
    int num2[7] = {0,0,0,0,0,0,0};
    for ( i = 0; i < 20; i++)
    {
        a[i] ='/';
    }
    int d = 0;
    int len[32] = {0};
    while (fscanf(fin,"%s",&a)!=EOF)
    {
        int e = 0;
        for ( i = 0; a[i]!='/'; i++)
        {
            if (a[i]==' ')
            {
                len[d] = e-1;
                d++;
                e = 0;
                continue;
            }
            save[d][e] = a[i];
            e++;
        }
        len[d] = e-1;
        d++;
        for ( i = 0; i < 20; i++)
        {
            a[i] ='/';
        }
    }
    int base = 6; 
    d = 0;
    while (base<32)
    {  
        num2[d] = (60-((stoi(save[base],len[base])+stoi(save[base+1],len[base+1]))/2)*0.4)*100/60;
        num2[d] ++;
        
        
        base +=4;
        d++;
    }
    char in1[20];
    scanf("%s",&in1);
    base = 5;
    d = 0;
    while (in1[0]!='-'&&in1[1]!='1')
    {
        base = 5;
        d = 0;
        while (base<32)
        {
        int check = 1;
        for ( i = 0; i < len[base]; i++)
        {
            if (in1[i]!=save[base][i])
            {
                check = 0;
                break;
            }
            
        }
        if (check == 1)
        {
            if (d==2)
            {
                num2[d]-=1;
            }
            
            printf("student id: ");
            printf("%s\n",save[base-1]);
            printf("student name: ");
            printf("%s\n",save[base]);
            printf("the safe final score is higher than: ");
            printf("%d\n",num2[d]);
            break;
        }
            d++;
            base +=4;
        }
        scanf("%s",&in1);
    }
}