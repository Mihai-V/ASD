#include <iostream>

using namespace std;

int main()
{
    int n,x,i,poz;
    poz = 0;
    cout<<"n=";
    cin>>n;
    int *pereche;
    pereche = (int*) malloc(n* sizeof(int));
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(poz==-1)
            pereche[++poz]=x;
        else if(pereche[poz]!=x)
            pereche[++poz]=x;
        else poz--;
    }
    if(poz==0)
        cout<<"configuratie valida"<<endl;
    else cout<<"configuratie invalida"<<endl;
}
