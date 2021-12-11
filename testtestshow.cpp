#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    char input;
    while (1)
    {
        cin>>input;
        char b;
        if ( !((input>='a'&input<='z')|(input>='A'&input<='Z')) )
        {
            continue;
        }
        if ((input>='a'&input<='z'))
        {
            b = (a-'a'+'A');
            cout<<b;
        }
        else if(input>='A'&input<='Z')
        {
            b = (input-'A'+'a');
            cout<<b;
        }
        
    }
    2
    A B C
    
    a b c
}