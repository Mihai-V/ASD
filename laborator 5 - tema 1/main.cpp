#include <iostream>

using namespace std;

struct nod
{
    int info;
    nod *next;
};

void push(int a, nod*&Top)
{
    nod*p;
    p=new(nod);
    p->info=a;
    p->next=NULL;

    if(Top==NULL)
        Top=p;
    else
    {
        p->next=Top;
        Top=p;
    }
}

int pop(nod*&Top)
{
    nod*temp;
    int a;
    if(Top==NULL)
        return 0;
    else
    {
        temp=Top;
        a=Top->info;
        Top=Top->next;
        delete(temp);
    }
    return a;
}

int peek(nod*Top)
{
    int a;
    if(Top!=NULL)
        a=Top->info;
    else a=0;
    return a;
}

bool empty(nod*Top)
{
    bool v;

    if(Top==NULL)
        v=false;
    else v=true;
    return v;
}

int search(int a,nod*Top)
{
    nod *p;
    int d=0;

    p=Top;
    while(p!=NULL)
    {
        if(p->info==a)
            return d;
        p=p->next;
        d++;
    }
    return -1;
}

void afisare(nod*Top)
{
    nod*p;

    p=Top;
    if(p==NULL)
        cout<<"Lista vida";
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
    int i,n,a;
    nod *Top;

    Top=NULL;

    cout<<"n= ";
    cin>>n;
    cout<<"numerele: ";
    for(i=1; i<=n; i++)
    {
        cin>>a;
        push(a,Top);
    }
    afisare(Top);
    cout<<endl;

    cout<<"primul element din stiva: ";
    cout<<pop(Top)<<endl;
    afisare(Top);
    cout<<endl;

    cout<<"primul element din stiva fara a-l scoate: ";
    cout<<peek(Top)<<endl;
    afisare(Top);
    cout<<endl;

    if(empty(Top)==0)
        cout<<"lista este vida"<<endl;
    else cout<<"lista nu este vida"<<endl;
    cout<<endl;

    cout<<"introduceti elementul: ";
    cin>>n;
    cout<<search(n,Top)<<endl;
    cout<<endl;
}
