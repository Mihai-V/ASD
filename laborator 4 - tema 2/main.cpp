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
    p->urm= nullptr;
    if(prim== nullptr)
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
void afis(nod*prim);
void ordonare(nod *prim1,nod *prim2,nod *&prim3,nod *&ultim3)
{
    nod *p1 = prim1, *p2 = prim2;
    afis(prim1);
    afis(prim2);
    while (p1 && p2)
    {
        if (p1->info < p2->info)
            {
                add_inceput(prim3, ultim3, p2->info);
                p2 = p2->urm;
            }
        else if (p2->info < p1->info)
            {
                add_inceput(prim3, ultim3, p1->info);
                p1 = p1->urm;
            }
            else
        {
                add_inceput(prim3,ultim3,p1->info);
                add_inceput(prim3,ultim3,p2->info);
                p1=p1->urm;
                p2=p2->urm;
        }
    }
    for(;p1;p1=p1->urm)
        add_inceput(prim3,ultim3,p1->info);
    for(;p2;p2=p2->urm)
        add_inceput(prim3,ultim3,p2->info);
}

void afis(nod*prim)
{
    nod *p=prim;
    while(p!= nullptr)
    {
        cout<<p->info<<" ";
        p=p->urm;
    }
    cout<<endl;
}
int main()
{
    nod *prim1= nullptr, *ultim1, *prim2= nullptr, *ultim2,*prim3= nullptr,*ultim3;
    creare(prim1,ultim1);
    afis(prim1);
    creare(prim2,ultim2);
    afis(prim2);
    ordonare(prim1,prim2,prim3,ultim3);
    afis(prim3);
    return 0;
}