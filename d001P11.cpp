#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

int f(int x)
{
    return 2*x-1;
}
int g(int x,int y)
{
    int ins4 = x;
    int ins5 = y;
    return x+2*y-3;
}
bool checkstring(string input1)
{
    bool check = false;
    for (size_t i = 0; i< input1.size(); i++)
    {
        
        if ( !('0'<=input1[i]&&input1[i]<='9'))
        {
            check = true;
            
            break;
        }
        
    }
    
    return check;



}

int main(){
    string input ;
    while (getline(cin,input))
    {
        stringstream ss ; 
    ss<<input;
    vector<string> ssv;
    int n = 0;
    while (ss>>input)
    {
        ssv.push_back(input);
        n = input.size();
    }
    int run=0;
    while (ssv.size()>=2)
    {
        while (run<ssv.size())
        {
            if ((!checkstring(ssv[run]))&&run>=1)
            {
                int answer = 0;
                if (ssv[run-1]=="f")
                {
                    answer = f(stoi(ssv[run]));
                    ssv[run-1] =to_string(answer);
                    ssv.erase(ssv.begin()+run,ssv.begin()+run+1);
                    int ins3 = ssv.size();
                    run--;
                }
                
                if(run+1<=ssv.size()-1)
                if (ssv[run-1]=="g"&&!checkstring(ssv[run+1]))
                {
                    answer = g(stoi(ssv[run]),stoi(ssv[run+1]));
                    ssv[run-1] =to_string(answer);
                    ssv.erase(ssv.begin()+run+1,ssv.begin()+run+2);
                    ssv.erase(ssv.begin()+run,ssv.begin()+run+1);
                    int ins1 = stoi(ssv[run-1]);
                    //int ins2 = stoi(ssv[run]);
                    run--;
                }
            }   
            run++;
        }
        if (ssv.size() ==1 )
        {
            cout<<ssv[0]<<endl;
            break;
        }
        run=0;
    }
    }
    
    
    
    
    


}