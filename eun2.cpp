#include<iostream>
#include<map>
#include<set>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num[n];
    set<int> finum ;
    map<int,int> numnum;
    for (size_t i = 0; i < n; i++)
    {
        cin>>num[i];
        if (finum.count(num[i])>0)
        {
            numnum[num[i]]++;
        }
        else
        {
            finum.insert(num[i]);
            pair<int,int> ine;
            ine.first = num[i];
            ine.second = 1;
            numnum.insert(ine);
        }
    }
    int find;
    cin>>find;
    cout<<numnum[find]<<endl;




}