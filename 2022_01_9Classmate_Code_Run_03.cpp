#include<iostream>
#include<map>
#include<algorthm>
using namespace std;
string turn_chac(string inp,int indleft,int indright)
{
    char med = inp[indleft];
    inp[indleft] = inp[indright];
    inp[indright] = med;
    return inp;

}
map<string,string> CheckList;
void run_it(string nowStr)
{
    for (size_t i = 0; i < nowStr.length(); i++)
    {
        for (size_t f = 0; f < nowStr.length(); f++)
        {
            string now = turn_chac(nowStr,i,f);
            if ( CheckList.find(now)==CheckList.end())
            {
                bool che = (CheckList.find(now)==CheckList.end());
                cout<<now<<endl;
                CheckList.insert(pair<string,string>(now,now));  
                run_it(now); 
            }
            else
            {
            }
        }
    }
    return;
}
int main(){
    string a;
    cin>>a;
    map<string,string> CheckList;
    CheckList.insert(pair<string,string> (a,a));
    run_it(a);
       
}