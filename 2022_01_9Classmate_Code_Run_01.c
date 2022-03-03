#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void tree_run(int* inList,int len,int contral)
{
    printf("{");
    for (size_t i = 0; i < len; i++)
    {
        printf("%d,",*(inList+i));
    }
    printf("}\n");
    if (contral==1)
    {
        return;
    }
    
    
    for (size_t i = 0; i < len; i++)
    {
        int deal = *(inList+i);
        if (deal>1)
        {
            for (int f = 1; f < deal; f++)
            {
                int l=0,r=0;
                if (f>=deal)
                {
                    break;
                }
                int cr = 0;
                l = deal - f;
                if (l<f)
                {
                    break;
                }
                else if(l==f)
                {
                    cr = 1;
                }
                
                
                r = f;
                int * OutList = (int*) malloc(len+1*sizeof(int));
                int v = 0;
                for (size_t c = 0; c < len+1; c++)
                {
                    if (c==i)
                    {
                        *(OutList+c) = l;
                        v++;
                    }
                    else if (c==i+1)
                    {
                        *(OutList+c) = r;
                    }
                    else
                    {
                        *(OutList+c) = *(inList+v);
                        v++;
                    }
                    
                }
                tree_run(OutList,len+1,cr);
                
            }
        }
        
        
        
        
    }  
}

int main(){
    int *a = (int*)malloc(1*sizeof(int));
    scanf("%d",&a[0]);
    tree_run(a,1,0);
   
}