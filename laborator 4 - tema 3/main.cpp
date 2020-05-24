#include <iostream>

using namespace std;

struct nod
{
    int info;
    nod *urm;
};
void add_inceput(nod *&prim,nod *&ultim,int x)
{
    nod *p;
    p = new nod;
    p->info=x;
    p->urm=NULL;
    if(prim==NULL)
        prim=ultim=p;
    else
    {
        p->urm=prim;
        prim=p;
    }
}
void creare(nod*&prim,nod*&ultim)
{
    int n;
    cout<<"nr cifre: ";
    cin>>n;
    cout<<"cifrele: ";
    int x;
    while(n)
    {
        cin>>x;
        add_inceput(prim,ultim,x);
        n--;
    }
}
void distribuire(nod *prim1,nod *&prim2,nod *&ultim2,nod *&prim3,nod *&ultim3)
{
    int pozitie=1,x;
    while(prim1)
    {
        x=prim1->info;
        if(pozitie%2==1)
            add_inceput(prim2,ultim2,x);
        else
            add_inceput(prim3,ultim3,x);
        pozitie++;
        prim1=prim1->urm;
    }
}
void afis(nod*prim)
{
    while(prim!=NULL)
    {
        cout<<prim->info<<" ";
        prim=prim->urm;
    }
    cout<<endl;
}
int main()
{
    nod *prim1=NULL, *ultim1, *prim2=NULL, *ultim2,*prim3=NULL,*ultim3;
    creare(prim1,ultim1);
    distribuire(prim1,prim2,ultim2,prim3,ultim3);
    afis(prim2);
    afis(prim3);
    return 0;
}