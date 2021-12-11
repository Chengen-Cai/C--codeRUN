#include<iostream>//C++標準開頭檔
#include<math.h>//c語言的函式
#include<iomanip>//此函式庫內部分函式能對C++ cin 函式進行設定，屬於C++的東西
using namespace std;//C++namespace 設定，c能不使用
double one(double n);//函式預定義，非實作
double two(double n);//函式預定義，非實作
double f(double n);//函式預定義，非實作
int main()
{
    double n;
    cout<<"Enter your n"<<endl;//屬於C++的東西

    cin>>n;//輸入可用C語言scanf替換
    cout<<"(2*n+1/3) (in C expression): ";//單純的輸出可用C語言的printf()替換
    cout<< setiosflags(ios::fixed)  << setprecision(6)<<one(n)<<endl;//printf("%.6f \n",one(n)); 這是C語言打法可直接與//左邊替換
                                                                   //上行主要是輸出，他包含了控制輸出小數點後多少位 以及四捨五入，屬於C++的東西
    //其中setiosflags(ios::fixed) 這是設定 ，setprecision(6)而這是將cin設定為將輸出位數定為6
    //setprecision(6)這東西是強制的，一些無小數的答案會因為它而出現小數，屬於C++的東西
    cout<<"sqrt((2*n+1/3)*PI) (in C expression): ";//單純的輸出可用C語言的printf()替換
    
    cout<< setiosflags(ios::fixed)<<setprecision(6) <<two(n)<<endl;//printf("%.6f \n",two(n)); 這是C語言打法可直接與//左邊替換
                                                                   //這行主要是輸出，他包含了控制輸出小數點後多少位 以及四捨五
    //其中setiosflags(ios::fixed) 這是設定 ，而setprecision(6)這是將cin設定為將輸出位數定為6
    cout.unsetf( ios::fixed );//關閉設置，setprecision(6)這東西是強制的，一些無小數的答案會因為它而出現小數,在此將它關閉，屬於C++的東西
    cout<<"your "<<n<<"! equals approximately: " ;//屬於C++的東西，可用C語言的printf()替換
    cout<<f(n)<<endl;//屬於C++的東西，可用C語言的printf()替換


}
//以下為函式實作(c和c++都一樣)
double one(double n)
{
    double output = 0;
    output = 2*n+(double)1/3;
    return output;
}
double two(double n)
{
    double output = 0;
    output = sqrt((2*n+(double)1/3)*3.14159265 );
    return output; 
}
//階層式乘法
double f(double n)
{
    double output=1;
    for (size_t i = 1; i <= n; i++)
    {
        output *=i;
    }
    return output;
}