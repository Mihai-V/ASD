#include <iostream>

using namespace std;

struct nod
{
    int info;
    nod *next;
};

void push (int a,nod*&Front,nod*&Rear)
{
    nod *p;
    p=new nod;
    p->info=a;
    p->next=NULL;
    if(Front==NULL)
        Front=Rear=p;
    else
    {
        Rear->next=p;
        Rear=p;
    }
}

int pop(nod*&Front)
{
    int a=0;
    nod*temp;
    if(Front!=NULL)
    {
        temp=Front;
        a=Front->info;
        Front=Front->next;
        delete(temp);
    }
    return a;
}

int peek(nod*Front)
{
    int a=0;
    if(Front!=NULL)
        a=Front->info;
    return a;
}

bool empty(nod*Front)
{
    if(Front==NULL)
        return 0;
    return 1;
}

int cautare(int a,nod*Front)
{
    nod*p;
    int d=-1;
    p=Front;
    while(p!=NULL)
    {
        d++;
        if(p->info==a)
            return d;
        p=p->next;
    }
    return -1;
}

void afiseaza(nod*Front)
{
    nod*p;
    p=Front;
    if(p==NULL)
        cout<<"Coada vida!";
    else while(p!=NULL)
        {
            cout<<p->info<<" ";
            p=p->next;
        }
    cout<<endl;
}

int main()
{
    int i,n,a;
    nod *Front,*Rear;
    Front=NULL;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        push(a,Front,Rear);
    }
    afiseaza(Front);
    cout<<endl;

    cout<<pop(Front)<<endl;
    afiseaza(Front);
    cout<<endl;

    cout<<peek(Front)<<endl;
    afiseaza(Front);
    cout<<endl;

    if(empty(Front)==0)
    cout<<"coada este vida"<<endl;
    else cout <<"oada nu este vida"<<endl;
    cout<<endl;

    cout<<"a= ";
    cin>>a;
    cout<<cautare(a,Front)<<endl;
    cout<<endl;
    return 0;
}
