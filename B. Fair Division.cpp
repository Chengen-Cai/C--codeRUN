#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n ;
    cin>>n;
    while (n--)
    {
        int num = 0;
        int alice,bob;
        alice = bob = 0;
        cin>>num;
        int doublenum=0;
        int singlnum = 0;
        while (num--)
        {
            int now;
            cin>>now;
            if(now==2)
            {doublenum++;}
            else
            {
                singlnum++;
            }
        }
        if (singlnum%2==0&&doublenum%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if (doublenum%2!=0&&singlnum%2==0&&singlnum!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

