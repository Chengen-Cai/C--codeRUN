#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int **map = new int*[r];
    for (size_t i = 0; i < r; i++)
    {
        *(map+i) = new int[c];
        for (size_t f = 0; f < c; f++)
        {
            *(*(map+i)+f) = 0;
        }
        
    }
    int dx[] =  {0,1,0,1,-1,1,-1,-1,0};
    int dy[] =  {-1,1,1,0,1,-1,0,-1,0};
    int x[] = {rand()%c,rand()%c};
    int y[] = {rand()%r,rand()%r};
    for (size_t i = 0;  i < 2; i++)
    {
        for (size_t f = 0; f < 9; f++)
        {
            if ( ( (y[i]+dy[f])>-1&(y[i]+dy[f])<r )& ( (x[i]+dx[f])>-1&(x[i]+dx[f])<c ) )
            {
                *( *(map+ (y[i]+dy[f]) ) + (x[i]+dx[f]) ) +=1;
            }
        }
    }
    for (size_t i = 0; i < r; i++)
    {
        cout<<'\n';
        for (size_t f = 0; f < c; f++)
        {
            cout << *( *(map+ i ) + f );
        }
        
    }
    
    






}