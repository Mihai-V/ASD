#include <iostream>

using namespace std;

int main()
{
    int n,k,i,*v,pas;
    cin>>n;
    v=(int*)malloc((n+1)* sizeof(int));
    cin>>k;
    for(i=1;i<=n;i++)
        cin>>v[i];
    pas=k;
    while(pas>=k)
    {
        v[pas]=0;
        pas+=k;
        if(pas>n)
            pas=pas-n;
    }
    for(i=1;i<=n;i++)
        if(v[i]!=0)
            cout<<v[i];
    return 0;
}