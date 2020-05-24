#include <iostream>

using namespace std;

int n;
struct nod
{
    int info;
    nod *urm;
};
nod *prim, *ultim;
void add_inceput(int x)
{
    nod *p=new nod;
    p->info=x;
    p->urm=prim;
    prim=p;
}
void creare(int suma)
{
    int u_c;
    while(suma)
    {
        u_c=suma%10;
        add_inceput(u_c);
        suma=suma/10;
    }
}
void afis()
{
    nod *p=prim;
    while(p!= NULL)
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
