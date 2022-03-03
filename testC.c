#include<stdio.h>
#include <stdlib.h>
#include<string.h>
char* turn_chac(char* inp,int indleft,int indright)
{
    char med = inp[indleft];
    inp[indleft] = inp[indright];
    inp[indright] = med;
    return inp;
}
int main()
{
    
    
    
}