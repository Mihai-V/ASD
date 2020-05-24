#include <iostream>

using namespace std;

typedef struct elem{
    int key;
    void *val;
    int loc;
} *Elem;
PQ PQ_New ()
{
    PQ h=(PQ)malloc(sizeof(struct heap));
    h->n=0;
    h->MAX=100;
    h->a=(Elem*)malloc(h->MAX*sizeof(Elem));
    return h;
}
int PQ_Size (PQ h){return h->n;}
int PQ_Empty (PQ h){return h->n==0;}
int PQ_Full (PQ h){ return h->n==h->MAX;}
Elem PQ_Min(PQ h){return h->a[0];}


int main()
{

    return 0;
}