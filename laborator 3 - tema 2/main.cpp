#include <iostream>

using namespace std;

struct pol {
    int gr, coef;
    pol *next;
};

void adaugare (pol*&prim, pol*&ultim, int coef, int gr)
{
    pol *p=new pol;
    p->gr=gr;
    p->coef=coef;
    if (prim==NULL)
    {
        p->next=NULL;
        prim=p;
        ultim=prim;
    }
    else
    {
        p->next=NULL;
        ultim->next=p;
        ultim=p;
    }
}

void afisare_lista (pol*prim, pol*ultim)
{
    pol *p;
    p=prim;
    while (p!=NULL)
    {
        cout<<p->coef<<" "<<p->gr<<" ";
        p=p->next;
    }
}
void inmultire_polinom (pol *&prim, pol*&ultim, int a)
{
    pol *p=new pol;
    p=prim;
    while (p!=NULL)
    {
        p->coef=p->coef*a;
        p=p->next;
    }
}
int main()
{
    pol *prim1,*ultim1, *prim2, *ultim2;
    char s[100];
    int coef, gr,i,a;
    prim1=ultim1=prim2=ultim2=NULL;
    cin.get(s,100);
    for (i=0;i<strlen(s);i=i+4)
    {
        coef=s[i]-'0';
        gr=s[i+2]-'0';
        adaugare (prim1,ultim1,coef,gr);
    }
    s[0]=NULL;
    cin.get ();
    cin.get(s,100);
    for (i=0;i<strlen(s);i=i+4)
    {
        coef=s[i]-'0';
        gr=s[i+2]-'0';
        adaugare (prim2,ultim2,coef,gr);
    }
    cout<<"a= ";
    cin>>a;
    afisare_lista(prim1,ultim1);
    cout<<endl;
    inmultire_polinom (prim1,ultim1,a);
    afisare_lista(prim1,ultim1);
    cout<<endl;
    afisare_lista(prim2,ultim2);
    cout<<endl;
    inmultire_polinom (prim2,ultim2,a);
    afisare_lista(prim2,ultim2);
}