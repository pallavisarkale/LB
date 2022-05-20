//Reverse the all elements in Linked List

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int iNo)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;

    if (Head==NULL)
    {
       *Head=newn;

    }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
}

void Display(PNODE Head)
{
    while (Head!=NULL)
    {
        printf("| %d |->",Head->data);
        Head=Head->next;
    }
    printf("NULL");
}

int Count(PNODE Head)
{
    int iCount=0;
    while (Head!=NULL)
    {
        iCount++;
        Head=Head->next;
    }
    return iCount;
}

void DisplayReverse(PPNODE Head)
{
    PNODE prev, next, current;
    current = *Head;

    while(current!=NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current=next;

    }
    *Head = prev;
}
int main()
{
    PNODE First=NULL;
    int iSize=0;

    InsertFirst(&First,101);
    InsertFirst(&First,911);
    InsertFirst(&First,81);
    InsertFirst(&First,71);


    Display(First);
    iSize=Count(First);

    printf("\nSize of Linked List is %d \t",iSize);

    DisplayReverse(&First);
    Display(First);
    return 0;
}