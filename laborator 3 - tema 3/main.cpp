#include <iostream>
#include <string.h>

using namespace std;
struct pol
{
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
    pol *p=new pol;
    p=prim;
    while (p!=NULL)
    {
        cout<<p->coef<<" "<<p->gr<<" ";
        p=p->next;
    }
}
void evaluare_polinom (pol *&prim, pol *&ultim, int x, int&val)
{
    int i,aux;
    pol *p=new pol;
    p=prim;
    val=0;
    while (p!=NULL)
    {
        aux=1;
        for (i=1;i<=p->gr;i++)
            aux*=x;
        val+=p->coef*aux;
        p=p->next;
    }
}
int main()
{
    pol *prim1,*ultim1, *prim2, *ultim2;
    char s[100];
    int coef, gr,i,val,x;
    prim1=ultim1=prim2=ultim2=NULL;
    cin.get (s,100);
    for (i=0;i<strlen(s);i=i+4)
    {
        coef=s[i]-'0';
        gr=s[i+2]-'0';
        adaugare (prim1,ultim1,coef,gr);
    }
    s[0]=NULL;
    cin.get ();
    cin.get (s,100);
    for (i=0;i<strlen(s);i=i+4)
    {
        coef=s[i]-'0';
        gr=s[i+2]-'0';
        adaugare (prim2,ultim2,coef,gr);
    }
    cout<<"x= ";
    cin>>x;
    evaluare_polinom(prim1, ultim1, x,val);
    cout<<val<<endl;
    evaluare_polinom(prim2, ultim2, x,val);
    cout<<val;
}