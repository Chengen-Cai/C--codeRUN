#include<stdio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;
int len=0;
int run_list = 0;
char **checkList;
int find(char*);
char* turn_chac(char* ,int ,int );
char* turn_chac(char* inp0,int indleft,int indright)
{
    char*inp = (char*)malloc(len*sizeof(char));
    for (size_t i = 0; i < len; i++)
    {
        inp[i] = inp0[i];
    }
    char med = inp[indleft];
    inp[indleft] = inp[indright];
    inp[indright] = med;
    return inp;
}


void run_it(char* nowStr)
{
    for (size_t i = 0; i < len; i++)
    {
        for (size_t f = 0; f < len; f++)
        {
            char* now = turn_chac(nowStr,i,f);
            if ( find(now)==0)
            {
                printf("%s\n",now);
                
                *(checkList+run_list) = now;
                run_list++;
                run_it(now); 
            }
            else
            {
            }
        }
    }
    return;
}

int mat(int n)
{
    int total = 1;
    for (int i = n; i >= 1; i--)
    {
        total *=n;
    }
    return total;
}
int find(char* str)
{
    
    int check = 0;
    char** in1 = checkList;
    for (size_t i = 0; i < mat(len)+3; i++)
    {
        char* left = *(in1+i);
        char* right = str;
        //printf("%s %s\n",left,right);
        if (strcmp(left,right)==0)
        {
            check = 1;
            break;
        }
    }
    return check;
}
int main(){
    char de[5];
    for (size_t i = 0; i <5; i++)
    {
        de[i] = ' ';
    }
    
    scanf("%s",&de);
    int run = 0;
    while (1)
    {
        if (de[run]==0)
        {
            break;
        }
        run++;
    }
    len = run;
    char * a = (char*)malloc(len*sizeof(char));
    for (size_t i = 0; i < len; i++)
    {
        *(a+i) = de[i];
    }
    checkList = (char**)malloc( (mat(len)+3)*sizeof(char*) );
    
    for (size_t i = 0; i < mat(len)+3; i++)
    {
        char * deal = (char*)malloc(len*sizeof(char));
        for (size_t f = 0; f < len; f++)
        {
            *(deal+f) = ' ';
        }
        *(checkList+i) = deal;
    }
    *(checkList+run_list) = a;
    run_list++;
    run_it(a);
}