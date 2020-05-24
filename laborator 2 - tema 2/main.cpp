#include <iostream>

using namespace std;

int n;
struct nod
{
    int info;
    nod *urm;
};
nod *prim, *ultim;
nod *caut_val(int val)
{
    nod *p;
    p=prim;
    while(p!=NULL && p->info!=val)
        p=p->urm;
}
void add_final(int x)
{
    nod *p;
    p = new nod;
    p->info=x;
    p->urm=NULL;
    if(prim==NULL)
        prim=ultim=p;
    else
    {
        ultim->urm=p;
        ultim=p;
    }
}
void creare(int n)
{
    int x,i;
    for(i=0; i<n; i++)
    {
        cin>>x;
        add_final(x);
    }
}
void afis()
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
    int s=0,medie=0,nr=2,x;
    cin>>n;
    creare(n);
    nod *p=prim;
    while(p->urm!=NULL)
    {
        medie=(p->info+p->urm->info)/2;
        nod *t= new nod;
        t->info=medie;
        t->urm=p->urm;
        p->urm=t;
        p=p->urm->urm;

    }
    afis();
    return 0;
}
