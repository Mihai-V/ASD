#include <iostream>

using namespace std;

struct node
{
    int info;
    node *next;
    node *prev;

}*head, *tail;
class dqueue
{
public:
    int top1, top2;
    void insert();
    void del();
    void display();
    dqueue()
    {
        top1 = 0;
        top2 = 0;
        head = NULL;
        tail = NULL;
    }
};
void dqueue::insert(int x)
{
    struct node *temp;
    int value;
    if (top1 + top2 == 0)
    {
        cout<<"introduceti elementul: ";
        cin>>value;
        head = new (struct node);
        head->info = value;
        head->next = NULL;
        head->prev = NULL;
        tail = head;
        top1++;
    }
    else {
        switch (x) {
            case 0:
                cout << "introduceti elementul: ";
                cin >> value;
                temp = new (struct node);
                temp->info = value;
                temp->next = head;
                temp->prev = NULL;
                head->prev = temp;
                head = temp;
                top1++;
                break;
            case 1:
                cout << "introduceti elementul: ";
                cin >> value;
                temp = new (struct node);
                temp->info = value;
                temp->next = NULL;
                temp->prev = tail;
                tail->next = temp;
                tail = temp;
                top2++;
                break;
            default:
                break;
        }
    }

}
void dqueue::del(int x)
{
    while (1)
    {
        switch(x)
        {
            case 0:
                head = head->next;
                head->prev = NULL;
                top1--;
                break;
            case 1:
                tail = tail->prev;
                tail->next = NULL;
                top2--;
                break;
            default:
                return;
        }
    }
}
void dqueue::display()
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout<<temp->info<<" ";
        temp = temp->next;
    }
    cout<<endl;
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
    cout<<"3. Stergerea unui element de la inceputul listei\n";
    cout<<"4. Stergerea unui element de la finalul listei\n";
    cout<<"ALEGETI FUNCTIA DORITA";
    cin>>i;
    switch(i)
    {
        case 1: {
            dl.insert(0);
            break;
        }
        case 2: {
            dl.insert(1);
            break;
        }
        case 3: {
            dl.del(0);
            break;
        }
        case 4:
            {
                dl.del(1);
                break;
        }
        default:
            cout << "OPTIUNEA ALEASA NU EXISTA";
    }
    return 0;
}