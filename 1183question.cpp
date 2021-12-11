#include<stdio.h>

void zero(char chararry[])
{
	int i = 0;
    for (i = 0; i < 255; i++)
    {
        chararry[i] = '0';
    }
}
int charsize(char chararry[])
{
	int i = 0;
    for ( i = 0; i <= 10; i++)
    {
        if (chararry[i]=='0')
        {
            i=i-1;
            return i;
        }
    }
    return 0;
}
int main(){
    char chararry[255]={'0'};
    int num=0;
    printf("Enter an integer:");
	zero(chararry);
    while(scanf("%s",&chararry)!=EOF)
    {
		if(charsize(chararry)==-1&chararry[0]=='0')
    	{
    		return 0;
		}
    	if(charsize(chararry)!=8&charsize(chararry)!=9)
    	{
        	zero(chararry);
        	printf("Enter an integer:");
        	continue;
    	}
    	num = charsize(chararry);
    	int i;
		int ch = 0;
    	for (i = 0; i < num; i++)
    	{
        	if (chararry[i]!=chararry[num-i-1])
        	{
        	    printf("%s is not a palindrome",chararry);
				ch = 1;
        	    break;
        	}
	    }
		if (ch==0)
		{
			printf("%s is a palindrome",chararry);
			
		}
	  	printf("\n");
		zero(chararry);
	printf("Enter an integer:");
	}
    
    return 0;
}
