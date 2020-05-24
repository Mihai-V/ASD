#include <iostream>

using namespace std;

struct nod
{
    int info;
    nod *urm;
};

void add_inceput(int x,nod*&prim)
{
    nod *p=new nod;
    p->info=x;
    p->urm=prim;
    prim=p;
}
void creare(nod*&prim)
{
    int n,x,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        add_inceput(x,prim);
    }
}
void inversare(nod*prim,nod*&prim2)
{
    nod *p1=prim;
    while(p1!=NULL)
    {
        nod *p2;
        p2 = new nod;
        p2->info=p1->info;
        p2->urm=prim2;
        prim2=p2;
        p1=p1->urm;
    }
}
void afis(nod*prim)
{
    nod *p=prim;
    while(p!=NULL)
    {
        cout<<p->info<<" ";
        p=p->urm;
    }
    cout<<endl;
}
int main()
{
    nod *prim=NULL, *prim2=NULL;
    creare(prim);
    afis(prim);
    inversare(prim,prim2);
    afis(prim2);
    return 0;
}