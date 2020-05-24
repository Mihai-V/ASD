#include <iostream>

using namespace std;

struct nod
{
    int info;
    nod *next;
};

void push(int x,nod*&Top)
{
    nod*p;
    p=new(nod);
    p->info=x;
    p->next=NULL;
    if(Top==NULL)
        Top=p;
    else
    {
        p->next=Top;
        Top=p;
    }
}

void pop(nod*&Top)
{
    nod*temp;
    temp=Top;
    Top=Top->next;
    delete(temp);
}

void afisare(nod*Top)
{
    nod*p;
    p=Top;
    if(Top==NULL)
        cout<<"- - - -  ";
    else
        while(p!=NULL)
        {
            cout<<p->info<<" ";
            p=p->next;
        }
    cout<<endl;
}

int main()
{
    int i,n,x;
    char ch;
    nod *Top;
    Top=NULL;
    cout<<"n= ";
    cin>>n;
    if(n%2==1)
    {
        cout<<"sirul nu are numar par de caractere"<<endl;
        return 0;
    }
    for(i=1; i<=n; i++)
    {
        cin>>ch;
        if(ch=='a')
            x=0;
        else x=1;

        if(Top==NULL)
            push(x,Top);
        else if(Top->info==x)
            push(x,Top);
        else pop(Top);
    }
    if(Top==NULL)
        cout<<"numarul de caractere 'a' este egal cu numarul de caractere 'b'."<<endl;
    else
        cout<<"numarul de caractere 'a' nu este egal cu numarul de caractere 'b'."<<endl;
    return 0;
}
