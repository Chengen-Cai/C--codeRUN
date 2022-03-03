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
void teststring(string a)
{
    a = "123";
    a[1] = '3';
    cout<<a<<endl;
}

int main(int argc, char *argv[]) {
    string a = "123";
    teststring(a);
    cout<<a;
}