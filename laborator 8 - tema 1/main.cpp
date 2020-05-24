#include <iostream>
#include <algorithm>

using namespace std;

struct nod{
    int info;
    int bal;
    nod* left,*right;
};
nod *p;
void rotatie_dreapta(nod *&p)
{
    nod *t = p->left;
    p->left = t->right;
    t->right = p;
    p->bal = p->bal + (1 - min(t->bal,0));
    t->bal = t->bal + (1 + max(p->bal,0));
    p = t;
}
void rotatie_stanga(nod *&p)
{
    nod *t = p->right;
    p->right = t->left;
    t->left = p;
    p->bal = p->bal + (1 + min(t->bal,0));
    t->bal = t->bal + (1 - max(p->bal,0));
    p = t;
}
void rotatie_dreapta_stanga(nod *&p)
{
    rotatie_dreapta(p->right);
    rotatie_stanga(p);
}
void rotatie_stanga_dreapta(nod *&p)
{
    rotatie_stanga(p->left);
    rotatie_dreapta(p);
}
void echilibreaza(nod *&p)
{
    if (p->bal == -2)
        if (p->left->bal==1)
            rotatie_stanga_dreapta(p);
        else
            rotatie_dreapta(p);
    else if (p->bal == 2)
        if (p->right->bal == -1)
            rotatie_dreapta_stanga(p);
        else
            rotatie_stanga(p);
}
bool inserare_recursiva(nod *&p,int val)
{
    if(p == NULL)
    {
        p = new nod;
        p->info = val;
        p->bal = 0;
        p->left = NULL;
        p->right = NULL;
        return true;
    }
    else if (p->info == val)
        return false;
}
bool inserare(nod*& p,int val)
{
    if (p->info>val)
        if(inserare(p->left,val)==true)
            p->bal--;
        else
            return false;
    else if (inserare(p->right,val)==true)
        p->bal++;
    else
        return false;
    if (p->bal ==0 || p->bal == 1 || p->bal == -1)
        return true;
    else
    {
        echilibreaza(p);
        return false;
    }
}
nod *minim(nod *x)
{
    while (x->left)
        x = x->left;
    return x;
}
bool stergere(nod *&p,int val)
{
    if (p==NULL)
        return false;
    if (p->info > val)
        if(stergere(p->left,val)==true)
            p->bal++;
        else
            return false;
    else if(p->info<val)
        if(stergere(p->right,val)==true)
            p->bal--;
        else
            return false;
    else if (p->left == NULL || p->right == NULL)
    {
        if(p->left != NULL)
        {
            p->info = p->left->info;
            p->left = NULL;
            p->bal++;
            return true;
        }
        else if (p->right != NULL)
        {
            p->info = p->right->info;
            p->right = NULL;
            p->bal--;
            return true;
        }
    else
        {
        nod *y = minim(p->right);
        p->info = y->info;
        if(stergere(p->right,y->info) == true)
            p->bal--;
        else
            return false;
        }
    if (p->bal == 2 || p->bal == -2)
        echilibreaza(p);
    if (p->bal == 0)
        return true;
    else
        return false;
    }
}
void afisare(nod *p)
{
    if (p == NULL)
        return;
    afisare(p->left);
    cout << p->info << " ";
    afisare(p->right);
}
int main()
{
    int i,n,x;
    cout<<"introduceti numarul de noduri: ";
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        cout<<"introduceti valoarea nodului: ";
        cin>>x;
        inserare(p,x);
    }
    afisare(p);
    return 0;
}
