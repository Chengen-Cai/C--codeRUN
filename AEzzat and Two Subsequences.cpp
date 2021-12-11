#include<iostream>
#include <algorithm>

using namespace std;


int main(){
	int numtext = 0;
	cin>>numtext;
	cout.precision(30);
	while(numtext)
	{
		int numtotal;
		cin>>numtotal;
		int numarray[numtotal];
		double answer = 0;
		int run = 0;
		int a;
		for( a = 0;a<numtotal;a++)
		{
			cin>>numarray[a];
		}
		sort(numarray,numarray+numtotal,greater_equal<int>());
		
		double array1 = numarray[0];
		double array2=0;
		for(int c= 1;c<numtotal;c++)
		{array2+=numarray[c]; 
		 } 
		array2/=numtotal-1;
		answer = array1+array2;
		cout<<answer<<endl;
		numtext--;
	}
	





} 
