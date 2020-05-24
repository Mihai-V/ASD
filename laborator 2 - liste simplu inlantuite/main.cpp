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
void add_inceput(int x)
{
    nod *p=new nod;
    p->info=x;
    p->urm=prim;
    prim=p;
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
void add_val(int val, int x)
{
    nod *p,*q;
    q=caut_val(val);
    if(q!=NULL)
    {
        p=new nod;
        p->info=x;
        p->urm=q->urm;
        q->urm=p;
    }
    else
        cout<<"valoarea cautata nu se gaseste in lista";
}
void sterg_inceput()
{
    nod *aux;
    aux=prim;
    prim=prim->urm;
    delete aux;
}
void sterg_final()
{
    nod *penultim=prim;
    while(penultim->urm->urm!=NULL)
        penultim=penultim->urm;
    penultim->urm=NULL;
    delete ultim;
    ultim=penultim;
}
void sterg_val(int val)
{
    nod *q;
    q=caut_val(val);
    if(q!=NULL)
    {
        nod *aux=q->urm;
        q->urm=q->urm->urm;
        delete aux;
    }
    else
        cout<<"valoarea cautata nu se gaseste in lista";
}
void creare()
{
    int n,x,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        add_inceput(x);
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
    creare();
    afis();
    //add_inceput(5);
    //afis();
    add_final(27);
    //afis();
    // add_val(19, 44);
    // afis();
    // sterg_inceput();
    //afis();
    //sterg_final();
    //afis();
    //sterg_val(19);
    //afis();
    return 0;
}
