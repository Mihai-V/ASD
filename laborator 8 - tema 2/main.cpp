#include <iostream>
#include <algorithm>

using namespace std;

struct nod{
    int info;
    int  bal;
    nod* left,*right;
};
nod *p;
void merge(nod *p)
{
    while (p->left != NULL || p->right != NULL)
    {
        if (p->left->info <= p->right->info)
        {
            cout<<p->left->info<<" ";
            p->info = p->left->info;
            p->left = NULL;
        }
        else
        {
            cout<<p->right->info<<" ";
            p->info = p->right->info;
            p->right = NULL;
        }
    }
}
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
bool inserare(int val)
{
    if (p->info>val)
        if(inserare_recursiva(p->left,val)==true)
            p->bal--;
        else
            return false;
    else if (inserare_recursiva(p->right,val)==true)
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
int main() {
    inserare(5);
    merge(p);
    return 0;
}