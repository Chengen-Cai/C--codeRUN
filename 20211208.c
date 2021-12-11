#include<conio.h>
#include<stdio.h>
int main(){
    printf("請輸入一個4位數:");
    int num = 0;
    int input[4];
    while (num<4)
    {
        input[num] = getch();
        printf("*");
        num++;
    }
    printf("\n你輸入的數字為:");
    for (size_t i = 0; i < 4; i++)
    {
        printf("%c",input[i]);
    }
}