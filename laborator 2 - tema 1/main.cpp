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
int main()
{
    int impar=0,par=0,s=0;
    cin>>n;
    creare(n);
    nod *p=prim;
    while(p!=NULL)
    {
        if(p->info%2==0)
            par++;
        else
        {
            impar++;
            s=s+p->info;
        }
        p=p->urm;
    }
    cout<<"in lista sunt "<<par<<" numere pare"<<"\n";
    cout<<"media aritmetica a numerelor impare este: "<<s/impar;
    return 0;
}
