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
        int alice = 0;
        int bob = 0;
        int check = true;
        
        while (num--)
        {
            int current;
            cin>>current;

            // if (check)
            // {
            //     if (current%2==0)
            //     {
            //         alice+=current;
            //     }
            //     check= false;
            // }
            // else
            // {
            //     if (current%2!=0)
            //     {
            //         bob+=current;
            //     }
            //     check = true;
            // }
            
            
            
        }
        if (alice>bob)
        {
            cout<<"Alice"<<endl;
        }
        if (alice<bob)
        {
            cout<<"Bob"<<endl;
        }
        if (alice==bob)
        {
            cout<<"Tie"<<endl;
        }
    }
    
    return 0;
}
