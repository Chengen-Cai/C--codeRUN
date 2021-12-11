#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    double c,d;
    c = sqrt(a);
    d = sqrt(b);
    if (c>(int)c)
    {
        c = (int)(c+1);
    }
    if (d>(int)d)
    {
        d = (int)(d);
    }
    int answer = d-c+1;
    if (d<c)
    {
        answer = 0;
    }
    cout<<answer;

}