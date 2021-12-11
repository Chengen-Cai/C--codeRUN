#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    while (n--)
    {
       int num;
       cin>>num;
       int number[num+1];
       for (size_t i = 1; i <= num; i++)
       {
           int insertnum = 0;
           cin>>insertnum;
           number[i] = insertnum;
       }
       number[0] = 0;
        int maxline= 0;
        for (size_t f = 1; f <= num; f++)
        {
            int cur = f;
            while (cur<=num)
            {
                cur+=number[cur];
            }
            if ((cur-f)>=maxline)
            {
                maxline=cur-f;
            }
        }
        cout<<maxline<<endl;
        cout<<"Hi"<<endl;



    }
    
    return 0;
}
