#include <iostream>

using namespace std;

struct nod
{
    int info;
    nod *urm;
};
void add_val (nod*&prim, nod*&ultim,int x)
{
    nod *p=new nod;
    p->info=x;
    if (prim==NULL)
    {
        p->urm=NULL;
        prim=p;
        ultim=prim;
    }
    else
    if (x<prim->info)
    {
        p->urm=prim;
        prim=p;
    }
    else if (x>ultim->info)
    {
        p->urm=NULL;
        ultim->urm=p;
        ultim=p;
    }
    else
    {
        nod *q=new nod;
        q=prim;
        while (q->urm->info<x)
            q=q->urm;
        p->urm=q->urm;
        q->urm=p;
    }
}
void afis(nod *prim)
{
	while (prim)
	{
		cout << prim->info << "\t";
		prim = prim->urm;
	}
}
int main()
{
	int x, i, n;
	nod*prim = NULL, *ultim;
	for (i = 1; i <= n; i++)
	{
		cin >> x;
		add_val(prim, ultim, x);
	}
    return 0;
}