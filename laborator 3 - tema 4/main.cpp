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
void suma_polinoame (pol *prim1, pol *ultim1,pol *prim2, pol *ultim2,pol *&prim3, pol *&ultim3)
{
    pol *p=new pol;
    pol *q=new pol;
    p=prim1;
    q=prim2;
    while (p!=NULL && q!=NULL)
        if (p->gr==q->gr)
        {
            adaugare(prim3,ultim3,p->coef+q->coef,p->gr);
            p=p->next;
            q=q->next;
        }
        else
        if (p->gr>q->gr)
        {
            adaugare(prim3,ultim3,p->coef,p->gr);
            p=p->next;
        }
        else
        {
            adaugare(prim3,ultim3,q->coef,q->gr);
            q=q->next;
        }

    while (q!=NULL)
    {
        adaugare(prim3,ultim3,q->coef,q->gr);
        q=q->next;
    }
    while (p!=NULL)
    {
        adaugare(prim3,ultim3,p->coef,p->gr);
        p=p->next;
    }
}
int main()
{
    pol *prim1,*ultim1, *prim2, *ultim2, *prim3, *ultim3;
    char s[100];
    int coef, gr,i;
    prim1=ultim1=prim2=ultim2=prim3=ultim3=NULL;
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
    suma_polinoame (prim1, ultim1,prim2,ultim2,prim3, ultim3);
    afisare_lista(prim3,ultim3);
    return 0;
}