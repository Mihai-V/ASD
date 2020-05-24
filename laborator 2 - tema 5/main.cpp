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
void produs(nod *prim1,nod *prim2,nod *&prim4,nod *&ultim4)
{
    nod *p1=prim1, *p2=prim2, *prim3=NULL, *ultim3, *p3;
    p3 = prim3;
    int cifra;
	while(p2)
        {
            val = (p1->info * p2->info + cifra) % 10;
            cifra = (p1->info * p2->info + cifra) / 10;
            add_inceput(prim3, ultim3, val);
            p2 = p2->urm;
        }
    while(p1)
    {
        cifra=0;
        int val;
        while(p2)
        {
            val = (p1->info * p2->info + cifra) % 10;
            cifra = (p1->info * p2->info + cifra) / 10;
            add_inceput(prim3, ultim3, val);
            p2 = p2->urm;
        }
        if(cifra>0)
        add_inceput(prim3,ultim3,cifra);
        while(p3)
        {
            val = (p3->info + p4->info + cifra) % 10;
            cifra = (p1->info * p2->info + cifra) / 10;
            add_inceput(prim3, ultim3, val);
            p2 = p2->urm;
        }
        p1=p1->urm;
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
void afis_nr(nod*prim)
{
    if (prim!=NULL)
    {
        afis_nr(prim->urm);
        cout<<prim->info;
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
    afis(prim3);
    return 0;
}
