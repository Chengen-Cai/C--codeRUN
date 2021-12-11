#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    while (cin>>n)
    {
        int numin[n];
        for (size_t i = 0; i < n; i++)
        {
            cin>>numin[i];
        }
        set<int> num;
        num.insert(0);
        for (size_t i = 0; i < n; i++)
        {
            int in = numin[i];
            vector<int> innum;
            for (set<int>::iterator e=num.begin();e!=num.end();e++)
            {
                innum.push_back(in+*e);
            }
            for (size_t e = 0; e < innum.size(); e++)
            {
                num.insert(innum[e]);
            }

        }
        cout<<num.size()-1<<endl;
        
    }
    system("PAUSE");
}