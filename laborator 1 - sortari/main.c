#include <stdlib.h>
#include <stdio.h>

void BubbleSort(int n, int v[100])
{
    int i,j,aux;
    for(i=n-1; i>=1; i--)
        for(j=0; j<i; j++)
            if(v[i]<v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
}
void InsertionSort(int n,int v[100])
{
    int i=1,j,aux,x;
    while(i<n)
    {
        x=v[i];
          j=i-1;
        while(j>=0   &&  v[j]>x)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=x;
        i++;
    }
}
void SelectionSort(int n, int v[100])
{
    int i,j,minim,poz_min;
    for(i=0;i<n-1;i++)
    {
        minim=v[i];
        poz_min=i;
        for(j=i+1;j<n;j++)
            if(v[j]<minim)
        {
            minim=v[j];
            poz_min=j;
        }
        v[poz_min]=v[i];
        v[i]=minim;
    }
}
int main()
{
    int n,i,v[100];
    printf("introduceti valoarea lui n: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("v[%d]= ",i);
        scanf("%d",&v[i]);
    }
    //BubbleSort(n,v);
    //InsertionSort(n,v);
    //SelectionSort(n,v);
    for(i=0; i<n; i++)
        printf("%d ",v[i]);
    return 0;
}
