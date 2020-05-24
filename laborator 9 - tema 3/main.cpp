#include<stdio.h>
#include<malloc.h>

void insert();
void del();
void display();

struct node
{
    int priority;
    int info;
    struct node *next;
}*start=NULL,*q,*temp,*first;


typedef struct node N;
int main()
{
    int ch;
    do
    {
        printf("\n[1] INSERTION\n[2] DELETION\n[3] DISPLAY [4] EXIT\n:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
                break;
            case 2:del();
                break;
            case 3:display();
                break;
            case 4:
                break;
        }
    }
    while(ch<4);
}

void insert()
{
    int item,itprio;
    first=(N*)malloc(sizeof(N));
    printf("ENTER THE ELT.TO BE INSERTED :\t");
    scanf("%d",&item);
    printf("ENTER ITS PRIORITY :\t");
    scanf("%d",&itprio);
    first->info=item;
    first->priority=itprio;
    first->next=NULL;
    if(start==NULL )
    {
        start=first;
    }
    else if(start!=NULL&&itprio<=start->priority)
    {  first->next=start;
        start=first;
    }
    else
    {
        q=start;
        while(q->next != NULL && q->next->priority<=itprio)
        {q=q->next;}
        first->next=q->next;
        q->next=first;
    }
}

void del()
{
    if(start==NULL)
    {
        printf("\nQUEUE UNDERFLOW\n");

    }
    else
    {
        first=start;
        printf("\nDELETED ITEM IS %d\n",first->info);
        start=start->next;
    }
}

void display()
{
    temp=start;
    if(start==NULL)
        printf("QUEUE IS EMPTY\n");
    else
    {
        printf("QUEUE IS:\n");
        if(temp!=NULL)
            for(temp=start;temp!=NULL;temp=temp->next)
            {
                printf("\n%d priority =%d\n",temp->info,temp->priority);
                temp=temp->next;
            }
    }
}