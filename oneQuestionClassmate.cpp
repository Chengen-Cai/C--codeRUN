#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n;
 printf("Enter your internet data usage:");
 scanf("%d",&n);
 printf("\nthe internet charge is :NT$");
 if (n<=1&&n>0)
 {
    printf("250");
 }
 if (n<=2&&n>1)
 {
    printf("500");
 }
 if (n<=5&&n>2)
 {
    printf("1000");
 }
 if (n<=10&&n>5)
 {
    printf("1500");
 }
 if (n>10)
 {
    printf("2000");
 }
 printf(".");








}