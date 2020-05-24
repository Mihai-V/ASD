#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void CautSecv(int n, int x,int v[100])
{
    int i,ok;
    i=0;
    ok=0;
    while(i<n&&!ok)
        if(v[i]==x)
            ok=1;
        else
            i++;
    if(ok==1)
        printf("%d se gaseste in vector\n",x);
    else
        printf("%d nu se gaseste in vector\n",x);
}
void CautBinara(int n, int x,int v[100])
{
    bool gasit=false;
    int st,dr,mij;
    st=0;
    dr=n-1;
    while(st<dr  &&  gasit==false)
    {
        mij=(st+dr)/2;

        if(v[mij]==x)
        {
            printf("%d se gaseste in vector\n",x);
            gasit=true;
        }
        if(v[mij]<x)
            st = mij+1;
        else
            dr = mij-1;
    }
    if(gasit==false)
        printf("%d nu se gaseste in vector\n",x);
}
int main()
{
    int n,v[100],i,x;
    printf("introduceti n: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("v[%d] = ",i);
        scanf("%d",&v[i]);
    }
    printf("introduceti x: ");
    scanf("%d",&x);
    //CautSecv(n,x,v);
    //CautBinara(n,x,v);
    return 0;
}
