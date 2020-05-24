#include <iostream>

using namespace std;

struct nod
{
    int info;
    nod *next;
};

void push(int a, nod*&Top)
{
    nod *p;
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

void pop(nod*&Top)
{
    nod*temp;
    temp=Top;
    Top=Top->next;
    delete(temp);
}

int main()
{
    int i,n,x,poz;
    poz = 0;
    char ch;
    nod *Top;
    Top=NULL;
    cout<<"n=";
    cin>>n;
    if(n%2==1)
    {
        cout<<"sirul are numar impar de caractere"<<endl;
        return 0;
    }
    for(i=1; i<=n; i++)
    {
        cin>>ch;
        if(ch=='(')
            x=0;
        else x=1;
        if(Top==NULL)
            if(x==1)
            {
                cout<<"incorect parantezat"<<endl;
                cout<<"paranteza care nu are orespondent se afla pe pozitia: "<<poz;
                return 0;
            }
            else push(x,Top);
        else if(Top->info==x)
            push(x,Top);
        else pop(Top);
        poz++;
    }
    if(Top==NULL)
        cout<<"corect parantezat"<<endl;
    else cout<<"incorect parantezat"<<endl;
    return 0;
}
