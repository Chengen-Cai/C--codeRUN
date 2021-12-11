#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int num[n];
    for (size_t i = 0; i < n; i++)
    {
        cin>>num[i];
    }
    int first = 0,d = 0;
    cin>>first>>d;
    bool check = true;
    for (size_t i = 0; i < n; i++)
    {
        if ((num[i]-num[first])%d!=0)
        {
            check =false;
            break;
        }
        if (num[i]==0&num[first]%d!=0)
        {
            check =false;
        }
        
    }
    if (check)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
}