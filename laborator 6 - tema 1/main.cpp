#include <iostream>

using namespace std;

struct nod
{
    int info;
    nod *next;
    nod *prev;
};
nod *prim, *ultim;

void add_end(int x)
{
    nod *p;
    p = new nod;
    p->info=x;
    p->next=NULL;
    if(prim==NULL)
    {
        prim=ultim=p;
        prim->prev=0;
        ultim->next=0;
    }
    else
    {
        p->next=prim;
        prim->prev=p;
        prim=p;
        prim->prev=0;
    }
}
void add_start(int x)
{
    nod *p = new nod;
    p->info = x;
    p->prev = NULL;
    p->next = prim;
    if (prim != NULL)
        prim->prev = p;
    prim = p;
}
nod* search_pos(nod *prim, int x)
{
    int i = 0;
    while (prim != NULL && i < x)
    {
        prim = prim->next;
        i++;
    }
    if (i == x)
        return prim;
    else
        return NULL;
}
nod* search_val(nod *prim, int x)
{
    while (prim != NULL && prim->info != x)
        prim = prim->next;
    return prim;
}
void delete_element(nod* elem)
{
    elem->prev->next = elem->next;
    elem->next->prev = elem->prev;
    delete elem;
}
void delete_val(int x)
{
    if (prim == NULL)
        return;
    if (prim->info == x)
    {
        nod* p = prim;
        prim = prim->next;
        prim->prev = NULL;
        delete p;
        return;
    }
    nod* elem = search_val(prim, x);
    if (elem->next != NULL)
        delete_element(elem);
}
void delete_pos(int x)
{
    if (prim == NULL)
        return;
    if (x == 0)
    {
        nod* deSters = prim;
        prim = prim->next;
        prim->prev = NULL;
        delete deSters;
        return;
    }
    nod* elem = search_pos(prim, x);
    delete_element(elem);
}
void create_start()
{
    int n,x,i;
    cout<<"numarul de elemente din lista este: ";
    cin>>n;
    cout<<"introduceti elementele listei\n";
    for(i=0; i<n; i++)
    {
        cin>>x;
        add_start(x);
    }
}
void add_int(int x)
{
    nod *p = new nod;
    p->info = x;
    p->next = NULL;
    p->prev = NULL;
    if (prim == NULL)
    {
        prim = p;
        return;
    }
    if (prim == p)
    {
        p->next = prim;
        prim->prev = p;
        prim = p;
        return;
    }
    p->next = p->next;
    p->prev = p;
    p->next->prev = p;
    p->next = p;
}
void print_fwd()
{
    nod *p=prim;
    while(p!=NULL)
    {
        cout<<p->info<<" ";
        p=p->next;
    }
    cout<<endl;
}
void print_back()
{
    nod *p = prim;
    while (p != NULL) {
        cout << p->info << " ";
        p = p->prev;
    }
    cout << endl;
}
int main()
{
    int i,x;
    cout<<"CREARE LISTA\n";
    create_start();
    cout<<"AFISARE LISTA\n";
    print_fwd();
    cout<<"MENIU\n";
    cout<<"1. Adaugarea unui element la inceput\n";
    cout<<"2. Adaugarea unui element la sfarsit\n";
    cout<<"3. Adaugarea unui element în interiorul listei\n";
    cout<<"4. Afisarea elementelor listei în ordinea introducerii lor\n";
    cout<<"5. Afisarea elementelor listei în ordine inversa\n";
    cout<<"6. Stergerea unui element din lista stiind numarul lui de ordine\n";
    cout<<"7. Stergerea unui element din lista stiind valoarea lui\n";
    cout<<"ALEGETI FUNCTIA DORITA";
    cin>>i;
    switch(i)
    {
        case 1: {
            cout << "introduceti elementul care va fi adaugat: ";
            cin >> x;
            add_start(x);
            print_fwd();
        }
        case 2: {
            cout << "introduceti elementul care va fi adaugat: ";
            cin >> x;
            add_end(x);
            print_fwd();
        }
        case 3: {
            cout << "introduceti elementul care va fi adaugat: ";
            cin >> x;
            add_int(x);
            print_fwd();
        }
        case 4: {
            cout << "elementele listei in odinea introducerii sunt:\n";
            print_fwd();
        }
        case 5: {
            cout << "elementele listei in odine inversa sunt:\n";
            print_back();
        }
        case 6: {
            cout << "introduceti numarul de ordine al elementului care va fi sters: ";
            cin >> x;
            delete_pos(x);
            print_fwd();
        }
        case 7: {
            cout << "introduceti elementul care va fi sters: ";
            cin >> x;
            delete_val(x);
            print_fwd();
        }
        default:
            cout << "OPTIUNEA ALEASA NU EXISTA";
    }
    return 0;
}
