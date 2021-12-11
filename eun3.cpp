#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> num ;
    int n = 0;
    cin>>n;
    int nume[n];
    int counter =0;
    for (size_t i = 0; i < n; i++)
    {
        int c = 0;
        cin>>c;
        nume[i] = c;
        if (num.count(nume[i])==0)
        {
            counter++;
            num.insert(nume[i]);
        }
    }
    cout<<counter<<endl;
    



}