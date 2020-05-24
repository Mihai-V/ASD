#include <iostream>

using namespace std;

struct nod
{
    int info;
    nod* prev;
    nod* next;
};
nod *prim, *ultim;
void add(nod*&prim,nod*&ultim,int x)
{
    nod *q;
    q = new nod;
    q->info=x;
    q->next=0;
    if(!prim)
        prim=ultim=q;
    else
    {
        ultim->next=q;
        ultim=q;
    }
    ultim->next=prim;
}
void creare(nod*&p,nod*&u)
{
    int i,n,x;
    cout<<"n= ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        add(p,u,x);
    }
}
void afis(nod* p)
{
    cout<<p->info<<" ";
    nod *c = p->next;
    while(c!=p)
    {
        cout<<c->info<<" ";
        c=c->next;
    }
    cout<<endl;
}
void add_val(nod*&p,nod*&u,int x)
{
    nod *q;
    q=new nod;
    q->info=x;
    q->prev=0;
    q->next=0;
    if(!p)
        p=u=q;
    else
        {
        q->next=0;
        q->prev=u;
        u->next=q;
        u=q;
        }
    u->next=p;
    p->prev=u;
}
void delete_val(nod*&p,nod*&u)
{
    nod *q;
    q=u;
    u->prev->next=p;
    p->prev=u->prev;
    u=u->prev;
    delete q;
}

int main()
{
    creare(prim,ultim);
    afis(prim);
    add_val(prim,ultim,7);
    afis(prim);
    delete_val(prim,ultim);
    afis(prim);
    return 0;
}