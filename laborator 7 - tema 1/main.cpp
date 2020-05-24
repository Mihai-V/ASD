#include <stdio.h>
#include <stdlib.h>

struct nod
{
    int cheie;
    struct nod* st;
    struct nod* dr;
};

nod *rad,*p;

struct nod* adaug()
{
    int x,i;
    printf("introduceti numarul de noduri: ");
    scanf_s("%d",&x);
    struct nod *t;
    for(i=1;i<=x;i++)
    {
        printf("introduceti elementele: ");
        t=(struct nod*)malloc(sizeof(struct nod));
         scanf("%d",&t->cheie);
         t->st=t->dr=NULL;
        if (rad==NULL)
            rad=t;
        else
        {
            if (getchar()!='n')
                t->st=adaug();
            if (getchar()!='n')
                t->dr=adaug();
        }
    }
    return t;
}

void rsd(struct nod *rad)
{
    if (rad)
    {
        printf("%d",rad->cheie);
        rsd(rad->st);
        rsd(rad->dr);
    }
}

void srd(struct nod *rad)
{
    if (rad)
    {
        srd(rad->st);
        printf("%d",rad->cheie);
        srd(rad->dr);
    }
}

void sdr(struct nod *rad)
{
    if (rad)
    {
        sdr(rad->st);
        sdr(rad->dr);
        printf("%d",rad->cheie);
    }
}

void insert(nod* rad,int x)
{
    struct nod *t;
    t=(struct nod *)malloc(sizeof(struct nod));
    t->dr=NULL;
    t->st=NULL;
    t->cheie=x;
    p=rad;
    int sw=0;
    while (sw==0&&p!=NULL)
    {
        if (p->cheie<t->cheie&&p->dr==NULL)
        {
            p->dr=t;
            sw=1;
        }
        else
            p=p->dr;
        if (p->cheie>t->cheie&&p->st==NULL)
        {
            p->st=t;
            sw=1;
        }
        else
            p=p->st;

    }
}

bool search(struct nod *rad, int x)
{
    p=rad;
    while (p!=NULL)
    {
        if (p->cheie==x)
            return 1;
        if (p->cheie<x)
            p=p->dr;
        else
            p=p->st;

    }
    return 0;
}

int findMax(struct nod* rad)
{
    p=rad;
    while(p->dr!=NULL)
    {
        p=p->dr;
    }
    return p->cheie;
}

void delete_nod(struct nod*t, int x)
{
    p=rad;
    t=(struct nod*)malloc(sizeof(struct nod));
    while (p->cheie!=x&&p!=NULL)
    {
        t=p;
        if (p->cheie<x)
            p=p->dr;
        else p=p->st;
    }
    if (p==NULL)
        printf("Nu exista nodul care are cheia egala cu %d",x);
    else {
        if (p->dr == NULL && p->st == NULL)
            delete p;
        else if (p->dr != NULL && p->st == NULL) {
            if (t->cheie < p->cheie)
                t->dr = p->dr;
            else
                t->st = p->dr;
            delete p;
        }
        else if (p->st != NULL && p->dr == NULL) {
            if (t->cheie < p->cheie)
                t->dr = p->st;
            else
                t->st = p->st;
        delete p;
        }
    }
}
int main()
{
    rad=(struct nod*)malloc(sizeof(struct nod));
    rad=NULL;
    adaug();
    printf("introduceti optiunea dorita\n\n");
    printf("MENIU\n");
    printf("1. RSD\n2. SRD\n3. SDR\n");
    int i;
    scanf("%d",&i);
    switch (i)
    {
        case 1:
            rsd(rad);
            break;
        case 2:
            srd(rad);
            break;
        case 3:
            sdr(rad);
            break;
        default:printf("meniul ales nu exista");
    }
    p=(struct nod*)malloc(sizeof(struct nod));
    insert(p,1);
    search(p,1);
    findMax(p);
    delete_nod(p,1);
    return 0;
}
