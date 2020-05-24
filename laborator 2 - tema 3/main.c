#include <iostream>

using namespace std;

int n;
struct nod
{
    int info;
    nod *urm;
};
nod *prim, *ultim;
void add_final(int x)
{
    nod *p;
    p = new nod;
    p->info=x;
    p->urm= nullptr;
    if(prim== nullptr)
        prim=ultim=p;
    else
    {
        ultim->urm=p;
        ultim=p;
    }
}
void creare(int suma)
{
    int u_c;
    cin>>n;
    while(suma)
    {
        u_c=suma%10;
        add_final(u_c);
        suma=suma/10;
    }
}
void afis()
{
    nod *p=prim;
    while(p!= nullptr)
    {
        cout<<p->info<<" ";
        p=p->urm;
    }
    cout<<endl;
}
int main() {
    int numar_1,numar_2,suma=0;
    cin>>numar_1>>numar_2;
    suma=numar_1+numar_2;
    creare(suma);
    afis();
    return 0;
}
