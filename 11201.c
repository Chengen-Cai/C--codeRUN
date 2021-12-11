#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int stoi(char *b)
{
    int o = 0;
    int i;
    for ( i = 3 - 1; i >= 0; i--)
    {
        o+=(*b-'0')*pow(10,i);
        b++;
    }
    return o;
}
char * itoz(int b)
{
    char o[4];
    int c = 0;
    int i;
    for ( i = 0; i < 4; i++)
    {
        c = ((int)(b/pow(10,3-i)))%10 ;
        o[i] = c+'0';
    }
    char *f = o;
    return f;
}
int main()
{
    FILE *fin,*fout; 
    
    fin = fopen("D:\\C++codeRUN\\data.txt","r");
    char a[10];
    char out2[100][10];
    int tee=0;
    while (fscanf(fin,"%s",&a)!=EOF)
    {
        int i;
        char b[3] ;
        for ( i = 0; i < 3; i++)
        {
            b[i] = a[i];
        }
        char *h = b;
        int x = stoi(h);
        x+=1911;
        char *c = itoz(x);
        char a1[2],a2[2];
        for ( i = 4; i <6 ; i++)
        {
            a1[i-4] = a[i];
        }
        for ( i = 7; i <9 ; i++)
        {
            a2[i-7] = a[i];
        }
        char out1[10];
        for ( i = 6; i < 10; i++)
        {
            out1[i] = *c;
            c++;
        }
        out1[5] = '/';
        for ( i = 3; i < 5; i++)
        {
            out1[i] = a1[i-3];
        }
        out1[2] = '/';
        for ( i = 0; i < 2; i++)
        {
            out1[i] = a2[i];
        }
        for ( i = 0; i < 10; i++)
        {
            out2[tee][i] = out1[i];
        }
        tee++;
    }
    fclose(fin);
    int i;
    fout = fopen("D:\\C++codeRUN\\11201.txt","w+t");
    for ( i = 0; i < tee; i++)
    {
        int v;
        for ( v = 0; v < 10; v++)
        {
            char ch = out2[i][v];
            fprintf(fout,"%c",ch);
        }
        fprintf(fout,"\n");
    }
    fclose(fout);
}
