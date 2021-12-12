#include<iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"請輸入矩陣大小(需輸入兩個數):";
    cin>>m>>n;
    int f;
    //cout<<"共有幾個輸入九宮格:";
    //cin>>f;
    f = 1;
    int x[f],y[f];
    for (size_t i = 0; i < f; i++)
    {
        cin>>y[i]>>x[i];
    }
    int **map =new int*[m];
    for (size_t i = 0; i < m; i++)
    {
        *(map+i) = new int[n];
        for (size_t e = 0; e < n; e++)
        {
            *(*(map+i)+e) = 0;
        }
        
    }
    int dx[] = {0,1,0,1,-1,0,-1,1,-1};
    int dy[] = {0,0,1,1,0,-1,1,-1,-1};
    
    for (size_t i = 0; i < f; i++)
    {
        for (size_t e = 0; e < 9; e++)
        {
            int ddx = x[i]+dx[e];
            int ddy = y[i]+dy[e];
            if ( (ddx>-1&ddx<n)&(ddy>-1&ddy<m) )
            {
                *(*(map+(ddy))+(ddx)) = 1;
            }
        }
    }
    for (size_t i = 0; i < m; i++)
    {
        for (size_t e = 0; e < n; e++)
        {
            cout<<*(*(map+(i))+(e))<<' ';
        }
        cout<<'\n';
    }
    
     






}