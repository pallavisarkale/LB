#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

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

    if (*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
    
}

void Dispaly(PNODE Head)
{
    printf("Elements in Linked List are :\n");

    while (Head!=NULL)
    {
        printf("| %d |->",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
    

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

int SeconHighestEle(PNODE Head)
{
    int iMax1=0, iMax2=0;

    while(Head != NULL)
    {
      if (Head->data > iMax1) 
      {
         iMax2 = iMax1;
         iMax1 = Head->data;
      }
      else if(Head->data > iMax2)
      {
        iMax2 = Head->data;
      }
        Head = Head->next;
   }
   return iMax2;

    
}

int main()
{

    int iRet=0,iSecMAx=0,iNo=0;

    PNODE First=NULL;

    InsertFirst(&First,111);
    InsertFirst(&First,51);
    InsertFirst(&First,212);
    InsertFirst(&First,11);
    InsertFirst(&First,1);
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    InsertFirst(&First,1);


    Dispaly(First);
    iRet=Count(First);

    

    iSecMAx=SeconHighestEle(First);
    printf("Second Largest  : %d",iSecMAx);

    return 0;
}