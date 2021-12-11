#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<string> arr ;
    string a = "Hi";
    string b = "Hello";
    string c = "word";
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    cout<<arr.size() <<endl;
    arr.erase(arr.begin()+2,arr.begin()+3);
    cout<<arr.size() <<endl;
    cout<<arr[1]<<endl;
    cin>>a;
    system("PAUSE");

}


