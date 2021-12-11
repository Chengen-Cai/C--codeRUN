#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define p push_back

int main(int argc, char const *argv[])
{
    int n ;
    cin>>n;
    while (n--)
    {
        int w,h;
        cin>>w;
        cin>>h;
        int count;
        cin>>count;
        int f = 1;
        bool check = false;
        while (w%2==0||h%2==0)
        {
            if (f>=count)
            {
                check = true;
                break;
            }
            
            if (w%2==0)
            {
                w/=2;
                f*=2;
            }
            if (h%2==0)
            {
                h/=2;
                f*=2;
            }
            
            
        }
        if(check||f>=count)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
