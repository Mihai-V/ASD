#include <iostream>

using namespace std;

int n;
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

void afis(nod*prim)
{
    nod *p=prim;
    while(p!=NULL)
    {
        cout<<p->info;
        p=p->urm;
    }
    cout<<endl;
}

void add_final(nod *&prim,nod *&ultim,int x)
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

void afis_nr(nod*prim)
{
    if (prim!=NULL)
    {
        afis_nr(prim->urm);
        cout<<prim->info;
    }
}

void suma(nod *prim1,nod *prim2, nod *&prim3,nod *&ultim3)
{
    nod *p1=prim1, *p2=prim2;
    prim3 = NULL;
    int cifra,val;
    cifra=0;
    while(p1 && p2)
    {
        val = (p1->info + p2->info + cifra) % 10;
        cifra = (p1->info + p2->info + cifra) / 10;
        add_final(prim3, ultim3, val);
        p1 = p1->urm;
        p2=p2->urm;
    }
    while(p1)
    {
        val = (p1->info + cifra) % 10;
        cifra = (p1->info + cifra) / 10;
        add_final(prim3, ultim3, val);
        p1=p1->urm;
    }
    while(p2)
    {
        val = (p2->info + cifra) % 10;
        cifra = (p2->info + cifra) / 10;
        add_final(prim3, ultim3, val);
        p2=p2->urm;
    }
    if(cifra>0)
        add_final(prim3,ultim3,cifra);
}

void produs(nod *prim1,nod *prim2,nod *&prim3,nod *&ultim3)
{
    nod *p1=prim1, *p2=prim2, *prim_aux=NULL, *ultim_aux;
    prim3 = NULL;
    int cifra=0;
    while(p2)
    {
        int val = (p1->info * p2->info + cifra) % 10;
        cifra = (p1->info * p2->info + cifra) / 10;
        add_final(prim3, ultim3, val);
        p2 = p2->urm;
    }
    if(cifra>0)
        add_final(prim3,ultim3,cifra);

    int nr_zerouri=1;
    p1=prim1->urm;
    while(p1)
    {
        prim_aux=NULL;
        for(int i=0;i<nr_zerouri;i++)
            add_final(prim_aux,ultim_aux,0);
        p2=prim2;
        cifra=0;
        while(p2)
        {
            int val = (p1->info * p2->info + cifra) % 10;
            cifra = (p1->info * p2->info + cifra) / 10;
            add_final(prim_aux, ultim_aux, val);
            p2 = p2->urm;
        }
        if(cifra>0)
            add_final(prim_aux,ultim_aux,cifra);
        nr_zerouri++;
        suma(prim3, prim_aux,prim3, ultim3);
        p1=p1->urm;
    }
}
int main()
{
    nod *prim1=NULL, *ultim1, *prim2=NULL, *ultim2,*prim3=NULL,*ultim3;
    creare(prim1,ultim1);
    afis_nr(prim1);
    cout<<endl;
    creare(prim2,ultim2);
    afis_nr(prim2);
    cout<<endl;
    produs(prim1,prim2,prim3,ultim3);
    afis_nr(prim3);
    return 0;
}