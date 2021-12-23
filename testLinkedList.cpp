#include<iostream>

using namespace std;

struct LinkedList
{
    int a;
    LinkedList* next;
};

LinkedList* MakeLinkedList(int a)
{
    LinkedList* h1;
    LinkedList* head;
    for (size_t i = 0; i < a; i++)
    {
        LinkedList* current = (LinkedList*)malloc(sizeof(LinkedList));
        current->a = 0;
        if(i==0)
        {
            head = current;
        }
        else
        {
            h1->next = current;
        }
        h1 = current;
        current ->next = NULL;
    }
    return head;
}

void lineFill(LinkedList* in1,int a,int in2)
{
    for (size_t i = 0; i <= a ; i++)
    {
        if (i==a)
        {
            in1->a = in2;
        }
        else
        {
            in1 = in1->next;
        }
    }
}
int OutLinkList(LinkedList* in1,int a)
{
    for (size_t i = 0; i <= a ; i++)
    {
        if (i==a)
        {
            return in1->a;
        }
        else
        {
            in1 = in1->next;
        }
    }
    return 0;
}

void inCrease_LikedList(LinkedList* in1,int a)
{
    while (in1->next!=NULL)
    {
        in1 = in1->next;
        if (in1->next==NULL)
        {
            for (size_t i = 0; i < a; i++)
            {
                LinkedList* current = (LinkedList*) malloc(sizeof(LinkedList));
                current->a = 0;
                current->next = NULL;
                in1->next = current;
                in1 = current;
            }
        }
        
    }
    
    
}

int main()
{
    LinkedList * linkarray = MakeLinkedList(10);
    for (size_t i = 0; i < 10; i++)
    {
        lineFill(linkarray,i,i+1);
        cout<<OutLinkList(linkarray,i)<<" ";
    }
    inCrease_LikedList(linkarray,5);
    for (size_t i = 0; i < 5; i++)
    {
        lineFill(linkarray,10+i,OutLinkList(linkarray,10+i-2)+OutLinkList(linkarray,10+i-1));
        cout<<OutLinkList(linkarray,10+i)<<" ";
    }
    
}