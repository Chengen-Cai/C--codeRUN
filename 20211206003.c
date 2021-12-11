#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int size;
    scanf("%d",&size);
    int row[size][size];
    int column[size][size];
    int answer[size][size];
    int i =0;
    int *run = row[0];
    for ( i = 0; i < size*size; i++)
    {
        *( (run+(i/size)*size) + (i%size) ) = rand() % 10;
    }
    run =column[0];
    for ( i = 0; i < size*size; i++)
    {
        *( (run+(i/size)*size) + (i%size) ) = rand() % 10;
    }
    run =answer[0];
    int* run1 =row[0];
    int *run2 =column[0];
    for ( i = 0; i < size*size; i++)
    {
        int j = 0;
        *( (run+(i/size)*size) + (i%size) ) = 0;
        for ( j = 0; j < size; j++)
        {
            *( (run+(i/size)*size) + (i%size) ) +=(*( (run1+(i/size)*size) + (j) ))* (*( (run2+(j)*size) + (i%size) ));
        }   
    }
    printf("\nA:\n");
    for ( i = 0; i < size*size; i++)
    {
        if (i%size==0)printf("\n");
        printf("%d ",*( (run1+(i/size)*size) + (i%size)) );
    }
    printf("\nB:\n");
    for ( i = 0; i < size*size; i++)
    {
        if (i%size==0)printf("\n");
        printf("%d ",*( (run2+(i/size)*size) + (i%size)) );
    }
    printf("\nanswer:\n");
    for ( i = 0; i < size*size; i++)
    {
        if (i%size==0)printf("\n");
        printf("%d ",*( (run+(i/size)*size) + (i%size)) );
    }




}



 